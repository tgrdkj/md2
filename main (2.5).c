#include <stdio.h>
#include <math.h>

void input_arr(double array[], int n) {
    printf("Введіть %d елементів масиву:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &array[i]);
    }
}

void output_arr(double array[], int n) {
    printf("Елементи масиву:\n");
    for (int i = 0; i < n; i++) {
        printf("%lf ", array[i]);
    }
    printf("\n");
}

double calculate_sqrt(double x) {
    return sqrt(x);
}

double calculate_l(double array[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += calculate_sqrt(array[i]);
    }
    return sum;
}

int main() {
    int n;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    double array[n];
    input_arr(array, n);

    output_arr(array, n);

    double l = calculate_l(array, n);
    printf("l = %lf\n", l);

    return 0;
}