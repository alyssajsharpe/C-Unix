//Alyssa Sharpe
//Lab 9 11.26.2019
//functions.h  CS367

#define MAX 100
typedef struct{
	char model[MAX + 1];              
	int year;
	float rate;
} Car; 
    
void carInfo(Car* c);
int readCar(Car* c);
int fillArray(Car* c, int numCars);
void chooseCar(Car* c, int numCars, float rate);
  
