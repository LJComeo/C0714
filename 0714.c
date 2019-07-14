#include <stdio.h>
#include <stdlib.h>

int change(int *px)
{
	int y = 8;
	y = y - *px;
	px = &y;
	return *px;
}

int fun(int x)
{
	int count = 0;
	while (x)
	{
		count++;
		x = x&(x - 1);
	}
	return count;
}

#define CIR(r) r*r

unsigned long g_ulGlobal = 0;
void GlobalInit(unsigned long ulArg)
{
	ulArg = 0x01;
	return;
}

int main()
{
	/*int xx = 3;
	int *py = &xx;
	int n=change(py);
	printf("%d\n", n);*/

	//char arr[2][4];
	//strcpy((char *)arr, "you");
	//strcpy(arr[1], "me");
	//arr[0][3] = '&';
	//printf("%s\n", arr);//you&me

	//1110 0100
	//1110 0101
	//1010 0111
	//1001 1011->1110 0101

	//111 1110 0011
	//111 1110 0010
	//111 1110 0010
	//111 1110 0001
	//111 1110 0000
	//111 1101 1111
	//111 1100 1000
	//......
	//printf("fun(2017)=%d\n", fun(2019));//8

	//int a = 1;
	//int b = 2;
	//int t;
	//t = CIR(a + b);
	//printf("%d\n", t);//5

	GlobalInit(g_ulGlobal);
	printf("%lu", g_ulGlobal);

	system("pause");
	return 0;
}
