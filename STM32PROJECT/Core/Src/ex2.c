/*
 * ex2.c
 *
 *  Created on: Sep 7, 2024
 *      Author: 84859
 */
#include "ex2.h"
void red_on(){HAL_GPIO_WritePin(red_GPIO_Port, red_Pin,RESET);}
void red_off(){HAL_GPIO_WritePin(red_GPIO_Port, red_Pin,SET);}
void yellow_on(){HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin,RESET);}
void yellow_off(){HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin,SET);}
void green_on(){HAL_GPIO_WritePin(green_GPIO_Port, green_Pin,RESET);}
void green_off(){HAL_GPIO_WritePin(green_GPIO_Port,green_Pin,SET);}

int count = 10;
void exercise2_run(){
	if(count >5 && count <=10){
		red_on();
		yellow_off();
		green_off();
	}
	if(count>3&&count<=5){
		red_off();
		yellow_on();
		green_off();
	}
	if(count>=1&&count<=3){
			red_off();
			yellow_off();
			green_on();
		}
	if(count == 1)count = 11;
	count--;
}

