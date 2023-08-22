int print_octal(va_list args)
{
	int nbr;
	int digit;
	int divisor = 1;
	int printed = 0;

	nbr = va_arg(args, int);
	
	if (nbr == 0)
	{
		_putchar('0');
		return 1;
	}
	if (nbr < 0)
	{
		_putchar('-');
		nbr = -nbr;
		printed++;
	}
	while (nbr / divisor > 7)
	{
		divisor *= 8;
	}
	while (divisor > 0)
	{
		digit = nbr / divisor;
		_putchar(digit + '0');
		printed++;
		nbr %= divisor;
		divisor /= 8;
	}
	return printed;
}
