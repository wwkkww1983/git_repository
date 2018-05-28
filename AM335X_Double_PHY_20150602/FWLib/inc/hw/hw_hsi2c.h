

/**
 *  @Component:   MSHSI2COCP
 *
 *  @Filename:    ../../CredDataBase/i2c.h
 *
 ============================================================================ */
/*
* Copyright (C) 2010 Texas Instruments Incorporated - http://www.ti.com/
*/
/*
*  Redistribution and use in source and binary forms, with or without
*  modification, are permitted provided that the following conditions
*  are met:
*
*    Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the
*    documentation and/or other materials provided with the
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/



#ifndef _HW_I2C_H_
#define _HW_I2C_H_

#ifdef __cplusplus
extern "C" {
#endif


/***********************************************************************\
 * Register arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundle arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundles Definition
\***********************************************************************/



/*************************************************************************\
 * Registers Definition
\*************************************************************************/

#define I2C_REVNB_LO   (0x0)
#define I2C_REVNB_HI   (0x4)
#define I2C_SYSC   (0x10)
#define I2C_EOI   (0x20)
#define I2C_IRQSTATUS_RAW   (0x24)
#define I2C_IRQSTATUS   (0x28)
#define I2C_IRQENABLE_SET   (0x2C)
#define I2C_IRQENABLE_CLR   (0x30)
#define I2C_WE   (0x34)
#define I2C_DMARXENABLE_SET   (0x38)
#define I2C_DMATXENABLE_SET   (0x3C)
#define I2C_DMARXENABLE_CLR   (0x40)
#define I2C_DMATXENABLE_CLR   (0x44)
#define I2C_DMARXWAKE_EN   (0x48)
#define I2C_DMATXWAKE_EN   (0x4C)
#define I2C_SYSS   (0x90)
#define I2C_BUF   (0x94)
#define I2C_CNT   (0x98)
#define I2C_DATA   (0x9C)
#define I2C_CON   (0xA4)
#define I2C_OA   (0xA8)
#define I2C_SA   (0xAC)
#define I2C_PSC   (0xB0)
#define I2C_SCLL   (0xB4)
#define I2C_SCLH   (0xB8)
#define I2C_SYSTEST   (0xBC)
#define I2C_BUFSTAT   (0xC0)
#define I2C_OAn(n)   (0xC4 + ((n) * 4))
#define I2C_ACTOA   (0xD0)
#define I2C_SBLOCK   (0xD4)

/**************************************************************************
 * Field Definition Macros
**************************************************************************/

/* REVNB_LO */
#define I2C_REVNB_LO_CUSTOM   (0x000000C0u)
#define I2C_REVNB_LO_CUSTOM_SHIFT   (0x00000006u)

#define I2C_REVNB_LO_MAJOR   (0x00000700u)
#define I2C_REVNB_LO_MAJOR_SHIFT   (0x00000008u)

#define I2C_REVNB_LO_MINOR   (0x0000003Fu)
#define I2C_REVNB_LO_MINOR_SHIFT   (0x00000000u)

#define I2C_REVNB_LO_RTL   (0x0000F800u)
#define I2C_REVNB_LO_RTL_SHIFT   (0x0000000Bu)


/* REVNB_HI */
#define I2C_REVNB_HI_FUNC   (0x00000FFFu)
#define I2C_REVNB_HI_FUNC_SHIFT   (0x00000000u)

#define I2C_REVNB_HI_SCHEME   (0x0000C000u)
#define I2C_REVNB_HI_SCHEME_SHIFT   (0x0000000Eu)


/* SYSC */
#define I2C_SYSC_AUTOIDLE   (0x00000001u)
#define I2C_SYSC_AUTOIDLE_SHIFT   (0x00000000u)
#define I2C_SYSC_AUTOIDLE_DISABLE   (0x0u)
#define I2C_SYSC_AUTOIDLE_ENABLE   (0x1u)

#define I2C_SYSC_CLKACTIVITY   (0x00000300u)
#define I2C_SYSC_CLKACTIVITY_SHIFT   (0x00000008u)
#define I2C_SYSC_CLKACTIVITY_BOTH   (0x3u)
#define I2C_SYSC_CLKACTIVITY_FUNC   (0x2u)
#define I2C_SYSC_CLKACTIVITY_NONE   (0x0u)
#define I2C_SYSC_CLKACTIVITY_OCP   (0x1u)

#define I2C_SYSC_ENAWAKEUP   (0x00000004u)
#define I2C_SYSC_ENAWAKEUP_SHIFT   (0x00000002u)
#define I2C_SYSC_ENAWAKEUP_DISABLE   (0x0u)
#define I2C_SYSC_ENAWAKEUP_ENABLE   (0x1u)

#define I2C_SYSC_IDLEMODE   (0x00000018u)
#define I2C_SYSC_IDLEMODE_SHIFT   (0x00000003u)
#define I2C_SYSC_IDLEMODE_FORCEIDLE   (0x0u)
#define I2C_SYSC_IDLEMODE_NOIDLE   (0x1u)
#define I2C_SYSC_IDLEMODE_SMARTIDLE   (0x2u)
#define I2C_SYSC_IDLEMODE_SMARTIDLE_WAKEUP   (0x3u)

#define I2C_SYSC_SRST   (0x00000002u)
#define I2C_SYSC_SRST_SHIFT   (0x00000001u)
#define I2C_SYSC_SRST_NORMAL   (0x0u)
#define I2C_SYSC_SRST_RESET   (0x1u)


/* EOI */
#define I2C_EOI_LINE_NUMBER   (0x00000001u)
#define I2C_EOI_LINE_NUMBER_SHIFT   (0x00000000u)


