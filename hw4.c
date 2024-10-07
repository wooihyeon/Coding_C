#include <stdio.h>
int main() {
	int n,i;
	printf("Please enter a number: ");
	scanf_s("%d", &n);
	for (i = 2; i < n; i++) {
		if (n % i == 0)
			break;
	}
	if (i == n)
		printf("It is a prime number.\n");
	else
		printf("It is not a prime number.\n");
}