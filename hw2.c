#include <stdio.h>
int main() {
	float km, miles = 1.609, result;
	printf("Please enter kilometers: ");
	scanf_s("%f", &km);
	result = km / miles;
	printf("%.1f km is equal to %.1f miles\n", km, result);
	return 0;
}