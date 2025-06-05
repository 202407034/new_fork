#include "add.h"
#include "sub.h"
#include <stdio.h>

int sub(int x, int y)
{
	int result = x;
	

	for(int i = 0; i < y; i++)
	{
		result = add(result, -1);
	}

	printf("빼기 : %d\n", result);
	return result;
}

