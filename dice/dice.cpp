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
	float sum;
	for (int i; i <= numOfRolls; i++)
	{
		float sum += x.Roll();
	}

	float avg = sum / numOfRolls;
	return avg

}
float dice::average(int* y, int valuesInArry){

}
dice::~dice()
{
}
