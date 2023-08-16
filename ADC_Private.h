/*
 * ADC_Private.h
 *
 * Created: 7/25/2023 4:26:34 PM
 *  Author: Abdallah Medhat
 */ 


#ifndef ADC_PRIVATE_H_
#define ADC_PRIVATE_H_


/* ADC Registers  */
#define ADMUX  *((volatile u8   *)0x27 )
#define ADCSRA *((volatile u8   *)0x26 )
#define ADCH   *((volatile u8   *)0x25 )
#define ADCL   *((volatile u8   *)0x24 )
#define ADC    *((volatile u16  *)0x24 )



#define ADMUX_ADLAR             5
#define ADMUX_REFS0             6
#define ADMUX_REFS1             7


#define ADCSRA_ADEN             7
#define ADCSRA_ADSC             6
#define ADCSRA_ADATE            5
#define ADCSRA_ADIF             4
#define ADCSRA_ADIE             3


/* Bit Masking Macros */
#define ADC_PRESCALER_MASK 0b11111000
#define ADC_CHANNEL_MASK   0b11100000


#define ADC_PRESCALER_2         1
#define ADC_PRESCALER_4         2
#define ADC_PRESCALER_8         3
#define ADC_PRESCALER_16        4
#define ADC_PRESCALER_32        5
#define ADC_PRESCALER_64        6
#define ADC_PRESCALER_128       7





#endif /* ADC_PRIVATE_H_ */