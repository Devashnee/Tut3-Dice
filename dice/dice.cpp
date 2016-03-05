#include "dice.h"
#include<iostream>
#include<cstdlib>
#include<ctime>


dice::dice()
{
}
int dice::Roll()
{
	srand(time(0));
	return (1 + (rand() % 6));
}

float dice::average(dice x, int numOfRolls) {
	float sum = 0;
	for (int i=0; i <= numOfRolls; i++)
	{
		 sum += x.Roll();
	}

	float avg = sum / numOfRolls;
	return avg;
}
float dice::average(int array[], int valuesInArry){
	float sum1 = 0;
	for (int i=0; i <= valuesInArry; i++)
	{
		sum1 += array[i];
	}

	float av0g = sum1 / valuesInArry;
	return av0g;
}
dice::~dice()
{
}
