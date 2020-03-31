//Alyssa Sharpe
////Lab08 Part A1
////11.20.19   functions.c
//
//
#include "functions.h"
#include <stdio.h>

float average(const float *arr, int numGrades){
	int i;  
	float sum = 0;
	for(i = 0; i<=numGrades; ++i){
		sum += *((arr) + (i)); 
	} //end for loop
	return (float) sum/numGrades;
}//end grades

float highestGrade(const float *arr, int numGrades){
	float largest; 
	largest = *arr;
	int i;
	for(i = 1; i<=numGrades; i++){
		if(largest < *((arr) + (i))){
			largest = *((arr) +(i));
		}
	}//end for loop
	return largest;
}//end highestGrade
