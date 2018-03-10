#include <stdio.h>
#include <stdlib.h>
int main(){

    //  1 + 2 + 3 + 4 + ..... + n
/*
    int n, i, j, sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += i;
    }

    printf("sum is : %d\n", sum);
    */

    //  1^2 + 2^2 + 3^2 + 4^2 + ..... n^2 = .?
/*
    int i, j, n, sum = 0;

    printf("Enter n : ");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        sum += pow(i, 2);
    }

    printf("1^2 + 2^2 + 3^2 + 4^2 + ..... + n^2 = %d\n", sum);
    */

    //  1^1 + 2^2 + 3^3 + 4^4 + ..... n^n = .??
    /*
    int i, n, sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        sum += pow(i, i);
    }

    printf("1^1 + 2^2 + 3^3 + 4^4 + ..... + n^n = %d\n", sum);
    */

    //  1 + (2 + 3) + (4 + 5 + 6) + .... + nthTerm

    int i, j, n, sum = 0;

    printf("Enter n : ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=(i+1); j<=n; j++){
            sum += j;
        }
    }

    printf("%d\n", sum);


}
