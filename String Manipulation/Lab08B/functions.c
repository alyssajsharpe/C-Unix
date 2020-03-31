//Alyssa Sharpe
////Lab08 Part B
////11.20.19   functions.c  

#include "functions.h"
#include <stdio.h>

void reverse(char *str){	
	char* ptr1 = str;
	char* ptr2 = str;	
	int count=0;
	int i;
  	while(*ptr2){	//creating lenght varible/end pointer for swap
		count++;
		ptr2++;
	}
	ptr2--; 
	for(i=0; i <= (count-1)/2; i++){	//for loop swapping
		char tmp = *ptr2;
		*ptr2 = *ptr1;
		*ptr1 = tmp;
		ptr2--;
		ptr1++;
	}	
}

int replace(char *str, char c, char newC){
	int count = 0;	
	while(*str){
		if(*str == c){
			*str = newC;
			count++;
		}
		str++;
	} //end for loop
	printf("Number of replacements: %d\n", count);
	return count; 
} //end replace

int ifEqual(char* str, char* str2){
	while(*str){
		if(*str != *str2){
			printf("These strings are different.\n");
			return 0;
		}
		else{
		str++;	
		str2++;
		}
	}
	printf("These strings are the same.\n");
	return 0; 
}

void output(char *str,char *str2){
	char ex = 'X';
	char why = 'Y'; //:)
	printf("First String: %s\n", str);
	printf("Second String: %s\n",str2);

	ifEqual(str, str2);

	replace(str2, *str2, ex);
	reverse(str2);
	printf("Reversed string: %s\n", str2);
	replace(str2, *str2, why);
	reverse(str2);
	printf("Reversed string: %s\n", str2);
} // end output
