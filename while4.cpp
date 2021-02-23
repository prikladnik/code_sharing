void while4()
{
	int a;
	scanf("%d", &a);
	while (a != 1)
	{
		if (a % 3 == 0)
		{
			a = a / 3;
			printf("%d\n", a);
		}
		else
		{
			printf("false");
			return;
		}
	}
	// если мы дошли этого шага, значит получили 1 и убедились что 'a' является степенью числа 3
	printf("true");
}
