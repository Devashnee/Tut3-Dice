#include "dice.h"
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()

{
	dice Dice;
	int arrayOfInt[100];
	for (int i = 0; i <= 100; i++)
	{
		srand(time(0));
		arrayOfInt[i] = rand() % 100 + 1;

	}
	cout << "The average ofthe rolls : " << Dice.average(Dice, 7)<< endl;
	cout << "The average of the integers are : " << Dice.average(arrayOfInt, 100) << endl;


}