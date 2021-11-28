#include<stdio.h>
int main()
{
    int i ,limit,j,arr[10],temp;
    printf("enter the limit of the array");
    scanf("%d",&limit);
    printf("enter the elements of the array",limit);
    for(i=0;i<limit;i++)
    {
        sacnf("%d",&arr[i]);
    }
    printf("sorted array using selection sorting:");
    for(i=0;i<limit;i++)
    {
        for(j=i+1;j<limit;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<limit;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}