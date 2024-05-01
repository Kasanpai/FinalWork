#include <conio.h>
#include <stdio.h>

int main()
{
	int kur1 = 0;
	printf("Please, input number K1: ");
	scanf_s("%d", &kur1);
	int kur2 = 0;
	printf("Please, input number K2: ");
	scanf_s("%d", &kur2);
	int kur3 = 0;
	printf("Please, input number K3: ");
	scanf_s("%d", &kur3);

	int sum = 0;
	int a = 0;
	printf("Please, input number A: ");
	scanf_s("%d", &a);
	if (a >= kur2 && a <= kur3) {
		if (!(a % kur1)) {
			sum = sum + a;
		}
	}
	
	int b = 0;
	printf("Please, input number B: ");
	scanf_s("%d", &b);
	if (b >= kur2 && a <= kur3) {
		if (!(b % kur1)) {
			sum = sum + b;
		}
	}

	int c = 0;
	printf("Please, input number C: ");
	scanf_s("%d", &c);
	if (c >= kur2 && c <= kur3) {
		if (!(c % kur1)) {
			sum = sum + c;
		}
	}

	int d = 0;
	printf("Please, input number D: ");
	scanf_s("%d", &d);
	if (d >= kur2 && d <= kur3) {
		if (!(d % kur1)) {
			sum = sum + d;
		}
	}

	printf("Your result: %d\n", sum);
}

// минимум a b c используя условную операцию ? :, ограничение - 1 оператор
