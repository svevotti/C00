#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
} 

void ft_print_comb(void)
{
	char a;
	char b;
	char c;
	a = '0';
	b = '1';
	c = '2';
	while (a < '8')
	{
		while ( b < '9')
		{
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (!(a == '7' && b == '8' && c == '9'))
				{	
					ft_putchar(',');
					ft_putchar(' ');
				}
				c = c + 1;
			}
			b = b + 1;
			c = b + 1;
		}
		a = a + 1;
		b = a + 1;
		c = b + 1;
	}
}

int  main(void)
{
	ft_print_comb();
	ft_putchar('\n');
}
