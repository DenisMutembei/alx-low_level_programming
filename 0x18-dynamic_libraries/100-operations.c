#include <stdio.h>

int add(int a, int b)
{
	return (a + b);
}

int sub(int a, int b)
{
	return (a - b);
}

int mul(int a, int b)
{
	return (a * b);
}

int divide(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	else
	{
		return 0; // You can handle the division by zero error in Python
	}
}

int mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	else
	{
		return 0; // You can handle the division by zero error in Python
	}
}
