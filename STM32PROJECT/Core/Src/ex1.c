/*
 * ex1.c
 *
 *  Created on: Sep 7, 2024
 *      Author: 84859
 */
#include "ex1.h"

void turn_off(int num){
	switch (num){
	case 1: HAL_GPIO_WritePin(o5_GPIO_Port, o5_Pin, RESET);
	break;
	case 2:HAL_GPIO_WritePin(o10_GPIO_Port, o10_Pin, RESET);
	break;
	case 3:HAL_GPIO_WritePin(o15_GPIO_Port, o15_Pin, RESET);
	break;
	case 4:HAL_GPIO_WritePin(o20_GPIO_Port, o20_Pin, RESET);
	break;
	case 5:HAL_GPIO_WritePin(o25_GPIO_Port, o25_Pin, RESET);
	break;
	case 6:HAL_GPIO_WritePin(o30_GPIO_Port, o30_Pin, RESET);
	break;
	case 7:HAL_GPIO_WritePin(o35_GPIO_Port, o35_Pin, RESET);
	break;
	case 8:HAL_GPIO_WritePin(o40_GPIO_Port, o40_Pin, RESET);
	break;
	case 9:HAL_GPIO_WritePin(o45_GPIO_Port, o45_Pin, RESET);
	break;
	case 10:HAL_GPIO_WritePin(o50_GPIO_Port, o50_Pin, RESET);
	break;
	case 11:HAL_GPIO_WritePin(o55_GPIO_Port, o55_Pin, RESET);
	break;
	case 0:HAL_GPIO_WritePin(o60_GPIO_Port, o60_Pin, RESET);
	break;
	}

}

void turn_on(int num){
switch(num){
	case 1: HAL_GPIO_WritePin(o5_GPIO_Port, o5_Pin, SET);
	break;
	case 2:HAL_GPIO_WritePin(o10_GPIO_Port, o10_Pin, SET);
	break;
	case 3:HAL_GPIO_WritePin(o15_GPIO_Port, o15_Pin, SET);
	break;
	case 4:HAL_GPIO_WritePin(o20_GPIO_Port, o20_Pin, SET);
	break;
	case 5:HAL_GPIO_WritePin(o25_GPIO_Port, o25_Pin, SET);
	break;
	case 6:HAL_GPIO_WritePin(o30_GPIO_Port, o30_Pin, SET);
	break;
	case 7:HAL_GPIO_WritePin(o35_GPIO_Port, o35_Pin, SET);
	break;
	case 8:HAL_GPIO_WritePin(o40_GPIO_Port, o40_Pin, SET);
	break;
	case 9:HAL_GPIO_WritePin(o45_GPIO_Port, o45_Pin,SET);
	break;
	case 10:HAL_GPIO_WritePin(o50_GPIO_Port, o50_Pin, SET);
	break;
	case 11:HAL_GPIO_WritePin(o55_GPIO_Port, o55_Pin, SET);
	break;
	case 0:HAL_GPIO_WritePin(o60_GPIO_Port, o60_Pin, SET);
	break;
	}
}

void clearNumberOnClock(int num){
	turn_off(num);
}

void setNumberOnClock(int num){
	turn_on(num);
}

void setAllClock(){
	turn_on(1);
	turn_on(2);
	turn_on(3);
	turn_on(4);
	turn_on(5);
	turn_on(6);
	turn_on(7);
	turn_on(8);
	turn_on(9);
	turn_on(10);
	turn_on(11);
	turn_on(0);
}
void clearAllClock(){
	turn_off(1);
	turn_off(2);
	turn_off(3);
	turn_off(4);
	turn_off(5);
	turn_off(6);
	turn_off(7);
	turn_off(8);
	turn_off(9);
	turn_off(10);
	turn_off(11);
	turn_off(0);
}

int second = 0;
int minute = 0;
int hour = 0;
void runClock(){
	if(second >=60){
		++minute;
		second = 0;
	}

	if(minute>=60){
		++hour;
		minute = 0;
	}

	if(hour >=12){
		hour = 0;
	}
if(second % 5 == 0){
clearAllClock();
setNumberOnClock(second/5);
setNumberOnClock(minute/5);
setNumberOnClock(hour%12);
}
++second;
}


