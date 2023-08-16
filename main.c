/*
 * ADC.c
 *
 * Created: 7/25/2023 4:25:31 PM
 * Author : ABDALLAH MEDHAT
 */ 

#include "LCD_Interface.h"
#include "ADC_Interface.h"
#include <util/delay.h>



int main()
{
	ADC_voidInit();
	LCD_Init();
	
	u16 Digital_Val ;
	u16 Analog_Val ;

	while(1)
	{
		ADC_GetDigitalValue(ADC_CHANNEL4 , &Digital_Val);
		Analog_Val = ( Digital_Val *5000.0) /1024;
		LCD_SendNumber(Analog_Val);
		LCD_SetPosition(CLCD_ROW_1 , CLCD_COL_6);
		LCD_SendString("(mv)");
		_delay_ms(100);
		LCD_ClearScreen();
	}

}
