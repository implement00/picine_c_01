#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_ft(int *numb)
	{
		*numb = 42;
}


int	main(void)
	{
	int x;
	int *number;
	
	x =	10;
	number = &x;
	printf("Current Number; %d,", x);
	ft_ft(number);
	printf("Number after funciton; %d,", x);
	return 0;
}
