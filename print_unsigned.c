unsigned int print_int(va_list args)
{
	unsigned int nbr;
	unsigned int digit;
	unsigned int divisor = 1;
	unsigned int printed = 0;
	
	nbr = va_arg(args, int);
	
	if (nbr == 0)
	{
		_putchar('0');
		return 1;
	}
	while (nbr / divisor > 9)
	{
		divisor *= 10;
	}
	while (divisor > 0)
	{
		digit = nbr / divisor;
		_putchar(digit + '0');
		printed++;
		nbr %= divisor;
		divisor /= 10;
	}
	return (printed);
}
