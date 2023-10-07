#include "libft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		return ("-2147483648");
	}
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
	nb += '0';
return (nb);
}
char ft_itoa(int n)
{

}

int main(void)
{
    char result = ft_putnbr(1);
    printf("%s\n", result); 
}