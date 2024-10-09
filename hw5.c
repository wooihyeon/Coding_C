#include <stdio.h>
trans(int n);
int main() {
	int n;
	printf("Please enter a number: ");
	scanf_s("%d", &n);
	trans(n);
}
trans(int n) {
	if (n == 0) {
		return;
	}
	trans(n / 2);
	printf("%d", n % 2);
}