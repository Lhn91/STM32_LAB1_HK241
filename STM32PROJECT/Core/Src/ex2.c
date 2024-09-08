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

void red1_on(){HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin,RESET);}
void red1_off(){HAL_GPIO_WritePin(red1_GPIO_Port, red1_Pin,SET);}
void yellow1_on(){HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin,RESET);}
void yellow1_off(){HAL_GPIO_WritePin(yellow1_GPIO_Port, yellow1_Pin,SET);}
void green1_on(){HAL_GPIO_WritePin(green1_GPIO_Port, green1_Pin,RESET);}
void green1_off(){HAL_GPIO_WritePin(green1_GPIO_Port,green1_Pin,SET);}

int count = 10;
void exercise2_run(){
	//den1
	if(count >5 && count <=10){
		red_off();
		yellow_on();
		green_on();
	}
	if(count>2&&count<=5){
		red_on();
		yellow_on();
		green_off();
	}
	if(count>=1&&count<=2){
			red_on();
			yellow_off();
			green_on();
		}
//den2
	if(count >=1 && count <=5){
			red1_off();
			yellow1_on();
			green1_on();
		}
		if(count>5&&count<=7){
			red1_on();
			yellow1_off();
			green1_on();
		}
		if(count>7&&count<=10){
				red1_on();
				yellow1_on();
				green1_off();
		}
	if(count == 1)count = 11;
	count--;
}