/* IRQSTATUS_RAW */
#define I2C_IRQSTATUS_RAW_AAS   (0x00000200u)
#define I2C_IRQSTATUS_RAW_AAS_SHIFT   (0x00000009u)
#define I2C_IRQSTATUS_RAW_AAS_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_AAS_NOACTION   (0x0u)
#define I2C_IRQSTATUS_RAW_AAS_RECOGNIZED   (0x1u)

#define I2C_IRQSTATUS_RAW_AERR   (0x00000080u)
#define I2C_IRQSTATUS_RAW_AERR_SHIFT   (0x00000007u)
#define I2C_IRQSTATUS_RAW_AERR_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_AERR_ERROR   (0x1u)
#define I2C_IRQSTATUS_RAW_AERR_NOACTION   (0x0u)

#define I2C_IRQSTATUS_RAW_AL   (0x00000001u)
#define I2C_IRQSTATUS_RAW_AL_SHIFT   (0x00000000u)
#define I2C_IRQSTATUS_RAW_AL_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_AL_LOST   (0x1u)
#define I2C_IRQSTATUS_RAW_AL_NORMAL   (0x0u)

#define I2C_IRQSTATUS_RAW_ARDY   (0x00000004u)
#define I2C_IRQSTATUS_RAW_ARDY_SHIFT   (0x00000002u)
#define I2C_IRQSTATUS_RAW_ARDY_BUSY   (0x0u)
#define I2C_IRQSTATUS_RAW_ARDY_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_ARDY_READY   (0x1u)

#define I2C_IRQSTATUS_RAW_BB   (0x00001000u)
#define I2C_IRQSTATUS_RAW_BB_SHIFT   (0x0000000Cu)
#define I2C_IRQSTATUS_RAW_BB_FREE   (0x0u)
#define I2C_IRQSTATUS_RAW_BB_OCCUPIED   (0x1u)

#define I2C_IRQSTATUS_RAW_BF   (0x00000100u)
#define I2C_IRQSTATUS_RAW_BF_SHIFT   (0x00000008u)
#define I2C_IRQSTATUS_RAW_BF_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_BF_FREE   (0x1u)
#define I2C_IRQSTATUS_RAW_BF_NO   (0x0u)

#define I2C_IRQSTATUS_RAW_GC   (0x00000020u)
#define I2C_IRQSTATUS_RAW_GC_SHIFT   (0x00000005u)
#define I2C_IRQSTATUS_RAW_GC_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_GC_GENERALCALL   (0x1u)
#define I2C_IRQSTATUS_RAW_GC_NO   (0x0u)

#define I2C_IRQSTATUS_RAW_NACK   (0x00000002u)
#define I2C_IRQSTATUS_RAW_NACK_SHIFT   (0x00000001u)
#define I2C_IRQSTATUS_RAW_NACK_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_NACK_DETECTED   (0x1u)
#define I2C_IRQSTATUS_RAW_NACK_NOTDETECTED   (0x0u)

#define I2C_IRQSTATUS_RAW_RDR   (0x00002000u)
#define I2C_IRQSTATUS_RAW_RDR_SHIFT   (0x0000000Du)
#define I2C_IRQSTATUS_RAW_RDR_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_RDR_ENABLED   (0x1u)
#define I2C_IRQSTATUS_RAW_RDR_INACTIVE   (0x0u)

#define I2C_IRQSTATUS_RAW_ROVR   (0x00000800u)
#define I2C_IRQSTATUS_RAW_ROVR_SHIFT   (0x0000000Bu)
#define I2C_IRQSTATUS_RAW_ROVR_NORMAL   (0x0u)
#define I2C_IRQSTATUS_RAW_ROVR_OVERRUN   (0x1u)

#define I2C_IRQSTATUS_RAW_RRDY   (0x00000008u)
#define I2C_IRQSTATUS_RAW_RRDY_SHIFT   (0x00000003u)
#define I2C_IRQSTATUS_RAW_RRDY_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_RRDY_DATAREADY   (0x1u)
#define I2C_IRQSTATUS_RAW_RRDY_NODATA   (0x0u)

#define I2C_IRQSTATUS_RAW_STC   (0x00000040u)
#define I2C_IRQSTATUS_RAW_STC_SHIFT   (0x00000006u)
#define I2C_IRQSTATUS_RAW_STC_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_STC_NO   (0x0u)
#define I2C_IRQSTATUS_RAW_STC_STARTCONDITION   (0x1u)

#define I2C_IRQSTATUS_RAW_XDR   (0x00004000u)
#define I2C_IRQSTATUS_RAW_XDR_SHIFT   (0x0000000Eu)
#define I2C_IRQSTATUS_RAW_XDR_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_XDR_ENABLED   (0x1u)
#define I2C_IRQSTATUS_RAW_XDR_INACTIVE   (0x0u)

#define I2C_IRQSTATUS_RAW_XRDY   (0x00000010u)
#define I2C_IRQSTATUS_RAW_XRDY_SHIFT   (0x00000004u)
#define I2C_IRQSTATUS_RAW_XRDY_CLEAR   (0x1u)
#define I2C_IRQSTATUS_RAW_XRDY_DATAREADY   (0x1u)
#define I2C_IRQSTATUS_RAW_XRDY_ONGOING   (0x0u)

#define I2C_IRQSTATUS_RAW_XUDF   (0x00000400u)
#define I2C_IRQSTATUS_RAW_XUDF_SHIFT   (0x0000000Au)
#define I2C_IRQSTATUS_RAW_XUDF_NORMAL   (0x0u)
#define I2C_IRQSTATUS_RAW_XUDF_UNDERFLOW   (0x1u)


/* IRQSTATUS */
#define I2C_IRQSTATUS_AAS   (0x00000200u)
#define I2C_IRQSTATUS_AAS_SHIFT   (0x00000009u)
#define I2C_IRQSTATUS_AAS_NO   (0x0u)
#define I2C_IRQSTATUS_AAS_RECOGNIZED   (0x1u)

