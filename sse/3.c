#include <stdio.h>

int m = 0, n = 0;

unsigned int InputNumber(char ch) {
    if (ch == 'm') {
        printf("Please input the number %c(>1):",ch);
        int k;
        if (scanf("%d", &k) == 1) {
            if (k > 1) return k;
            else {
                printf("The input must be an integer larger than 1!\n");
                return (InputNumber(ch));
            }
        } else {
            printf("The input must be an integer larger than 1!\n");
            return (InputNumber(ch));
        }
    }
    if (ch == 'n') {
        printf("Please input the number %c(>1):",ch);
        int k;
    }
}

int main() {
    int sum = 0,i = 0;
    do
    {
        m = InputNumber('m');
        n = InputNumber('n');
    }while(m > n && printf("n must be not smaller than m! Input again!\n"));   //保证m<=n
    sum = PrimeSum(m,n);
    printf("sum of prime numbers:%d",sum);
    return 0;
}