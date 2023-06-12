#include<stdio.h>

int main()
{
    int i,n,firstterm=0,secondterm=1,nextterm;
    
    nextterm = firstterm + secondterm;
    
    printf("Enter the number of terms:");
    scanf("%d",&n);
    
    printf("Fibonacci series : %d, %d, ",firstterm , secondterm);
    
    for(i=3 ; i<=n ; i++)
    {
        printf("%d, ",nextterm);
    firstterm = secondterm;
    secondterm = nextterm;
   nextterm = firstterm + secondterm;
    }
    
    return 0;
}