#define I2C_IRQSTATUS_AERR   (0x00000080u)
#define I2C_IRQSTATUS_AERR_SHIFT   (0x00000007u)
#define I2C_IRQSTATUS_AERR_ERROR   (0x1u)
#define I2C_IRQSTATUS_AERR_NO   (0x0u)

#define I2C_IRQSTATUS_AL   (0x00000001u)
#define I2C_IRQSTATUS_AL_SHIFT   (0x00000000u)
#define I2C_IRQSTATUS_AL_LOST   (0x1u)
#define I2C_IRQSTATUS_AL_NORMAL   (0x0u)

#define I2C_IRQSTATUS_ARDY   (0x00000004u)
#define I2C_IRQSTATUS_ARDY_SHIFT   (0x00000002u)
#define I2C_IRQSTATUS_ARDY_BUSY   (0x0u)
#define I2C_IRQSTATUS_ARDY_READY   (0x1u)

#define I2C_IRQSTATUS_BB   (0x00001000u)
#define I2C_IRQSTATUS_BB_SHIFT   (0x0000000Cu)
#define I2C_IRQSTATUS_BB_FREE   (0x0u)
#define I2C_IRQSTATUS_BB_OCCUPIED   (0x1u)

#define I2C_IRQSTATUS_BF   (0x00000100u)
#define I2C_IRQSTATUS_BF_SHIFT   (0x00000008u)
#define I2C_IRQSTATUS_BF_FREE   (0x1u)
#define I2C_IRQSTATUS_BF_NO   (0x0u)

#define I2C_IRQSTATUS_GC   (0x00000020u)
#define I2C_IRQSTATUS_GC_SHIFT   (0x00000005u)
#define I2C_IRQSTATUS_GC_GENERALCALL   (0x1u)
#define I2C_IRQSTATUS_GC_NO   (0x0u)

#define I2C_IRQSTATUS_NACK   (0x00000002u)
#define I2C_IRQSTATUS_NACK_SHIFT   (0x00000001u)
#define I2C_IRQSTATUS_NACK_DETECTED   (0x1u)
#define I2C_IRQSTATUS_NACK_NOTDETECTED   (0x0u)

#define I2C_IRQSTATUS_RDR   (0x00002000u)
#define I2C_IRQSTATUS_RDR_SHIFT   (0x0000000Du)
#define I2C_IRQSTATUS_RDR_ENABLED   (0x1u)
#define I2C_IRQSTATUS_RDR_INACTIVE   (0x0u)

#define I2C_IRQSTATUS_ROVR   (0x00000800u)
#define I2C_IRQSTATUS_ROVR_SHIFT   (0x0000000Bu)
#define I2C_IRQSTATUS_ROVR_NORMAL   (0x0u)
#define I2C_IRQSTATUS_ROVR_OVERRUN   (0x1u)

#define I2C_IRQSTATUS_RRDY   (0x00000008u)
#define I2C_IRQSTATUS_RRDY_SHIFT   (0x00000003u)
#define I2C_IRQSTATUS_RRDY_DATAREADY   (0x1u)
#define I2C_IRQSTATUS_RRDY_NODATA   (0x0u)

#define I2C_IRQSTATUS_STC   (0x00000040u)
#define I2C_IRQSTATUS_STC_SHIFT   (0x00000006u)
#define I2C_IRQSTATUS_STC_NO   (0x0u)
#define I2C_IRQSTATUS_STC_STARTCONDITION   (0x1u)

#define I2C_IRQSTATUS_XDR   (0x00004000u)
#define I2C_IRQSTATUS_XDR_SHIFT   (0x0000000Eu)
#define I2C_IRQSTATUS_XDR_ENABLED   (0x1u)
#define I2C_IRQSTATUS_XDR_INACTIVE   (0x0u)

#define I2C_IRQSTATUS_XRDY   (0x00000010u)
#define I2C_IRQSTATUS_XRDY_SHIFT   (0x00000004u)
#define I2C_IRQSTATUS_XRDY_DATAREADY   (0x1u)
#define I2C_IRQSTATUS_XRDY_ONGOING   (0x0u)

#define I2C_IRQSTATUS_XUDF   (0x00000400u)
#define I2C_IRQSTATUS_XUDF_SHIFT   (0x0000000Au)
#define I2C_IRQSTATUS_XUDF_NORMAL   (0x0u)
#define I2C_IRQSTATUS_XUDF_UNDERFLOW   (0x1u)


