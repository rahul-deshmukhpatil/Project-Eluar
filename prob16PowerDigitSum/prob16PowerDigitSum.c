#if PROBLEM
author: rahul.patil<rahul.deshmukhpatil@gmail.com>

	find sum of digits of 2^1000
#endif


#include "stdio.h"

#define MAX 10000
void mul(int *n1, int n)
{
	int i = 0;
	int carry = 0;
	for(i=0; i < MAX; i++)
	{
		n1[i] = n1[i] * n + carry;
		carry = n1[i]/10;
		n1[i]= n1[i]%10;
	}

	while(carry != 0)
	{
		n1[i]= carry%10;
		carry = carry/10;
	}
}

int main()
{
	int arr[MAX] = {1};
	int i;
	int add = 0;
	for(i=1; i<= 1000; i++)
	{
		mul(arr, 2);
	}

	i = MAX -1;
	while(!arr[i])
		i--;
	for(; i>= 0; i--)
	{
		add += arr[i];
		printf("%d", i,arr[i]);
	}


	printf("\n%d", add);
	
}
