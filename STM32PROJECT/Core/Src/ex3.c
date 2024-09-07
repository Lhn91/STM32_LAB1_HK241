/*
 * ex3.c
 *
 *  Created on: Sep 7, 2024
 *      Author: 84859
 */
#include "ex3.h"
void red_on(){HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin,RESET);}
void red_off(){HAL_GPIO_WritePin(Led_red_GPIO_Port, Led_red_Pin,SET);}
void yellow_on(){HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin,RESET);}
void yellow_off(){HAL_GPIO_WritePin(Led_yellow_GPIO_Port, Led_yellow_Pin,SET);}
void green_on(){HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin,RESET);}
void green_off(){HAL_GPIO_WritePin(Led_green_GPIO_Port, Led_green_Pin,SET);}

void red2_on(){HAL_GPIO_WritePin(red_GPIO_Port, red_Pin,RESET);}
void red2_off(){HAL_GPIO_WritePin(red_GPIO_Port, red_Pin,SET);}
void yellow2_on(){HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin,RESET);}
void yellow2_off(){HAL_GPIO_WritePin(yellow_GPIO_Port, yellow_Pin,SET);}
void green2_on(){HAL_GPIO_WritePin(green_GPIO_Port, green_Pin,RESET);}
void green2_off(){HAL_GPIO_WritePin(green_GPIO_Port, green_Pin,SET);}

int count = 10;
void exercise3_run(){
//Den 1
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

//Den 2
	if(count >7 && count <=10){
		green2_on();
		red2_off();
		yellow2_off();
	}
	if(count >5 && count <=7){
			green2_off();
			red2_off();
			yellow2_on();
	}
	if(count >=1 && count <=3){
				green2_on();
				red2_off();
				yellow2_off();
	}
		if(count == 1)count = 11;

		count--;
}