/* IRQENABLE_SET */
#define I2C_IRQENABLE_SET_AERR_IE   (0x00000080u)
#define I2C_IRQENABLE_SET_AERR_IE_SHIFT   (0x00000007u)
#define I2C_IRQENABLE_SET_AERR_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_AERR_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_AL_IE   (0x00000001u)
#define I2C_IRQENABLE_SET_AL_IE_SHIFT   (0x00000000u)
#define I2C_IRQENABLE_SET_AL_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_AL_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_ARDY_IE   (0x00000004u)
#define I2C_IRQENABLE_SET_ARDY_IE_SHIFT   (0x00000002u)
#define I2C_IRQENABLE_SET_ARDY_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_ARDY_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_ASS_IE   (0x00000200u)
#define I2C_IRQENABLE_SET_ASS_IE_SHIFT   (0x00000009u)
#define I2C_IRQENABLE_SET_ASS_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_ASS_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_BF_IE   (0x00000100u)
#define I2C_IRQENABLE_SET_BF_IE_SHIFT   (0x00000008u)
#define I2C_IRQENABLE_SET_BF_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_BF_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_GC_IE   (0x00000020u)
#define I2C_IRQENABLE_SET_GC_IE_SHIFT   (0x00000005u)
#define I2C_IRQENABLE_SET_GC_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_GC_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_NACK_IE   (0x00000002u)
#define I2C_IRQENABLE_SET_NACK_IE_SHIFT   (0x00000001u)
#define I2C_IRQENABLE_SET_NACK_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_NACK_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_RDR_IE   (0x00002000u)
#define I2C_IRQENABLE_SET_RDR_IE_SHIFT   (0x0000000Du)
#define I2C_IRQENABLE_SET_RDR_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_RDR_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_ROVR   (0x00000800u)
#define I2C_IRQENABLE_SET_ROVR_SHIFT   (0x0000000Bu)
#define I2C_IRQENABLE_SET_ROVR_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_ROVR_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_RRDY_IE   (0x00000008u)
#define I2C_IRQENABLE_SET_RRDY_IE_SHIFT   (0x00000003u)
#define I2C_IRQENABLE_SET_RRDY_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_RRDY_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_STC_IE   (0x00000040u)
#define I2C_IRQENABLE_SET_STC_IE_SHIFT   (0x00000006u)
#define I2C_IRQENABLE_SET_STC_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_STC_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_XDR_IE   (0x00004000u)
#define I2C_IRQENABLE_SET_XDR_IE_SHIFT   (0x0000000Eu)
#define I2C_IRQENABLE_SET_XDR_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_XDR_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_XRDY_IE   (0x00000010u)
#define I2C_IRQENABLE_SET_XRDY_IE_SHIFT   (0x00000004u)
#define I2C_IRQENABLE_SET_XRDY_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_XRDY_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_SET_XUDF   (0x00000400u)
#define I2C_IRQENABLE_SET_XUDF_SHIFT   (0x0000000Au)
#define I2C_IRQENABLE_SET_XUDF_DISABLE   (0x0u)
#define I2C_IRQENABLE_SET_XUDF_ENABLE   (0x1u)


/* IRQENABLE_CLR */
#define I2C_IRQENABLE_CLR_AERR_IE   (0x00000080u)
#define I2C_IRQENABLE_CLR_AERR_IE_SHIFT   (0x00000007u)
#define I2C_IRQENABLE_CLR_AERR_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_AERR_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_AL_IE   (0x00000001u)
#define I2C_IRQENABLE_CLR_AL_IE_SHIFT   (0x00000000u)
#define I2C_IRQENABLE_CLR_AL_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_AL_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_ARDY_IE   (0x00000004u)
#define I2C_IRQENABLE_CLR_ARDY_IE_SHIFT   (0x00000002u)
#define I2C_IRQENABLE_CLR_ARDY_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_ARDY_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_ASS_IE   (0x00000200u)
#define I2C_IRQENABLE_CLR_ASS_IE_SHIFT   (0x00000009u)
#define I2C_IRQENABLE_CLR_ASS_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_ASS_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_BF_IE   (0x00000100u)
#define I2C_IRQENABLE_CLR_BF_IE_SHIFT   (0x00000008u)
#define I2C_IRQENABLE_CLR_BF_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_BF_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_GC_IE   (0x00000020u)
#define I2C_IRQENABLE_CLR_GC_IE_SHIFT   (0x00000005u)
#define I2C_IRQENABLE_CLR_GC_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_GC_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_NACK_IE   (0x00000002u)
#define I2C_IRQENABLE_CLR_NACK_IE_SHIFT   (0x00000001u)
#define I2C_IRQENABLE_CLR_NACK_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_NACK_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_RDR_IE   (0x00002000u)
#define I2C_IRQENABLE_CLR_RDR_IE_SHIFT   (0x0000000Du)
#define I2C_IRQENABLE_CLR_RDR_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_RDR_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_ROVR   (0x00000800u)
#define I2C_IRQENABLE_CLR_ROVR_SHIFT   (0x0000000Bu)
#define I2C_IRQENABLE_CLR_ROVR_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_ROVR_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_RRDY_IE   (0x00000008u)
#define I2C_IRQENABLE_CLR_RRDY_IE_SHIFT   (0x00000003u)
#define I2C_IRQENABLE_CLR_RRDY_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_RRDY_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_STC_IE   (0x00000040u)
#define I2C_IRQENABLE_CLR_STC_IE_SHIFT   (0x00000006u)
#define I2C_IRQENABLE_CLR_STC_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_STC_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_XDR_IE   (0x00004000u)
#define I2C_IRQENABLE_CLR_XDR_IE_SHIFT   (0x0000000Eu)
#define I2C_IRQENABLE_CLR_XDR_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_XDR_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_XRDY_IE   (0x00000010u)
#define I2C_IRQENABLE_CLR_XRDY_IE_SHIFT   (0x00000004u)
#define I2C_IRQENABLE_CLR_XRDY_IE_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_XRDY_IE_ENABLE   (0x1u)

#define I2C_IRQENABLE_CLR_XUDF   (0x00000400u)
#define I2C_IRQENABLE_CLR_XUDF_SHIFT   (0x0000000Au)
#define I2C_IRQENABLE_CLR_XUDF_DISABLE   (0x0u)
#define I2C_IRQENABLE_CLR_XUDF_ENABLE   (0x1u)


/* WE */
#define I2C_WE_AAS   (0x00000200u)
#define I2C_WE_AAS_SHIFT   (0x00000009u)
#define I2C_WE_AAS_DISABLE   (0x0u)
#define I2C_WE_AAS_ENABLE   (0x1u)

#define I2C_WE_AL   (0x00000001u)
#define I2C_WE_AL_SHIFT   (0x00000000u)
#define I2C_WE_AL_DISABLE   (0x0u)
#define I2C_WE_AL_ENABLE   (0x1u)

#define I2C_WE_ARDY   (0x00000004u)
#define I2C_WE_ARDY_SHIFT   (0x00000002u)
#define I2C_WE_ARDY_DISABLE   (0x0u)
#define I2C_WE_ARDY_ENABLE   (0x1u)

#define I2C_WE_BF   (0x00000100u)
#define I2C_WE_BF_SHIFT   (0x00000008u)
#define I2C_WE_BF_DISABLE   (0x0u)
#define I2C_WE_BF_ENABLE   (0x1u)

