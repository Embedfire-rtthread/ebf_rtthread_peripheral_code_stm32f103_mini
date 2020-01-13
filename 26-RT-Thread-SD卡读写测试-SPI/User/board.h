#ifndef __BOARD_H__
#define __BOARD_H__

/*
*************************************************************************
*                             ������ͷ�ļ�
*************************************************************************
*/
/* STM32 �̼���ͷ�ļ� */
#include "stm32f10x.h"

/* ������Ӳ��bspͷ�ļ� */
#include "./sdcard/bsp_spi_sdcard.h"
#include "./sdcard/sdcard_test.h"
#include "./usart/bsp_usart.h"	
#include "./led/bsp_led.h"
#include "./key/bsp_key.h" 


/*
*************************************************************************
*                               ��������
*************************************************************************
*/
void rt_hw_board_init(void);
void SysTick_Handler(void);
	

#endif /* __BOARD_H__ */
