#include <stdio.h>

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

void sort(double array[], int n) {
    for (int i = 1; i < n; i++) {
        double key = array[i];
        int j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }
}

int position(double array[], int n, double element) {
    for (int i = 0; i < n; i++) {
        if (array[i] == element) {
            return i;
        }
    }
    return -1; 
}

int main() {
    int n, k;
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    double array1[n];
    double array2[n];

    input_arr(array1, n);
    input_arr(array2, n);

    output_arr(array1, n);
    output_arr(array2, n);

    printf("Введіть значення k: ");
    scanf("%d", &k);

    sort(array1, n);
    sort(array2, n);

    double element;
    if (array1[k - 1] < array2[k - 1]) {
        element = array1[k - 1];
        printf("Менший елемент після сортування знаходиться у масиві 1 на позиції %d\n", position(array1, n, element));
    } else {
        element = array2[k - 1];
        printf("Менший елемент після сортування знаходиться у масиві 2 на позиції %d\n", position(array2, n, element));
    }

    return 0;
}