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


dice::~dice()
{
}
