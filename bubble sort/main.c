#include <stdio.h>

int main() {
    int num, i, flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 2) {
        printf("%d is an even prime number.", num);
        return 0;
    } else if(num % 2 == 0) {
        printf("%d is not a prime number.", num);
        return 0;
    }

    for(i = 3; i <= num/2; i += 2) {
        if(num % i == 0) {
            flag = 1;
            break;
        }
    }

    if(flag == 0) {
        printf("%d is an odd prime number.", num);
    } else {
        printf("%d is not a prime number.", num);
    }

    return 0;
}

