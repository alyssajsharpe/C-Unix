//Alyssa Sharpe
////Lab 9 11.26.2019
////functions.c  CS367 

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define THREE 3

	void carInfo(Car* c){ //function a
		printf("The model %s(%d)is avaliable to you for a rate of $%.2f.\n", c->model, c->year, c->rate);
	} //end carInfo
	int readCar(Car* c){  //function b
		int result; 
		result = scanf("%s %d %f", c->model, &(c->year), &(c->rate)); 
		if(result < THREE || result > THREE){
			return 1; //error 
		}
		else{
		return 0; //success
		}
	}//end readCar
	int fillArray(Car* c, int numCars){ //function c
		int i;
		for(i=0; i<numCars; i++){
			if(readCar(c)){
				return 1;
			}
			c++;
		}//end for loop
		return 0;
	}//end fillArray
	void chooseCar(Car* c, int numCars, float rate){ //function d
		int i;
		for(i=0;i<numCars; i++){
			if(c->rate <= rate){
				carInfo(c);
			}
			c++;
		}//end for loop	
	}//end chooseCar
