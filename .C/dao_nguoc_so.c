#include <stdio.h>

int main()
{
	int sd, n;
	int tmp = 0;
	scanf("%d", &n);
	while (n != 0)
	{
		sd = n % 10;
		tmp = tmp * 10 + sd;
		n /= 10;
	}
	printf("%d\n", tmp);

	for (; n != 0; n /= 10)
	{
		sd = n % 10;
		tmp = tmp * 10 + sd;
	}

	printf("%d\n", tmp);

	return 0;
}
