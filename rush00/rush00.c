#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_sequence(void)
{
	char x;
	char y;

	x = '0';
	y = '2';
	whilei(x < '5')
	{
		if (y == '1')
		{	
			ft_putchar('A');
			ft_putchar('\n');
			x = x + 1;
		}
		else 
		{	
			ft_putchar('A');
			x = x + 1;
		}
	}
}

int main(void)
{
	ft_print_sequence();
	ft_putchar('\n');
}

