
/*
 *
	*****************************
	Author:Abdelrahman Elrayes
	Origin Date:3/8/2023
	Version: 1.0.0
	SWC:UART

	*****************************
 */
#ifndef MUART_MUART_INT_H_
#define MUART_MUART_INT_H_


#define UART_CALLBACK_SIZE 4
#define UART_FRAME_SIZE 20
#define UART_STR_SIZE   20
#define UART1_ENDFRAM '#'



void MUSART1_voidInit(void);
/*
void MUSART_voidTransmit(u8 Copy_u8arr[]);
u8 MUSART_u8ReceiveBusyWait(void);
*/
//----------------------------//

ErrorState_t MUSART1_enSendByteBusywait(u8 Copy_u8Byte) ;
ErrorState_t MUSART1_enRecieveByteBusyw8(u8 * Copy_ptrByte) ;

ErrorState_t MUSART1_enSendByteAsynch(u8 Copy_u8Byte) ;
ErrorState_t MUSART1_enRecieveByteAsynch(void) ;

ErrorState_t MUSART1_enSendStringBusyW8(char*  Copy_ptrString) ;
ErrorState_t MUSART1_enRecieveStringBusyW8(u8 * Copy_ptrString) ;

ErrorState_t UART1_u8RecieveByte(volatile u8 *Copy_ptrByte);

ErrorState_t MUSART1_enInterruptEnRX(void);
ErrorState_t MUSART1_enInterruptDsRX(void);
ErrorState_t MUSART1_enInterruptCallBackRX(void);

ErrorState_t MUSART1_enInterruptEnTX(void);
ErrorState_t MUSART1_enInterruptDsTX(void);
ErrorState_t MUSART1_enInterruptCallBackTX(void);

ErrorState_t MUSART1_enSendNumString(u32 copy_u32num);
ErrorState_t MUSART1_enSendNum(u32 copy_u32num);

void MUSART1_Runnable(void);
u8 MUSART1_IsDataReady(void);
void MUSART1_GETdata(u8 *UART1ptrStr, u16 *USART1ptrNum);
//u8 MUSART_u8ReceiveByte()
#endif /* MUART_MUART_INT_H_ */
