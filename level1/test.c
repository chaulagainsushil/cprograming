#include <stdio.h>

int containsDigitSeven(int number) {
    while (number > 0) {
        if (number % 10 == 7) {
            return 1;
        }
        number /= 10;
    }
    return 0;
}

int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            int product = i * j;
            if (containsDigitSeven(product)) {
                printf("what what what\t");
            } else {
                printf("%d\t\t", product);
            }
        }
        printf("\n");
    }

    return 0;
}




