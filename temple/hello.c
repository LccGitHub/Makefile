
#include<stdio.h>
#include"test.h"

int main()
{
	int res = getValue();
	printf("hello! , res = %d\n", res);
	setValue(10);
	res = getValue();
	printf("after set , res = %d\n", res);

	return 0;
}
