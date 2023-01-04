#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include <stdio.h>


int get_diff_bit(int n, int m)
{
	int tmp = n ^ m;
	int count = 0;
	while (tmp)
	{
		tmp = tmp & (tmp - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d%d", &n, &m);
	int count = get_diff_bit(m, n);
	printf("count = %d\n", count);
	return 0;
}