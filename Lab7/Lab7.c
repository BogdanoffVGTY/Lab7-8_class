#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <math.h>
void task2();
int main()
{
	setlocale(LC_ALL, "RUS");
	float x, y, lg;
	char c;
	puts("Введите пример");
	scanf("%f%c%f",&x,&c,&y);
	switch (c)
	{
	case '+':
		printf("=%f",x+y);
		break;
	case '-':
		printf("=%f", x - y);
		break;
	case '*':
		printf("=%f", x * y);
		break;
	case '%':
		printf("=%d", (int)x % (int)y);
		break;
	case 'l':
		lg = log(x) / log(y);
		printf("=%f", lg);
		break;
	default:
		printf("Неизвестный символ\n");
		break;
	}
}

void task2()
{
	char c;
	printf("Введите букву или цифру:\n");
	scanf("%c", &c);
	switch (c)
	{
	default:
		printf("Неизвестный символ\n");
		break;
	case 'a':
	case 'b':
	case 'c':
	case 'd':
		printf("Это буква");
		break;
	case '1':
	case '2':
	case '3':
	case '4':
		printf("Это цифра");
		break;
	}
	return 0;
}