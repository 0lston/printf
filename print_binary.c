char print_binary(va_list args)
{

	unsigned int num;
	unsigned int temp;
	int size = 0;
	num = va_arg(args, unsigned int);
	temp = num;

	while (temp > 0)
	{
		temp /= 2;
		size++;
	}

	char result[size + 1];

	for (int i = size - 1; i >= 0; i--)
	{
		result[i] = (num % 2) + '0';
		num /= 2;
	}
	result[size] = '\0';
	return result;
}
