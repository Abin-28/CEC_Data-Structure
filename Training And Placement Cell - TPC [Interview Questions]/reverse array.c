#include <stdio.h>
void reverse(int arr[],int start,int end)
{
    int temp;
    while(start<end)
{
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
}
int main()
{
    int n,arr[n];
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("Enter numbers:");
    for(int i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++)
    {printf("%d",arr[i]);}

return 0;
    
}

Output:
Enter the limit:5
Enter numbers:1 2 3 4 5
54321