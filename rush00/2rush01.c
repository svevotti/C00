#include <unistd.h>

void ft_putchar(char c);

void ft_print_square(int x, int y)
{
	int x_len;
	int y_wid;

	x_len = 1;
	y_wid = 1;
	while(y_wid <= y)
	{
		while (x_len <= x)
		{
			if (y_wid == 1)
			{	
				if (x_len == 1 || x_len == x)
				{
				ft_putchar('A');
				}
				else
				{
				ft_putchar('*');
				}	
			x_len = x_len + 1;	
		}	
			
		ft_putchar('\n');
		y_wid = y_wid + 1;
		x_len = 1;
	}
}

int main(void)
{
	ft_print_square(6, 6);
	ft_putchar('\n');
}
