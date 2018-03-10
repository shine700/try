#include <stdio.h>
#include <stdlib.h>

void main(){

/*
    int i, j, k;
    printf("Enter two interger value : ");
    scanf("%d %d", &i, &j);

    printf("\nMax = %d\n", (i > j) ? i : j);    */

    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);

    switch(ch){
        case 'A' :
            printf("You Entered A\n");
            break;
        case 'B' :
            printf("You Entered B\n");
            break;
        case 'C' :
            printf("\nYou Entered C\n");
            break;
        case 'D' :
            printf("\nYou Entered D\n");
            break;
        default :
            printf("You entered nothing");
    }


}
