#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void lab6_1();
void lab4_2();
void stepik();

int main()
{
	setlocale(LC_ALL, "RUS");
	//for (int start = 1; start <= 1; start++) putchar('*');
	//for (int start = 1; start <= 1; start++) putchar(' ');
	//for (int start = 1; start <= 1; start++) putchar('*');
	//for (int start = 1; start <= 1; start++) putchar(' ');
	//for (int start = 1; start <= 1; start++) putchar('*');
	//for (int start = 1; start <= 1; start++) putchar(' ');
	//for (int start = 1; start <= 1; start++) putchar('*');
	//for (int start = 1; start <= 1; start++) putchar('\n');
	//for (int start = 1; start <= 1; start++) putchar('*');
	//for (int start = 1; start <= 1; start++) putchar('\n');
	//for (int start = 1; start <= 1; start++) putchar('*');
	//for (int start = 1; start <= 1; start++) putchar('\n');
	//for (int start = 1; start <= 1; start++) putchar('*');
	for (int start = 1; start <= 5; start++) putchar('*');
	for (int start = 1; start <= 1; start++) putchar('\n*');

}
void lab6_1()
{
	int a;
	printf("Введите год:\n");
	scanf("%d", &a);
	if (a % 4 || (a % 100 == 0 && a % 400)) printf("Год не високосный");
	else printf("Год високосный");
}
void lab4_2()
{
	float k = -4, x, y, a, b;
	puts("Введите значение x\n");
	scanf("%f", &x);
	a = log((-1) * k * x);
	b = exp(2 * x) + (a * x);
	y = x * pow(a, 3) + pow(b, 2);
	printf("y = %.1f", y);
	void task1();
}
void stepik()
{
	double x, y, res1, res2;
	scanf("%lf %lf", &x, &y);
	res1 = ("%lf\n", (pow(x, 2) + pow(y, 2)));
	res2 = ("%lf", (pow(y, 3) - (2 * pow(x, 2))));
	if (res1 > res2) printf("%lf", res1 - 4);
	else printf("%.2lf", res2 - 4);
}