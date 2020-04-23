/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2020 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "cmsis_os.h"
#include <stdio.h>              /* sprintf() */
#include "test.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef huart2;

/* NOTE: We have a Task handler that will contain a task */
osThreadId defaultTaskHandle;
osThreadId myTask02Handle;
osThreadId myTask03Handle;
osThreadId myTask04Handle;
/* NOTE: We have a Mutex handler that will contain a mutex */
/* NOTE: Mutex are used to work with semaphores */
/* NOTE: Mutex means mutual exclusion */
osMutexId uartMutexHandle;
/* NOTE: We have a Queue handler that will contain a Queue */
osMessageQId printStrQueueHandle;

osTimerId myTimer01Handle;


/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_USART2_UART_Init(void);
void Thread1(void const * argument);
void Thread2(void const * argument);
void Thread3(void const * argument);
void Thread4(void const * argument);
void Callback01(void const * arguments);

/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */
  /*NOTE: We have to create a queue with its size and data type and assign it*/
  /* to a Queue handler */
  /*NOTE: The data type can be a pointer if we want to handle complex types*/
  osMessageQDef(printStrQueue, 5, uint8_t);
  printStrQueueHandle = osMessageCreate(osMessageQ(printStrQueue), NULL);


  /* USER CODE END 2 */

  /* Create the mutex(es) */
  /* definition and creation of uartMutex */
  osMutexDef(uartMutex);
  uartMutexHandle = osMutexCreate(osMutex(uartMutex));

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  osTimerDef(myTimer01, Callback01);
  myTimer01Handle = osTimerCreate(osTimer(myTimer01), osTimerPeriodic, NULL);
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* definition and creation of defaultTask */
  /*NOTE: We need to create a Task with its own priority, number of instances, */
  /*stack size, and assign a thread to the task */
  /*NOTE: We need to assign the task to the task handler */
  osThreadDef(defaultTask, Thread1, osPriorityNormal, 0, 128);
  defaultTaskHandle = osThreadCreate(osThread(defaultTask), NULL);

  /* definition and creation of myTask02 */
  osThreadDef(myTask02, Thread2, osPriorityIdle, 0, 128);
  myTask02Handle = osThreadCreate(osThread(myTask02), NULL);
	
  /* USER CODE BEGIN RTOS_THREADS */
	/* definition and creation of myTask03 */
  osThreadDef(myTask03, Thread3, osPriorityIdle, 1, 128);
  myTask03Handle = osThreadCreate(osThread(myTask03), NULL);

  osThreadDef(myTask04, Thread4, osPriorityAboveNormal, 1, 128);
  myTask04Handle = osThreadCreate(osThread(myTask04), NULL);

  /* USER CODE END RTOS_THREADS */

  /* Start scheduler */
  osKernelStart();
 
  /* We should never get here as control is now taken by the scheduler */
  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage 
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE3);
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 16;
  RCC_OscInitStruct.PLL.PLLN = 336;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV4;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  RCC_OscInitStruct.PLL.PLLR = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB busses clocks 
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief USART2 Initialization Function
  * @param None
  * @retval None
  */
