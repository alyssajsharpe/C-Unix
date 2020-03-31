//Alyssa Sharpe
////Lab08 Part B
////11.20.19   main.c  
#include "functions.h"
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	
	if(argc<3){
		printf("Error you did not enter in enough arguments, exiting program...\n");
		exit(1);
	}
	else if(argc==3){	//there are 2 arguments
		printf("\n Two arguments passed in.\n");
		output(argv[1], argv[2]);
	}
	else if(argc==4){ 	//there are 3 arguments
		printf("\n Three arguments passed in.\n");
		output(argv[1], argv[2]);
		printf("-----------\n");
		output(argv[1], argv[3]);
	}
	else if (argc==5){ 	//there are 4 arguments
		printf("\nFour arguments passed in.\n");
		printf("-----------\n");
		output(argv[1], argv[2]);
		printf("-----------\n");
		output(argv[1], argv[3]);
		printf("-----------\n");
		output(argv[1], argv[4]);
	}
	else if(argc==6){	//there are 5 arguments
		printf("\n Five arguments passed in.\n");
		output(argv[1], argv[2]);
		printf("-----------\n");
		output(argv[1], argv[3]);
		printf("-----------\n");
		output(argv[1], argv[4]);
		printf("-----------\n");
		output(argv[1], argv[5]);
	}
	else{
		printf("Too many arguments entered, exiting program...\n");
		exit(1);
	} // end if else
	return 0;
} //end main
