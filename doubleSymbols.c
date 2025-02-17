 #include <stdio.h>

int main() {
    int N;


    printf("Enter an even integer: ");
    scanf("%d", &N);


    if (N % 2 != 0) {

        printf("Wrong input\n");
    } else {

        for (int i = 0; i < N; i++) {
            if (i % 2 == 0) {
                printf("*");
            } else {
                printf("+");
            }
        }
        printf("\n");
    }

    return 0;
}
