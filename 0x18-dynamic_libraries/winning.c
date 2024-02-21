int rand(void)
{
	static int called = 0;

	if (called == 0)
	{
		called = 1;
		return 9;
	}
	else if (called == 1)
	{
		called = 2;
		return 8;
	}
	else if (called == 2)
	{
		called = 3;
		return 10;
	}
	else if (called == 3)
	{
		called = 4;
		return 24;
	}
	else if (called == 4)
	{
		called = 5;
		return 75;
	}
	else if (called == 5)
	{
		called = 6;
		return 9;
	}
	else
	{
		return 0;
	}
}
