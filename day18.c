#include <stdio.h>
int main()
{
    int i,n;
    printf("enter the integer\n");
    scanf("%d",&n);

    for ( i = 1; i <=n; i++)
    {
        printf("number is %d and cube of %d is %d\n",i,i,i*i*i);
    }
    
    return 0;
}
