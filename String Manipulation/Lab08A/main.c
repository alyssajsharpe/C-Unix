//Alyssa Sharpe
//Lab08 Part A1
//11.20.19   main.c

#include "functions.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
	int i;
	float val; 
	const int MAX = 100;
	float arr[MAX];	//argc = number of arguments passed ina
	if(argc<=1){
		printf("Error: Please enter in at least one grade.\n");
		exit(1);
	}	
		for (i=1; i<argc; i++){
			sscanf(argv[i], "%f", &val);
			arr[i-1] = val; 
		}
	printf("Average of grades: %.2f\n", average(arr, argc-1));
	printf("Highest grade: %.2f\n", highestGrade(arr, argc-1));

	return 0;
}
