/* Fibonacci recursive */

#include <stdio.h>
#include <stdlib.h>

int fibonacci_recursive(int n) //function fibonacci recursive
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
}
int main(int args, char *argv[])  //main function with command line argument
{
    int n;
    n=atoi(argv[1]);  //taking nth value from command line argument
    printf("nth Fibonacci series\n");

    printf("%d\t",fibonacci_recursive(n)); //printing nth fibonacci and calling function
}
