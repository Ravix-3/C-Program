#include <stdio.h>

int main() {
    int a, b;
    int arr[] = {100, 200, 300, 400, 500, 600, 700, 800};
    int size = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < size - 1; i++) {
        a = arr[i];
        for(int j = i + 1; j < size; j++) {
            b = arr[j];
            if(a + b == 1000) {
                printf("Pair: %d, %d\n", a, b);
            }
        }
    }

    return 0;
}
