#include <conio.h>
#include <stdio.h>

int main()
{
	int k1 = 0;
	printf("Please, input number K1: ");
	scanf_s("%d", &k1);
	int k2 = 0;
	printf("Please, input number K2: ");
	scanf_s("%d", &k2);
	int k3 = 0;
	printf("Please, input number K3: ");
	scanf_s("%d", &k3);

	int sum = 0;
	int a = 0;
	printf("Please, input number A: ");
	scanf_s("%d", &a);
	if (a >= k2 && a <= k3) {
		if (!(a % k1)) {
			sum = sum + a;
		}
	}
	
	int b = 0;
	printf("Please, input number B: ");
	scanf_s("%d", &b);
	if (b >= k2 && a <= k3) {
		if (!(b % k1)) {
			sum = sum + b;
		}
	}

	int c = 0;
	printf("Please, input number C: ");
	scanf_s("%d", &c);
	if (c >= k2 && c <= k3) {
		if (!(c % k1)) {
			sum = sum + c;
		}
	}

	int d = 0;
	printf("Please, input number D: ");
	scanf_s("%d", &d);
	if (d >= k2 && d <= k3) {
		if (!(d % k1)) {
			sum = sum + d;
		}
	}

	printf("Your result: %d\n", sum);
}

// минимум a b c используя условную операцию ? :, ограничение - 1 оператор
