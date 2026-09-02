#define clearBuffer() while (getchar() != '\n');
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

int challenge01();
int challenge02();
int challenge03();
int challenge04();
int challenge05();
int challenge06();
int challenge07();
int challenge08();
int challenge09();
int challenge10();
int challenge11();
int challenge12();
int challenge13();
int challenge14();

int factorial(int a)
{
	int result = 0;
	if(a >1)
		return factorial(a-1) * a;
	else 
		return 1;
}


int main()
{

	int result = factorial(5);

	int x = 5;
	float z = 3.61f;
	for (int i = 0; i < 5; i++)
	{
		printf("%d", i);
		/*body*/
	}

	challenge01();
	challenge02();
	challenge03();
	challenge04();
	challenge05();
	challenge06();
	challenge07();
	challenge08();
	challenge09();
	challenge10();
	challenge11();
	challenge12();
	challenge13();
	challenge14();
	//int x = getZero();

	//printf("%d", x);

	getchar();
    return 0;
}

