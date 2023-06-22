include "main.h"

/**
 * more_numbers - function that print 10 times
 *
 *
 **/
void more_numbers(void)
{
	int num, pom, count;

	for (pom = 1; pom <= 10; pom++)
	{
		for (count = 0; count <= 14; count++)
		{
			num = count;
			if (count > 9)
			{
			_putchar(1 + 48);
			num = count % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}

}
