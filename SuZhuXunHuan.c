/*【问题描述】读入2个正整数m和n（1 < n≤6），
再读入n阶方阵a，将该方阵的每个元素循环向右移m个位置
例如一个3 * 3的方阵，将每个元素循环右移2个位置，则第0列移到第2列的位置，
第1列移到第0列的位置，第2列移到第1列的位置；再如一个3 * 3的矩阵，循环右移4个位置，则第0列移到第1列，第1列移到第2列，第2列移到第0列，
诸如此类。移动后的方阵可以存到另一个二维数组中。试编写相应程序。*/
#include<stdio.h>
#define NUM 6
int main(void)
{
	int m, k, n, i, j, flag = 0;
	int a[NUM][NUM], b[NUM][NUM];
	scanf("%d%d", &m, &n);
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
			scanf("%d", &a[i][j]);
	while (m >= n)
	{
		m -= n;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (flag == 0)
			{
				k = j + m;
				flag = 1;
			}
			b[i][k] = a[i][j];
			k++;
			if (k == n)
				k = 0;

		}
		flag = 0;
	}
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
			printf("%d ", b[i][j]);
			if (j == n - 1)
				putchar('\n');
		}
	return 0;
}