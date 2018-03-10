#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,i,j;
    for( ; ;)
    {
        scanf("%d",&n);
        if(n==EOF) break;
        if(n%2==0){
            j=n/2;
            printf("%d\n",j);
        }
        else{
            j=n/2;
            printf("%d\n",j+1);
        }
    }
    return 0;
}
