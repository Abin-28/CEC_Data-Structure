/* Fibonacci iterative */

#include <stdio.h>
#include <stdlib.h>

void fibonacci_dp(int n) //function fibonacci iterative
{
    int f[100],i;
    f[1]=0;
    f[2]=1;
    for(i=3;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
    }
        
    printf("%d\t",f[n]);  //printing nth fibonacci
}
int main(int args, char *argv[]) //main function with command line argument
{
    int n;
    n=atoi(argv[1]);  //taking nth value from command line argument
    printf("nth Fibonacci series\n");
    
    fibonacci_dp(n);   //function call for fibonacci iterative
}
