int print_hexadecimal_upp(va_list args)
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
	while (nbr / divisor > 15 || nbr / divisor < -15)
	{	
		divisor *= 16;
	}
	while (divisor > 0)
	{	
		digit = nbr / divisor;
		if (digit >= 0 && digit < 10)
		{
			_putchar(digit + '0');
		} else if (digit >= 0)
		{
			_putchar(digit - 10 + 'A');
		} 
		else 
		{
			_putchar(-digit - 1 + 'F');
		}
		printed++;
		nbr %= divisor;
		divisor /= 16;
	}
	return printed;
}