#define I2C_WE_DRDY   (0x00000008u)
#define I2C_WE_DRDY_SHIFT   (0x00000003u)
#define I2C_WE_DRDY_DISABLE   (0x0u)
#define I2C_WE_DRDY_ENABLE   (0x1u)

#define I2C_WE_GC   (0x00000020u)
#define I2C_WE_GC_SHIFT   (0x00000005u)
#define I2C_WE_GC_DISABLE   (0x0u)
#define I2C_WE_GC_ENABLE   (0x1u)

#define I2C_WE_NACK   (0x00000002u)
#define I2C_WE_NACK_SHIFT   (0x00000001u)
#define I2C_WE_NACK_DISABLE   (0x0u)
#define I2C_WE_NACK_ENABLE   (0x1u)

#define I2C_WE_RDR   (0x00002000u)
#define I2C_WE_RDR_SHIFT   (0x0000000Du)
#define I2C_WE_RDR_DISABLE   (0x0u)
#define I2C_WE_RDR_ENABLE   (0x1u)

#define I2C_WE_ROVR   (0x00000800u)
#define I2C_WE_ROVR_SHIFT   (0x0000000Bu)
#define I2C_WE_ROVR_DISABLE   (0x0u)
#define I2C_WE_ROVR_ENABLE   (0x1u)

#define I2C_WE_STC   (0x00000040u)
#define I2C_WE_STC_SHIFT   (0x00000006u)
#define I2C_WE_STC_DISABLE   (0x0u)
#define I2C_WE_STC_ENABLE   (0x1u)

#define I2C_WE_XDR   (0x00004000u)
#define I2C_WE_XDR_SHIFT   (0x0000000Eu)
#define I2C_WE_XDR_DISABLE   (0x0u)
#define I2C_WE_XDR_ENABLE   (0x1u)

#define I2C_WE_XUDF   (0x00000400u)
#define I2C_WE_XUDF_SHIFT   (0x0000000Au)
#define I2C_WE_XUDF_DISABLE   (0x0u)
#define I2C_WE_XUDF_ENABLE   (0x1u)


/* DMARXENABLE_SET */
#define I2C_DMARXENABLE_SET_DMARX_ENABLE_SET   (0x00000001u)
#define I2C_DMARXENABLE_SET_DMARX_ENABLE_SET_SHIFT   (0x00000000u)


/* DMATXENABLE_SET */
#define I2C_DMATXENABLE_SET_DMATX_ENABLE_SET   (0x00000001u)
#define I2C_DMATXENABLE_SET_DMATX_ENABLE_SET_SHIFT   (0x00000000u)


/* DMARXENABLE_CLR */
#define I2C_DMARXENABLE_CLR_DMARX_ENABLE_CLEAR   (0x00000001u)
#define I2C_DMARXENABLE_CLR_DMARX_ENABLE_CLEAR_SHIFT   (0x00000000u)


/* DMATXENABLE_CLR */
#define I2C_DMATXENABLE_CLR_DMATX_ENABLE_CLEAR   (0x00000001u)
#define I2C_DMATXENABLE_CLR_DMATX_ENABLE_CLEAR_SHIFT   (0x00000000u)


/* DMARXWAKE_EN */
#define I2C_DMARXWAKE_EN_AAS   (0x00000200u)
#define I2C_DMARXWAKE_EN_AAS_SHIFT   (0x00000009u)
#define I2C_DMARXWAKE_EN_AAS_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_AAS_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_AL   (0x00000001u)
#define I2C_DMARXWAKE_EN_AL_SHIFT   (0x00000000u)
#define I2C_DMARXWAKE_EN_AL_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_AL_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_ARDY   (0x00000004u)
#define I2C_DMARXWAKE_EN_ARDY_SHIFT   (0x00000002u)
#define I2C_DMARXWAKE_EN_ARDY_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_ARDY_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_BF   (0x00000100u)
#define I2C_DMARXWAKE_EN_BF_SHIFT   (0x00000008u)
#define I2C_DMARXWAKE_EN_BF_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_BF_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_DRDY   (0x00000008u)
#define I2C_DMARXWAKE_EN_DRDY_SHIFT   (0x00000003u)
#define I2C_DMARXWAKE_EN_DRDY_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_DRDY_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_GC   (0x00000020u)
#define I2C_DMARXWAKE_EN_GC_SHIFT   (0x00000005u)
#define I2C_DMARXWAKE_EN_GC_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_GC_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_NACK   (0x00000002u)
#define I2C_DMARXWAKE_EN_NACK_SHIFT   (0x00000001u)
#define I2C_DMARXWAKE_EN_NACK_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_NACK_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_RDR   (0x00002000u)
#define I2C_DMARXWAKE_EN_RDR_SHIFT   (0x0000000Du)
#define I2C_DMARXWAKE_EN_RDR_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_RDR_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_ROVR   (0x00000800u)
#define I2C_DMARXWAKE_EN_ROVR_SHIFT   (0x0000000Bu)
#define I2C_DMARXWAKE_EN_ROVR_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_ROVR_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_STC   (0x00000040u)
#define I2C_DMARXWAKE_EN_STC_SHIFT   (0x00000006u)
#define I2C_DMARXWAKE_EN_STC_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_STC_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_XDR   (0x00004000u)
#define I2C_DMARXWAKE_EN_XDR_SHIFT   (0x0000000Eu)
#define I2C_DMARXWAKE_EN_XDR_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_XDR_ENABLE   (0x1u)

#define I2C_DMARXWAKE_EN_XUDF   (0x00000400u)
#define I2C_DMARXWAKE_EN_XUDF_SHIFT   (0x0000000Au)
#define I2C_DMARXWAKE_EN_XUDF_DISABLE   (0x0u)
#define I2C_DMARXWAKE_EN_XUDF_ENABLE   (0x1u)


