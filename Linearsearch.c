#include<stdio.h>
int linear(int arr[],int num,int n)
{
    int flag;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if(flag==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    printf("Enter the size of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int num;
    printf("Enter the element to be searched\n");
    scanf("%d",&num);
    if(linear(arr,num,n)==0){
    printf("element is not found");
    }
    else
    {
        printf("element is found\n");
    }
}
