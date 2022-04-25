#include <iostream>
#include <cmath>	
#include "factorial.h"
#include <fstream>
using namespace std;


double Sinus(float angle)
{	angle *= (3.1415926535/180); 
	float i = 0;
	i = (angle-(pow(angle,3)/Factorial(3))+(pow(angle,5)/Factorial(5))-(pow(angle,7)/Factorial(7))+(pow(angle,9)/Factorial(9)));		
	return i;
}

