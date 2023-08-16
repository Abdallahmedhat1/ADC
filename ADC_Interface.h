/*
 * ADC_Interface.h
 *
 * Created: 7/25/2023 4:26:54 PM
 *  Author: Abdallah Medhat
 */ 


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_
#include "Error.h"
typedef enum {  
    ADC_CHANNEL0,
    ADC_CHANNEL1,
    ADC_CHANNEL2,
    ADC_CHANNEL3,
    ADC_CHANNEL4,
    ADC_CHANNEL5,
    ADC_CHANNEL6,
    ADC_CHANNEL7
}ADC_Channel_t;

typedef enum {
    ADC_AVCC ,
    ADC_AREF ,
    ADC_INTERNAL_2_56
}ADC_VREFF;
#define ADC_FREE_RUNNING        0
#define ADC_SINGLE_CONVERSION   1

#define ADC_RIGHT_ADJUST        0
#define ADC_LEFT_ADJUST         1



void ADC_voidInit(void);
/**
 * @brief This function used to get the digital value that is equivelent to the input voltage to the ADC channel
 * 
 * @param u8Channel  ADC in ATmega has 8 channel in Port A [ ADC_CHANNEL0 -->  ADC_CHANNEL0 ]
 * @param pDigitalValue 
 * @return Error_t 
 */
Error_t ADC_GetDigitalValue(u8 u8Channel , u16 *pDigitalValue);




#endif /* ADC_INTERFACE_H_ */