/* DMATXWAKE_EN */
#define I2C_DMATXWAKE_EN_AAS   (0x00000200u)
#define I2C_DMATXWAKE_EN_AAS_SHIFT   (0x00000009u)
#define I2C_DMATXWAKE_EN_AAS_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_AAS_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_AL   (0x00000001u)
#define I2C_DMATXWAKE_EN_AL_SHIFT   (0x00000000u)
#define I2C_DMATXWAKE_EN_AL_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_AL_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_ARDY   (0x00000004u)
#define I2C_DMATXWAKE_EN_ARDY_SHIFT   (0x00000002u)
#define I2C_DMATXWAKE_EN_ARDY_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_ARDY_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_BF   (0x00000100u)
#define I2C_DMATXWAKE_EN_BF_SHIFT   (0x00000008u)
#define I2C_DMATXWAKE_EN_BF_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_BF_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_DRDY   (0x00000008u)
#define I2C_DMATXWAKE_EN_DRDY_SHIFT   (0x00000003u)
#define I2C_DMATXWAKE_EN_DRDY_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_DRDY_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_GC   (0x00000020u)
#define I2C_DMATXWAKE_EN_GC_SHIFT   (0x00000005u)
#define I2C_DMATXWAKE_EN_GC_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_GC_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_NACK   (0x00000002u)
#define I2C_DMATXWAKE_EN_NACK_SHIFT   (0x00000001u)
#define I2C_DMATXWAKE_EN_NACK_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_NACK_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_RDR   (0x00002000u)
#define I2C_DMATXWAKE_EN_RDR_SHIFT   (0x0000000Du)
#define I2C_DMATXWAKE_EN_RDR_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_RDR_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_ROVR   (0x00000800u)
#define I2C_DMATXWAKE_EN_ROVR_SHIFT   (0x0000000Bu)
#define I2C_DMATXWAKE_EN_ROVR_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_ROVR_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_STC   (0x00000040u)
#define I2C_DMATXWAKE_EN_STC_SHIFT   (0x00000006u)
#define I2C_DMATXWAKE_EN_STC_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_STC_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_XDR   (0x00004000u)
#define I2C_DMATXWAKE_EN_XDR_SHIFT   (0x0000000Eu)
#define I2C_DMATXWAKE_EN_XDR_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_XDR_ENABLE   (0x1u)

#define I2C_DMATXWAKE_EN_XUDF   (0x00000400u)
#define I2C_DMATXWAKE_EN_XUDF_SHIFT   (0x0000000Au)
#define I2C_DMATXWAKE_EN_XUDF_DISABLE   (0x0u)
#define I2C_DMATXWAKE_EN_XUDF_ENABLE   (0x1u)


/* SYSS */
#define I2C_SYSS_RDONE   (0x00000001u)
#define I2C_SYSS_RDONE_SHIFT   (0x00000000u)
#define I2C_SYSS_RDONE_RSTCOMP   (0x1u)
#define I2C_SYSS_RDONE_RSTONGOING   (0x0u)


/* BUF */
#define I2C_BUF_RDMA_EN   (0x00008000u)
#define I2C_BUF_RDMA_EN_SHIFT   (0x0000000Fu)
#define I2C_BUF_RDMA_EN_DISABLE   (0x0u)
#define I2C_BUF_RDMA_EN_ENABLE   (0x1u)

#define I2C_BUF_RXFIFO_CLR   (0x00004000u)
#define I2C_BUF_RXFIFO_CLR_SHIFT   (0x0000000Eu)
#define I2C_BUF_RXFIFO_CLR_NMODE   (0x0u)
#define I2C_BUF_RXFIFO_CLR_RSTMODE   (0x1u)

#define I2C_BUF_RXTRSH   (0x00003F00u)
#define I2C_BUF_RXTRSH_SHIFT   (0x00000008u)

#define I2C_BUF_TXFIFO_CLR   (0x00000040u)
#define I2C_BUF_TXFIFO_CLR_SHIFT   (0x00000006u)
#define I2C_BUF_TXFIFO_CLR_NMODE   (0x0u)
#define I2C_BUF_TXFIFO_CLR_RSTMODE   (0x1u)

#define I2C_BUF_TXTRSH   (0x0000003Fu)
#define I2C_BUF_TXTRSH_SHIFT   (0x00000000u)

#define I2C_BUF_XDMA_EN   (0x00000080u)
#define I2C_BUF_XDMA_EN_SHIFT   (0x00000007u)
#define I2C_BUF_XDMA_EN_DISABLE   (0x0u)
#define I2C_BUF_XDMA_EN_ENABLE   (0x1u)


/* CNT */
#define I2C_CNT_DCOUNT   (0x0000FFFFu)
#define I2C_CNT_DCOUNT_SHIFT   (0x00000000u)


/* DATA */
#define I2C_DATA_DATA   (0x000000FFu)
#define I2C_DATA_DATA_SHIFT   (0x00000000u)


/* CON */
#define I2C_CON_I2C_EN   (0x00008000u)
#define I2C_CON_I2C_EN_SHIFT   (0x0000000Fu)
#define I2C_CON_I2C_EN_DISABLE   (0x0u)
#define I2C_CON_I2C_EN_ENABLE   (0x1u)

#define I2C_CON_MST   (0x00000400u)
#define I2C_CON_MST_SHIFT   (0x0000000Au)
#define I2C_CON_MST_MST   (0x1u)
#define I2C_CON_MST_SLV   (0x0u)

#define I2C_CON_OPMODE   (0x00003000u)
#define I2C_CON_OPMODE_SHIFT   (0x0000000Cu)
#define I2C_CON_OPMODE_FSI2C   (0x0u)
#define I2C_CON_OPMODE_HSI2C   (0x1u)
#define I2C_CON_OPMODE_RESERVED   (0x3u)
#define I2C_CON_OPMODE_SCCB   (0x2u)

