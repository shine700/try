#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i, j, temp;

    printf("Enter how many numbers you want to store : ");
    scanf("%d", &n);

    int num[n];

    for(i=0; i<n; i++){
        scanf("%d", &num[i]);
    }

    printf("Number : ");
    for(i=0; i<n; i++){
        printf("%2d ", num[i]);
    }

    //  ascending order
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(num[i] < num[j]){
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }
    //  1 2 3 4 5
    printf("\n Numbers in ascending order : ");
    for(i=0; i<n; i++){
        printf("%2d ", num[i]);
    }


    return 0;
}
