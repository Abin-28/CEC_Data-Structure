/* Binary search using iterative */

#include <stdio.h>
#include <stdlib.h>

int binary_search(int A[],int l,int r,int x) //function for binary search
 {
     int m;
     while(l<=r)  
    {
        m=(l+r)/2;
        if(x==A[m])
            return m;
        if(x<A[m])
         {
            r=m-1;
         }
        else
         {
             l=m+1;
         }
    }
    return -1;
}

void sort(int A[],int n) //function for sorting the random numbers using insertion sort
{
    int x,j;
    for(int i=2;i<=n;i++)
    {
        x=A[i];
        for( j=i-1;j>=1;j--)
        {
            if(x<A[j])
            {
                A[j+1]=A[j];
            }
            else
                break;
        }
        A[j+1]=x;


    }
}


int main(int args, char *argv[] ) //main function with command line argument
{
    int A[500],upper,lower,l,r,x,temp; 
    lower=1,upper=1000;  // putting random value range   
    l=1,r=500;       //puting values for left and right index

    for(int i = 1; i<=500; i++)   //taking random values
    {
      A[i]=(rand()%(upper - lower + 1)) + lower;
    }
    sort(A,500);   //function call for sorting

    x=atoi(argv[1]);   //taking element to be searched from command line argument

    temp=binary_search(A,l,r,x);   //function call for binary search
    if (temp!=-1)
    {
       printf("\nEntered value %d is present in %d",x,temp);
    }
    else
    {
       printf("\nValue is not present");
    }

    return 0;
}








