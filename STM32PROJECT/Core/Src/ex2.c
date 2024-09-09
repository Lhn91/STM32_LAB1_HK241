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

void display_7s2(int num){
	switch(num){
	case 0:
				 HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
				   HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_SET);

				   break;

			 case 1:
				 HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
				HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);


				HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_SET);
				  HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_SET);

				  break;


			 case 2:
				 HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_RESET);
						  		   HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_RESET);
						  		 HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);



						  		  HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_SET);
						  		  HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_SET);
						  		  break;

			 case 3:
				 HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);
						   break;


			 case 4:
				 HAL_GPIO_WritePin(s1_GPIO_Port, s1_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(s2_GPIO_Port, s2_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s3_GPIO_Port, s3_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s4_GPIO_Port, s4_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(s5_GPIO_Port, s5_Pin, GPIO_PIN_SET);
						   HAL_GPIO_WritePin(s6_GPIO_Port, s6_Pin, GPIO_PIN_RESET);
						   HAL_GPIO_WritePin(s7_GPIO_Port, s7_Pin, GPIO_PIN_RESET);

						   break;

	}
}
void display_7seg(int num){
	switch(num){
		 case 0:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_SET);

			   break;

		 case 1:
			 HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);


			HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_SET);

			  break;


		 case 2:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					  		   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
					  		 HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);



					  		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_SET);
					  		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
					  		  break;

		 case 3:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;


		 case 4:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);

					   break;


		 case 5:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;


		 case 6:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;


		 case 7:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_SET);
					   break;

		 case 8:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;

		 case 9:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;


		 }
}
int count = 10;
int num[10] = {4, 3, 2, 1, 0, 2, 1, 0, 1, 0};
int num2[10] = {2, 1, 0, 1, 0, 4, 3, 2, 1, 0};
void exercise2_run(){

	display_7seg(num[10 - count]);
	display_7s2(num2[10 - count]);
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



