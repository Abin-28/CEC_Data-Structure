#include <stdio.h>
int main()
{
    int n,arr[n],temp=-1;
 
    printf("Enter numbers:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {   scanf("%d",&arr[i]);
        if(temp<arr[i])
            temp=arr[i];
    }
    printf("Largest:%d",temp);
return 0;
    
}

Output:
Enter numbers:6
1 6 2 4 5 3
Largest:6