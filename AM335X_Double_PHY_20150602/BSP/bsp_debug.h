/*****************************************Copyright(C)******************************************
*******************************************浙江方泰*********************************************
*------------------------------------------文件信息---------------------------------------------
* FileName			: bsp_debug.h
* Author			:
* Date First Issued	: 130722
* Version			: V
* Description		:
*----------------------------------------历史版本信息-------------------------------------------
* History			:
* //2013		    : V
* Description		:
*-----------------------------------------------------------------------------------------------
***********************************************************************************************/
#ifndef	__BSP_DEBUG_H_
#define	__BSP_DEBUG_H_
/* Includes-----------------------------------------------------------------------------------*/
/* Private define-----------------------------------------------------------------------------*/
/* Private typedef----------------------------------------------------------------------------*/
/* Private macro------------------------------------------------------------------------------*/
/* Private variables--------------------------------------------------------------------------*/
/* Private function prototypes----------------------------------------------------------------*/
/* Private functions--------------------------------------------------------------------------*/
/***********************************************************************************************
* Function		: BSP_DebugUARTInit
* Description	: 使用printf初始化
* Input			:
* Return		:
* Note(s)		:
* Contributor	:130722   wangyao
***********************************************************************************************/
void BSP_DebugUARTInit(void);





/***********************************************************************************************
* Function		: BSPPrintf
* Description	: printf函数
* Input			:
* Return		:
* Note(s)		:
* Contributor	:130722   wangyao
***********************************************************************************************/
void BSPPrintf(char *pStr, ...);





extern void BSP_DebugUARTInit_two(int baud_rate);
extern int uart0_send(char *buf,int len);







#endif	//__BSP_DEBUG_H_
/************************(C)COPYRIGHT 2013 浙江方泰*****END OF FILE****************************/
