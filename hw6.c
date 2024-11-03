#include <stdio.h>
int main() {
	int num[5];
	int i;
	printf("Please input five integers: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &num[i]);
	}
    printf("Odd numbers: ");
    for (i = 0; i < 5; i++) {
        if (num[i] % 2 != 0) {
            printf("%d ", num[i]);
        }
    }
    printf("\nEven numbers: ");
    for (i = 0; i < 5; i++) {
        if (num[i] % 2 == 0) {
            printf("%d ", num[i]);
        }
    }
}
