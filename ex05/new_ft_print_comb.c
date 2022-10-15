#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_print_comb(void)
{
   char a;
   char b;
   a = '0';
   b = '0';

   while (a <= '9')
   {
     while (b <= '9')
     {
       ft_putchar(a);
       ft_putchar(b);
       if (!(a == '9' && b == '9'))
       {
         ft_putchar(',');
         ft_putchar(' ');
       }
       b = b + 1;
     }
     b = '0';
     a = a + 1;
   }
}

int  main(void)
{
  ft_print_comb();
  ft_putchar('\n');
}