static void MX_USART2_UART_Init(void)
{

  /* USER CODE BEGIN USART2_Init 0 */

  /* USER CODE END USART2_Init 0 */

  /* USER CODE BEGIN USART2_Init 1 */

  /* USER CODE END USART2_Init 1 */
  huart2.Instance = USART2;
  huart2.Init.BaudRate = 115200;
  huart2.Init.WordLength = UART_WORDLENGTH_8B;
  huart2.Init.StopBits = UART_STOPBITS_1;
  huart2.Init.Parity = UART_PARITY_NONE;
  huart2.Init.Mode = UART_MODE_TX_RX;
  huart2.Init.HwFlowCtl = UART_HWCONTROL_NONE;
  huart2.Init.OverSampling = UART_OVERSAMPLING_16;
  if (HAL_UART_Init(&huart2) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN USART2_Init 2 */

  /* USER CODE END USART2_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);

  /*Configure GPIO pin : PC13 */
  GPIO_InitStruct.Pin = GPIO_PIN_13;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : PA5 */
  GPIO_InitStruct.Pin = GPIO_PIN_5;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/* USER CODE BEGIN Header_Thread1 */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used 
  * @retval None
  */
/* USER CODE END Header_Thread1 */
void Thread1(void const * argument)
{
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
	uint8_t txData[] = "running Thread1 I need to make this message really long  \r\n";
  uint32_t notifiedFlag = 0x00;
  osTimerStart(myTimer01Handle,1000);
  /*NOTE: It is always expected to have an infinite loop because the  thread has*/
  /*has to be always in one state, if it is not doing nothing it goes to IDLE state */
  /*but it can not be finished, other wise an error will be generated: prvTaskExitError*/
  /*NOTE: The infinite loop can be generated as you want, whit a while(1) 0r a for(;;)*/
  while(1)
  {
    xTaskNotifyWait(pdFALSE, 0xFF, &notifiedFlag, portMAX_DELAY);
    if(0x02 == (0x02 & notifiedFlag))
    {
      HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_5);
      /*NOTE: When a task requires a resource controlled by the mutex but it is*/
      /*taken by other task the former task will wait there until the resource */
      /*is free byt task that took it first */
      /*NOTE: When a task takes the mutex, its preority automatically changes */
      /*to the same value of the task with highst priority that also use such */
      /*mutex otherwise the many situation where the task with higer priority*/
      /*and do nothing but wait will happen a lot.*/
      /*NOTE: Another scenario is a deadlock, it is when two task take 2 different*/
      /*Resources but at some point task1 needs to use the resourse taken by */
      /*task2 and viseversa then both will be waiting foverer */
      /*For deadlock freertos dont have solution it is up to developer */
      xSemaphoreTake(uartMutexHandle, portMAX_DELAY);
      HAL_UART_Transmit(&huart2, &txData[0], sizeof(txData), 10);
      /*NOTE: With a semephore Give the resource all the mutex waiting will be */
      /*unlocked.*/
      xSemaphoreGive(uartMutexHandle);
			testfunc(10);
      /*osDelay(1000);*/
    }
  }
  /* USER CODE END 5 */ 
}

/* USER CODE BEGIN Header_Thread2 */
/**
* @brief Function implementing the myTask02 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Thread2 */
void Thread2(void const * argument)
{
	uint8_t txData[17] = "running Thread2\r\n";

  /* USER CODE BEGIN Thread2 */

  /* Infinite loop */
  for(;;)
  { 
		if(HAL_GPIO_ReadPin(GPIOC, GPIO_PIN_13) == GPIO_PIN_RESET)
		{
      /*NOTE: some task are going to be waiting for a notification */
      xTaskNotify(myTask03Handle,0x01,eSetBits);
      /*NOTE: with a semaphore take the task will be will be waiting for the*/
      /*mutex release(SemaphoreGive) */
			xSemaphoreTake(uartMutexHandle, portMAX_DELAY);
			HAL_UART_Transmit(&huart2, &txData[0], sizeof(txData), 2);
			xSemaphoreGive(uartMutexHandle);
		}
    osDelay(1000);
  }
  /* USER CODE END Thread2 */
}

/* USER CODE BEGIN Header_Thread3 */
/**
* @brief Function implementing the myTask03 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Thread3 */
void Thread3(void const * argument)
{
	uint8_t txData[] = "running Thread3 message\r\n";
  uint32_t notifiedFlag = 0x00;
  uint8_t queueCnt = 0;

  /* USER CODE BEGIN Thread3 */

  /* Infinite loop */
  for(;;)
  {
    /*NOTE: here the task is waiting for the notification and will not */
    /*continue until the notification is performed */
    /*Many flags can be passed with the notification, in this case the*/
    /*flag expected is 0x01*/
    xTaskNotifyWait(pdFALSE, 0xFF, &notifiedFlag, portMAX_DELAY);
    if(hola == (0x01 & notifiedFlag))
    {
      xSemaphoreTake(uartMutexHandle, portMAX_DELAY);
      HAL_UART_Transmit(&huart2, &txData[0], sizeof(txData), 2);
      xSemaphoreGive(uartMutexHandle);
      queueCnt++;
      /*NOTE: queue are the way now the threads share data.*/
      /*The las number is a delay*/
      osMessagePut(printStrQueueHandle, queueCnt, 200);
    }
    // osDelay(1000);
  }
  /* USER CODE END Thread3 */
}

/* USER CODE BEGIN Header_Thread3 */
/**
* @brief Function implementing the myTask04 thread.
* @param argument: Not used
* @retval None
*/
/* USER CODE END Header_Thread3 */
void Thread4(void const * argument)
{
  uint8_t queueReceive[3] = " \r\n";
  osEvent returnVal = {0};
  while(1)
  {
    /*NOTE: Here the task will be waiting just like a notification but this*/
    /*time it will be waiting for a osMessagePut and the corresponding */
    /*queue handler*/
      returnVal = osMessageGet(printStrQueueHandle, 400);
      if(0 != returnVal.value.signals)
      {
        queueReceive[0] = (uint8_t)((returnVal.value.v % 10) + 0x30);
        HAL_UART_Transmit(&huart2, &queueReceive[0], sizeof(queueReceive), 2);
      }
  }
}



void Callback01(void const * arguments)
{
  xTaskNotify(defaultTaskHandle,0x02,eSetBits);
}

 /**
  * @brief  Period elapsed callback in non blocking mode
  * @note   This function is called  when TIM3 interrupt took place, inside
  * HAL_TIM_IRQHandler(). It makes a direct call to HAL_IncTick() to increment
  * a global variable "uwTick" used as application time base.
  * @param  htim : TIM handle
  * @retval None
  */
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  /* USER CODE BEGIN Callback 0 */

  /* USER CODE END Callback 0 */
  if (htim->Instance == TIM3) {
    HAL_IncTick();
  }
  /* USER CODE BEGIN Callback 1 */

  /* USER CODE END Callback 1 */
}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */

  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{ 
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     tex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
