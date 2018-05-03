#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[5];
    int i,j,k,temp;
    printf("\n Enter the elements :");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nArray before sorting : ");
    for(i=0;i<=4;i++)\
        printf("%d\t",arr[i]);
    for(i=1;i<=4;i++)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[i])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                for(k=i;k>j;k--)
                    arr[k]=arr[k-1];
                arr[k+1]=temp;
            }
        }
    }
    printf("\n Array after sorting :");
    for(i=0;i<=4;i++)
    {
        printf("%d\t",arr[i]);
    }
}
