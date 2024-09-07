/*
 * ex1.c
 *
 *  Created on: Sep 7, 2024
 *      Author: 84859
 */
#include "ex1.h"

void Led_on(){
	HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_SET);
}
void Led_off(){
	HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin, GPIO_PIN_RESET);
}
void init_exercise1(){

}
int Led_status = LED_OFF;
int count1 = 2;
void exercise1_run(){
	if(Led_status == LED_OFF && count1==0){
		Led_on();
		Led_status = LED_ON;
		count1 = 2;
	}
	if(Led_status == LED_ON && count1 == 0){
		Led_off();
		Led_status = LED_OFF;
		count1 = 2;
	}
	count1--;
}

