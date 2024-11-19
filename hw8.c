#include <stdio.h>
#include <math.h>

double calculate(double arr[], int size) {
    double sum = 0.0, mean, standardDeviation = 0.0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    mean = sum / size;
    for (int i = 0; i < size; i++)
        standardDeviation += pow(arr[i] - mean, 2);
    standardDeviation = sqrt(standardDeviation / size);
    return standardDeviation;
}

int main() {
    double numbers[5];
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < 5; i++)
        scanf_s("%lf", &numbers[i]);
    double result = calculate(numbers, 5);
    printf("Standard Deviation = %.3lf\n", result);
    return 0;
}
