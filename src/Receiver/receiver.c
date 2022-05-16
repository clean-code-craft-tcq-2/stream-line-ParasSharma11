#include "receiver.h"
#include "sender.h"

float temperature_s1[50];
float temperature_s2[50];

Status_t GetFromConsole() //collect all data
{
	for(int i = 0; i <NOOFDATA; i++)
	{
		scanf("%f , %f", temperature_s1[i], temperature_s2[i]);
	}
    return E_OK;
}


float findMaxValue(float * input,int noOfElements)
{   float maxValue = input[0];

	for (int i =1; i < noOfElements;i++)
	{
		if( maxValue < input[i] )
		  maxValue = input[i];
	}
	return maxValue;
}

float findMinValue(float * input,int noOfElements)
{   float minValue = input[0];

	for (int i =1; i < noOfElements;i++)
	{
		if( minValue > input[i] )
		  minValue = input[i];
	}
return minValue;
}

float aveOfLastConsecutiveValues(float * input,int noOfElements)
{
int	startIndex = noOfElements - NO_OF_CONSECUTIVE_AVERAGE ;
	float total = 0;

	for (int i= startIndex ;i < noOfElements;i++)
	{
	   
		total += input[i];
	}

	return (total/NO_OF_CONSECUTIVE_AVERAGE);
}

void printOnConsole(float* Max ,float* Min, float* Ave)
{
	for(int i = 0; i<2; i++)
    {
		 printf("%f,%f,%f\n", Max[i], Min[i], Ave[i]);
	}
}
void receiverMainFunction(void (*fpPrintOnConsole)(float* ,float*, float*))
{
    
    	float Max[3], Min[3] ,Ave[3];
	Status_t status = GetFromConsole();
	Max[0] = findMaxValue( temperature_s1, NOOFDATA);
      	Min[0] = findMinValue( temperature_s1, NOOFDATA);
     	Ave[0] = aveOfLastConsecutiveValues(temperature_s1, NOOFDATA);
	Max[1] = findMaxValue( temperature_s2, NOOFDATA);
      	Min[1] = findMinValue( temperature_s2, NOOFDATA);
     	Ave[1] = aveOfLastConsecutiveValues(temperature_s2, NOOFDATA);
      
	 fpPrintOnConsole(Max,Min,Ave);
}