#define I2C_CON_STB   (0x00000800u)
#define I2C_CON_STB_SHIFT   (0x0000000Bu)
#define I2C_CON_STB_NORMAL   (0x0u)
#define I2C_CON_STB_STB   (0x1u)

#define I2C_CON_STP   (0x00000002u)
#define I2C_CON_STP_SHIFT   (0x00000001u)
#define I2C_CON_STP_NSTP   (0x0u)
#define I2C_CON_STP_STP   (0x1u)

#define I2C_CON_STT   (0x00000001u)
#define I2C_CON_STT_SHIFT   (0x00000000u)
#define I2C_CON_STT_NSTT   (0x0u)
#define I2C_CON_STT_STT   (0x1u)

#define I2C_CON_TRX   (0x00000200u)
#define I2C_CON_TRX_SHIFT   (0x00000009u)
#define I2C_CON_TRX_RCV   (0x0u)
#define I2C_CON_TRX_TRX   (0x1u)

#define I2C_CON_XOA0   (0x00000080u)
#define I2C_CON_XOA0_SHIFT   (0x00000007u)
#define I2C_CON_XOA0_B07   (0x0u)
#define I2C_CON_XOA0_B10   (0x1u)

#define I2C_CON_XOA1   (0x00000040u)
#define I2C_CON_XOA1_SHIFT   (0x00000006u)
#define I2C_CON_XOA1_B07   (0x0u)
#define I2C_CON_XOA1_B10   (0x1u)

#define I2C_CON_XOA2   (0x00000020u)
#define I2C_CON_XOA2_SHIFT   (0x00000005u)
#define I2C_CON_XOA2_B07   (0x0u)
#define I2C_CON_XOA2_B10   (0x1u)

#define I2C_CON_XOA3   (0x00000010u)
#define I2C_CON_XOA3_SHIFT   (0x00000004u)
#define I2C_CON_XOA3_B07   (0x0u)
#define I2C_CON_XOA3_B10   (0x1u)

#define I2C_CON_XSA   (0x00000100u)
#define I2C_CON_XSA_SHIFT   (0x00000008u)
#define I2C_CON_XSA_B07   (0x0u)
#define I2C_CON_XSA_B10   (0x1u)


/* OA */
#define I2C_OA_MCODE   (0x0000E000u)
#define I2C_OA_MCODE_SHIFT   (0x0000000Du)

#define I2C_OA_OA   (0x000003FFu)
#define I2C_OA_OA_SHIFT   (0x00000000u)


/* SA */
#define I2C_SA_SA   (0x000003FFu)
#define I2C_SA_SA_SHIFT   (0x00000000u)


/* PSC */
#define I2C_PSC_PSC   (0x000000FFu)
#define I2C_PSC_PSC_SHIFT   (0x00000000u)


/* SCLL */
#define I2C_SCLL_HSSCLL   (0x0000FF00u)
#define I2C_SCLL_HSSCLL_SHIFT   (0x00000008u)

#define I2C_SCLL_SCLL   (0x000000FFu)
#define I2C_SCLL_SCLL_SHIFT   (0x00000000u)


/* SCLH */
#define I2C_SCLH_HSSCLH   (0x0000FF00u)
#define I2C_SCLH_HSSCLH_SHIFT   (0x00000008u)

#define I2C_SCLH_SCLH   (0x000000FFu)
#define I2C_SCLH_SCLH_SHIFT   (0x00000000u)


/* SYSTEST */
#define I2C_SYSTEST_FREE   (0x00004000u)
#define I2C_SYSTEST_FREE_SHIFT   (0x0000000Eu)
#define I2C_SYSTEST_FREE_FREE   (0x1u)
#define I2C_SYSTEST_FREE_STOP   (0x0u)

#define I2C_SYSTEST_SCCB_E_O   (0x00000010u)
#define I2C_SYSTEST_SCCB_E_O_SHIFT   (0x00000004u)
#define I2C_SYSTEST_SCCB_E_O_SCCBOH   (0x1u)
#define I2C_SYSTEST_SCCB_E_O_SCCBOL   (0x0u)

#define I2C_SYSTEST_SCL_I   (0x00000008u)
#define I2C_SYSTEST_SCL_I_SHIFT   (0x00000003u)
#define I2C_SYSTEST_SCL_I_SCLIH   (0x1u)
#define I2C_SYSTEST_SCL_I_SCLIL   (0x0u)

#define I2C_SYSTEST_SCL_I_FUNC   (0x00000100u)
#define I2C_SYSTEST_SCL_I_FUNC_SHIFT   (0x00000008u)
#define I2C_SYSTEST_SCL_I_FUNC_SCLIH   (0x1u)
#define I2C_SYSTEST_SCL_I_FUNC_SCLIL   (0x0u)

#define I2C_SYSTEST_SCL_O   (0x00000004u)
#define I2C_SYSTEST_SCL_O_SHIFT   (0x00000002u)
#define I2C_SYSTEST_SCL_O_SCLOH   (0x1u)
#define I2C_SYSTEST_SCL_O_SCLOL   (0x0u)

#define I2C_SYSTEST_SCL_O_FUNC   (0x00000080u)
#define I2C_SYSTEST_SCL_O_FUNC_SHIFT   (0x00000007u)
#define I2C_SYSTEST_SCL_O_FUNC_SCLIH   (0x1u)
#define I2C_SYSTEST_SCL_O_FUNC_SCLIL   (0x0u)

#define I2C_SYSTEST_SDA_I   (0x00000002u)
#define I2C_SYSTEST_SDA_I_SHIFT   (0x00000001u)
#define I2C_SYSTEST_SDA_I_SDAIH   (0x1u)
#define I2C_SYSTEST_SDA_I_SDAIL   (0x0u)

