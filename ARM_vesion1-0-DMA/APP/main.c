/*
 *
	*****************************
	Author:Abdelrahman Elrayes
	Origin Date:16/7/2023
	Version: 1.0.0
	SWC:RCC

	*****************************
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "ERROR_STATES.h"


#include "MRCC_int.h"
#include "MGPIO_int.h"
#include "MSTK_int.h"
#include "MNVIC_int.h"
#include "MEXTI_int.h"
#include "MAFIO_int.h"

#include "HLED_int.h"
#include "HSWITCH_int.h"
#include "HLEDMRX_int.h"
void delay(u16 num);
//global isr var
volatile s8 Global_speed=10;
volatile u8 Global_Status=1;

//Irq func prototypes
void Interrupt0_func(void);
void Interrupt1_func(void);
void Interrupt2_func(void);
void Interrupt3_func(void);
//functions





void main(void)
{

u8 arr[8]={55, 24, 36, 66, 126, 66, 66, 0};
u64 arr2[8]={0, 553233, 1348243, 2266197, 4102105, 2266193, 2258001, 0};



    RCC_voidInitSystemClock();
    //RCC GPIO
    RCC_voidEnablePeriphralCLK(APB2_IOPAEN);
	RCC_voidEnablePeriphralCLK(APB2_IOPBEN);
	RCC_voidEnablePeriphralCLK(APB2_IOPCEN);
	//RCC AFIO
	RCC_voidEnablePeriphralCLK(APB2_AFIOEN);
	//Systk
	MSTK_enInit();
	//NVIC
	MNVIC_u8EnableInterrupt(INTERRUPT_EXTI15_10);
	 //AFIO Set EXTI in port b
	AFIO_u8SetEXTIConfiguration(AFIO_EXTI_11,AFIO_GPIOB);
	AFIO_u8SetEXTIConfiguration(AFIO_EXTI_12,AFIO_GPIOB);
	AFIO_u8SetEXTIConfiguration(AFIO_EXTI_13,AFIO_GPIOB);
	AFIO_u8SetEXTIConfiguration(AFIO_EXTI_14,AFIO_GPIOB);
	//EXTI init
	MEXTI_enInit(EXTI_11);
	MEXTI_enInit(EXTI_12);
	MEXTI_enInit(EXTI_13);
	MEXTI_enInit(EXTI_14);
	//EXTI set latch
	MEXTI_enSetSignalLatch(EXTI_11, RISING_EDGE);
	MEXTI_enSetSignalLatch(EXTI_12, RISING_EDGE);
	MEXTI_enSetSignalLatch(EXTI_13, RISING_EDGE);
	MEXTI_enSetSignalLatch(EXTI_14, RISING_EDGE);
	//EXTI callback fun
	MEXTI_enSetCallBackFunc(EXTI_11, &Interrupt0_func);
	MEXTI_enSetCallBackFunc(EXTI_12, &Interrupt1_func);
	MEXTI_enSetCallBackFunc(EXTI_13, &Interrupt2_func);
	MEXTI_enSetCallBackFunc(EXTI_14, &Interrupt3_func);

	//GPIO
	MGPIO_enSetPinDirection(PC13, GPIO_u8OUT_PUSH_PULL_2MHZ);

	MGPIO_enSetPinDirection(PA10, GPIO_u8OUT_PUSH_PULL_2MHZ);
	MGPIO_enSetPinDirection(PA11, GPIO_u8OUT_PUSH_PULL_2MHZ);
	MGPIO_enSetPinDirection(PA12, GPIO_u8OUT_PUSH_PULL_2MHZ);
	//input
	MGPIO_enSetPinDirection(PB11, GPIO_u8INPUT_PULL_UP_DOWN);
	MGPIO_enSetPinDirection(PB12, GPIO_u8INPUT_PULL_UP_DOWN);
	MGPIO_enSetPinDirection(PB13, GPIO_u8INPUT_PULL_UP_DOWN);
	MGPIO_enSetPinDirection(PB14, GPIO_u8INPUT_PULL_UP_DOWN);
	//
	MGPIO_enSetPinValue(PB11, GPIO_u8LOW);
	MGPIO_enSetPinValue(PB12, GPIO_u8LOW);
	MGPIO_enSetPinValue(PB13, GPIO_u8LOW);
	MGPIO_enSetPinValue(PB14, GPIO_u8LOW);
	//LED Matrix
	HLEDMRX_voidInit();

	//u8 value=1;
	  MGPIO_enSetPinValue(PC13, GPIO_u8HIGH);
	  MGPIO_enSetPinValue(PA10, GPIO_u8LOW);
	  MGPIO_enSetPinValue(PA11, GPIO_u8LOW);
	  MGPIO_enSetPinValue(PA12, GPIO_u8LOW);
	  u8 i=0;
  while(1){

	//HLEDMRX_voidShiftDIsplay(arr2,Global_speed);


	  HLEDMRX_voidControlDisplay(arr2,i,Global_speed);

	 if(Global_Status==1)
	 {
	i++;
	i=i%45;
	 }
	 else
	 {

	 }
	  //	while(Global_Status==0)
	//{

	//}
}
}
void delay(u16 num)
{
for(u16 i=0;i<num;i++)
{
	for(u16 j=0;j<num;j++)
	{
		asm("NOP");
	}



}



}
void Interrupt0_func(void)
{
	 Global_Status=1;
	 MGPIO_enTogglePin(PC13);


}
void Interrupt1_func(void)
{
	 Global_Status=0;
	 MGPIO_enTogglePin(PA10);

}
void Interrupt2_func(void)
{
	if(Global_speed<33)
	{
	Global_speed+=3;
	}
	else
	{
		Global_speed=33;
	}
	MGPIO_enTogglePin(PA12);
	// MSTK_enSetBusyWait(100);
}
void Interrupt3_func(void)
{
	MGPIO_enTogglePin(PA11);
	// MSTK_enSetBusyWait(100);
	if(Global_speed>6)
	{
	Global_speed-=3;
	}
	else
	{
		Global_speed=6;

	}
}

