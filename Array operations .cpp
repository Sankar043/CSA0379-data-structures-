#include<stdio.h>
int main()
{
    int n,array[5],i;
    printf("\n enter the number of array elements:");
    scanf("%d",&n);
    printf("\n enter the %d elements:",n);
    for(i=0;i<n;i++)
        scanf("%d",&array[i]);
    if(i==n-1)
        printf("\n array full");
    else
    {
        array[n-1]=0;
        n=n-1;
    }
    printf("\nArray elements after deletion: ");
    for(i=0;i<n;i++)
        printf("%d\t",array[i]);
    return 0;
}


#include<stdio.h>
int main()
{
int a[100],n,s,i;   
    printf("Enter size of array:\n");
    scanf("%d",&n);
    printf("Enter Elements into array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter the element to insert:");
    scanf("%d",&s);
    printf("Array Elements Before insertion:\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    for(i=n;i>=0;i--)
        a[i]=a[i-1];
    a[0]=s;
    printf("\nAfter Inserting:\n");     
    for(i=0;i<=n;i++)
        printf("%d\t",a[i]);
    return 0;
}   

