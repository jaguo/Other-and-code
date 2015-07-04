#include <stdio.h>

int main()
{
	int i, sum, a[6] = { 0 };
	int r, sign;
	while (1)
	{
		for (i = 0; i<6; i++)
			scanf("%d", &a[i]);
		if (a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && a[4] == 0 && a[5] == 0)
			break;
		sum = 0;
		sum += a[5];

		sum += a[4];
		a[0] -= a[4] * 11;

		sum += a[3];
		a[1] -= a[3] * 5;
		if (a[1]<0 && a[0]>0)
		{
			a[0] += 4 * a[1];
			a[1] = 0;
		}

		sign = (a[2] % 4 == 0) ? 0 : 1;
		sum += a[2] / 4 + sign;
		if (a[2] % 4 != 0)
		{
			int m, n;
			r = 4 - a[2] % 4;
			if (a[1]>0)
			{
				m = a[1];
				a[1] -= 2 * r - 1;
				if (a[1]<0)
					a[1] = 0;
				n = m - a[1];
			}
			if (a[0]>0)
				a[0] -= 36 - (9 * (4 - r) + 4 * n);
		}

		if (a[1]>0)
		{
			sign=(a[1] % 9 == 0) ? 0 : 1;
			sum += a[1] / 9 + sign;
			r = a[1] % 9;
			if (r != 0)
				a[0] -= 36 - 4 * r;
		}

		if (a[0]>0)
		{
			sign = (a[0] % 36 == 0) ? 0 : 1;
			sum += a[0] / 36 + sign;
		}
		printf("%d\n", sum);
	}
	return 0;
}