#define I2C_SYSTEST_SDA_I_FUNC   (0x00000040u)
#define I2C_SYSTEST_SDA_I_FUNC_SHIFT   (0x00000006u)
#define I2C_SYSTEST_SDA_I_FUNC_SDAIH   (0x1u)
#define I2C_SYSTEST_SDA_I_FUNC_SDAIL   (0x0u)

#define I2C_SYSTEST_SDA_O   (0x00000001u)
#define I2C_SYSTEST_SDA_O_SHIFT   (0x00000000u)
#define I2C_SYSTEST_SDA_O_SDAOH   (0x1u)
#define I2C_SYSTEST_SDA_O_SDAOL   (0x0u)

#define I2C_SYSTEST_SDA_O_FUNC   (0x00000020u)
#define I2C_SYSTEST_SDA_O_FUNC_SHIFT   (0x00000005u)
#define I2C_SYSTEST_SDA_O_FUNC_SDAOH   (0x1u)
#define I2C_SYSTEST_SDA_O_FUNC_SDAOL   (0x0u)

#define I2C_SYSTEST_SSB   (0x00000800u)
#define I2C_SYSTEST_SSB_SHIFT   (0x0000000Bu)
#define I2C_SYSTEST_SSB_NOACTION   (0x0u)
#define I2C_SYSTEST_SSB_SETSTATUS   (0x1u)

#define I2C_SYSTEST_ST_EN   (0x00008000u)
#define I2C_SYSTEST_ST_EN_SHIFT   (0x0000000Fu)
#define I2C_SYSTEST_ST_EN_DISABLE   (0x0u)
#define I2C_SYSTEST_ST_EN_ENABLE   (0x1u)

#define I2C_SYSTEST_TMODE   (0x00003000u)
#define I2C_SYSTEST_TMODE_SHIFT   (0x0000000Cu)
#define I2C_SYSTEST_TMODE_FUNCTIONAL   (0x0u)
#define I2C_SYSTEST_TMODE_LOOPBACK   (0x3u)
#define I2C_SYSTEST_TMODE_RESERVED   (0x1u)
#define I2C_SYSTEST_TMODE_TEST   (0x2u)


/* BUFSTAT */
#define I2C_BUFSTAT_FIFODEPTH   (0x0000C000u)
#define I2C_BUFSTAT_FIFODEPTH_SHIFT   (0x0000000Eu)

#define I2C_BUFSTAT_RXSTAT   (0x00003F00u)
#define I2C_BUFSTAT_RXSTAT_SHIFT   (0x00000008u)

#define I2C_BUFSTAT_TXSTAT   (0x0000003Fu)
#define I2C_BUFSTAT_TXSTAT_SHIFT   (0x00000000u)


/* OA1 */
#define I2C_OA1_OA1   (0x000003FFu)
#define I2C_OA1_OA1_SHIFT   (0x00000000u)


/* IC_OA22 */
#define I2C_IC_OA22_OA2   (0x000003FFu)
#define I2C_IC_OA22_OA2_SHIFT   (0x00000000u)


/* OA3 */
#define I2C_OA3_OA3   (0x000003FFu)
#define I2C_OA3_OA3_SHIFT   (0x00000000u)


/* ACTOA */
#define I2C_ACTOA_OA0_ACT   (0x00000001u)
#define I2C_ACTOA_OA0_ACT_SHIFT   (0x00000000u)
#define I2C_ACTOA_OA0_ACT_ACTIVE   (0x1u)
#define I2C_ACTOA_OA0_ACT_INACTIVE   (0x0u)

#define I2C_ACTOA_OA1_ACT   (0x00000002u)
#define I2C_ACTOA_OA1_ACT_SHIFT   (0x00000001u)
#define I2C_ACTOA_OA1_ACT_ACTIVE   (0x1u)
#define I2C_ACTOA_OA1_ACT_INACTIVE   (0x0u)

#define I2C_ACTOA_OA2_ACT   (0x00000004u)
#define I2C_ACTOA_OA2_ACT_SHIFT   (0x00000002u)
#define I2C_ACTOA_OA2_ACT_ACTIVE   (0x1u)
#define I2C_ACTOA_OA2_ACT_INACTIVE   (0x0u)

#define I2C_ACTOA_OA3_ACT   (0x00000008u)
#define I2C_ACTOA_OA3_ACT_SHIFT   (0x00000003u)
#define I2C_ACTOA_OA3_ACT_ACTIVE   (0x1u)
#define I2C_ACTOA_OA3_ACT_INACTIVE   (0x0u)


/* SBLOCK */
#define I2C_SBLOCK_OA0_EN   (0x00000001u)
#define I2C_SBLOCK_OA0_EN_SHIFT   (0x00000000u)
#define I2C_SBLOCK_OA0_EN_BLOCKED   (0x1u)
#define I2C_SBLOCK_OA0_EN_RELEASED   (0x0u)

#define I2C_SBLOCK_OA1_EN   (0x00000002u)
#define I2C_SBLOCK_OA1_EN_SHIFT   (0x00000001u)
#define I2C_SBLOCK_OA1_EN_BLOCKED   (0x1u)
#define I2C_SBLOCK_OA1_EN_RELEASED   (0x0u)

#define I2C_SBLOCK_OA2_EN   (0x00000004u)
#define I2C_SBLOCK_OA2_EN_SHIFT   (0x00000002u)
#define I2C_SBLOCK_OA2_EN_BLOCKED   (0x1u)
#define I2C_SBLOCK_OA2_EN_RELEASED   (0x0u)

#define I2C_SBLOCK_OA3_EN   (0x00000008u)
#define I2C_SBLOCK_OA3_EN_SHIFT   (0x00000003u)
#define I2C_SBLOCK_OA3_EN_BLOCKED   (0x1u)
#define I2C_SBLOCK_OA3_EN_RELEASED   (0x0u)



#ifdef __cplusplus
}
#endif

#endif

