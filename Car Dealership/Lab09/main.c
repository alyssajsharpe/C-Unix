//Alyssa Sharpe
////Lab 9 11.26.2019
////main.c  CS367 
//
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#define FOUR 4
#define TWO 2
int main(int argc, char* argv[]){
	int numCars;
	float rate;
	Car* carArray;
	if(argc<=1){
		fprintf(stderr, "ERROR: program name was the only argument passed in... exiting.\n");
		exit(1);
	}
	if(argc>FOUR){
		fprintf(stderr, "ERROR: too many arguments have been passed in... exiting.\n");
		exit(1);
	}
	if(!sscanf(argv[1], "%d", &numCars)){
		fprintf(stderr, "ERROR: invalid scanf argument.\n");
		exit(1);
	}	 //changing argv[2] into a int
	if(!sscanf(argv[TWO], "%f", &rate)){
		fprintf(stderr, "ERROR: invalid scanf argument.\n");
		exit(1);
	} //changing argv[3] into a float
 	carArray = malloc(numCars * sizeof(Car)); //creating dyamically allocated array
	if(carArray == NULL){ //checking array 
		fprintf(stderr,"ERROR: malloc failed... exiting.\n");
		exit(1);
	}
	if(fillArray(carArray,numCars)){
		fprintf(stderr, "ERROR: invalid argument passed into array.\n");
		exit(1);
	}
	chooseCar(carArray,numCars,rate);

	free(carArray); //freeing carArray
	carArray=NULL;  //setting memory to null
	
	return 0;
} //end main
