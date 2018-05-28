/*****************************************Copyright(C)******************************************
*******************************************浙江万马*********************************************
*------------------------------------------文件信息---------------------------------------------
* FileName			: key.h
* Author			: 王耀
* Date First Issued	: 10/12/2010
* Version			: V
* Description		: 
*----------------------------------------历史版本信息-------------------------------------------
* History			:
* //2010		: V
* Description		: 
*-----------------------------------------------------------------------------------------------
***********************************************************************************************/
/* Includes-----------------------------------------------------------------------------------*/
/* Private define-----------------------------------------------------------------------------*/
/* Private typedef----------------------------------------------------------------------------*/
/* Private macro------------------------------------------------------------------------------*/
/* Private variables--------------------------------------------------------------------------*/
/* Private function prototypes----------------------------------------------------------------*/
/* Private functions--------------------------------------------------------------------------*/
void DealCursor(INT8U Cursor);
void DealKeyBoard(INT8U Cursor);
void Dealblacklist(INT8U Cursor);
void DeleteBlack(void);
void IPChartoNum(INT8U *Ptr,INT8U *IP);
void IPNumtoChar(INT8U *Ptr,INT8U *IP);
void PortChartoNum(INT8U *Ptr,INT8U *Port);
void PortNumtoChar(INT8U *Ptr,INT8U *Port);
void MacChartoNum(INT8U *Ptr,INT8U *LocalMac);
void MacNumtoChar(INT8U *Ptr,INT8U *LocalMac);
void DealWithParm(INT8U PlusFlag);
void DealCursorSize(void);

/************************(C)COPYRIGHT 2010 浙江万马*****END OF FILE****************************/
