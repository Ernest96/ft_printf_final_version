#include "header.h"

void	ft_putwstr(wchar_t *wstr)
{
	while (*wstr)
	{
		ft_putchar_fd(*wstr, 1);
		wstr++;
	}
}

int	ft_wstrlen(wchar_t *wstr)
{
	int i;

	i = 0;
	while (*wstr)
	{
		if (*wstr < 128)
			i++;
		else if (*wstr < 2047)
			i += 2;
		else if (*wstr < 65535)
			i += 3;
		else
			i += 4;
		wstr++;
	}
	return (i);
}
