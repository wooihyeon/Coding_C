#include <stdio.h>
int main() {
	int n1, n2;
	printf("Input two integers: "); scanf_s("%d %d", &n1, &n2);
	printf("%d & %d = %d\n", n1, n2, n1 & n2);
	printf("%d | %d = %d\n", n1, n2, n1 | n2);
	printf("%d ^ %d = %d\n", n1, n2, n1 ^ n2);
	return 0;
}