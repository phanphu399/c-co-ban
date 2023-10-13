#include <stdio.h>
#include <math.h>
int main()
{
	int a, b, c;
	float x1, x2;
	// scanf("%d%d%d", &a, &b, &c);
	printf("Nhap he so a: ");
	scanf("%d", &a);
	printf("Nhap he so b: ");
	scanf("%d", &b);
	printf("Nhap he so c: ");
	scanf("%d", &c);
	float dt;
	dt = b * b - 4 * a * c;

	if (a == 0 && b != 0)
		printf("%.2f", (float)-c / b);
	else if (b == 0 && c == 0)
	{
		printf("VO SO NGHIEM");
	}
	if (b == 0 && c != 0)
		printf("VO NGHIEM");
	else if (a != 0)
	{
		if (dt > 0)
		{
			x1 = (-b + sqrt(dt)) / (2 * a);
			x2 = (-b - sqrt(dt)) / (2 * a);
			float k = fmin(x1, x2);
			float m = fmax(x1, x2);
			printf("%.2f %.2f", k, m);
		}
		else if (dt == 0)
		{
			x2 = (-b) / (2 * a);
			x1 = (-b) / (2 * a);
			printf("%.2f", x1);
		}
		else
		{
			printf("VO NGHIEM");
		}
	}
	return 0;
}
