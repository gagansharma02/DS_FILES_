// Program for traversing array elements.
#include<stdio.h>

void Traverse(int a1[],int n1)
{
    for(int i=0;i<n1;i++)
    {
        printf("%d\t",a1[i]);
    }
}
int main()
{
    int arr[100],n,i;
    printf("Enter the Number of Element to be Inserted : \n");
    scanf("%d",&n);
    printf("Enter Array  Elements :\n");
    for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
    Traverse(arr,n);
}
