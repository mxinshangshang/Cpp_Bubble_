// Cpp_Bubble_.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	/*冒泡算法
	int a[10] = { 6, 4, 3, 0, 7, 6, 2, 9, 8, 1 };
	int i = 0, j = 0, k = 0, m = 0;
	int length = 0;

	length = sizeof(a) / sizeof(a[10]);
	m = length;
	for (int i = 1; i < length; i++)
	{
	m -= 1;
	for (int j = 0; j < m; j++)
	{
	if (a[j] > a[j + 1])
	{
	k = a[j];
	a[j] = a[j + 1];
	a[j + 1] = k;
	}
	}
	}
	for (int i = 0; i < length; i++)
	{
	printf("%d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
	*/


	/*及格分计算
	int a[10], i, s[7] = { 0 };
	for (i = 0; i < 10; i++)
	{
	scanf("%d", &a[i]);
	switch (a[i] / 10){
	case 10:
	case 9:
	case 8:
	case 7:
	case 6:s[6]++; break;
	case 5:s[5]++; break;
	case 4:s[4]++; break;
	case 3:s[3]++; break;
	case 2:s[2]++; break;
	case 1:s[1]++; break;
	case 0:s[0]++; break;
	}
	}
	for (i = 6; i > 0; i--)
	{
	if (s[i] >= 6)break;
	else s[i - 1] += s[i];
	}
	printf("%d", i*10);
	system("pause");
	return 0;
	*/


	/*同学开灯
	int n;
	int i, j=1, count, m = 0;
	scanf("%d", &n);
	while (j <= n)
	{
	count = 0;
	for (i = 1; i <= n; i++)
	{
	if (j%i == 0) count++;
	}
	if (count % 2 != 0) m++;
	j++;
	}
	printf("%d", m);
	system("pause");
	return 0;
	*/


	/*学生开灯
	int n, i, j,sum=0;
	scanf("%d", &n);
	bool light[65536] = {false};
	for (i = 1; i <= n; i++)
	{
	for (j = 1; j <= (n / i); j++)
	{
	light[i*j] = (!light[i*j]);
	}
	}
	for (i = 1; i <= n; i++)
	{
	sum += light[i];
	}
	printf("%d", sum);
	system("pause");


	int n, i, j, sum = 0;
	scanf("%d", &n);
	bool light[65536] = { false };
	for (i = 1; i <= n; i++)
	{
	for (j = 1; j*i <= 65535; j++)
	{
	light[i*j] = (!light[i*j]);
	}
	}
	for (i = 1; i <= n; i++)
	{
	sum += light[i];
	}
	printf("%d", sum);
	system("pause");
	*/

	char a;
	int b[100];
	int i = 0, m = 0, max = 0, min = 100;
	a = '0';
	while (a != '\n')
	{
		scanf("%d", &b[i]);
		if (b[i]< min)min = b[i];
		if (b[i]> max)max = b[i];
		scanf("%c", &a);
		i++;
	}
	for (int j = 0; j < i; j++)
	{
		if (b[j]>min && b[j] < max)m++;
	}
	printf("%d", m);
	system("pause");
}


