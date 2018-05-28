/*****************************************Copyright(C)******************************************
*******************************************浙江方泰*********************************************
*------------------------------------------文件信息---------------------------------------------
* FileName			: main.c
* Author			: 
* Date First Issued	: 130722   
* Version			: V
* Description		: 
*----------------------------------------历史版本信息-------------------------------------------
* History			: 
* //2013	        : V
* Description		: 
*-----------------------------------------------------------------------------------------------
***********************************************************************************************/
/* Includes-----------------------------------------------------------------------------------*/
#include <string.h>
#include "sysconfig.h"
#include "bsp.h"
#include "app.h"
#include "FLashDataLoadProtocol.h"
/* Private define-----------------------------------------------------------------------------*/
/* Private typedef----------------------------------------------------------------------------*/
struct FramePROStruct
{		 
    INT16U DataID;
    INT16U FrameLength;		 
    INT8U  *pdata;	        
};
extern struct FramePROStruct FrameInformation;
/* Private macro------------------------------------------------------------------------------*/
/* Private variables--------------------------------------------------------------------------*/
/* Private function prototypes----------------------------------------------------------------*/
/* Private functions--------------------------------------------------------------------------*/


//把SD卡上boot下载到NAND中
void DealWithUIDATA(INT8U Port,INT8U *p,INT16U Len);
void GetFrameInformation(INT8U *pdata);

/************************(C)COPYRIGHT 2014 浙江方泰*****END OF FILE****************************/


