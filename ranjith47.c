#include <stdio.h>
int main()
{
    int a[50],i,n,max,min;
    printf("Enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            printf("%d\n",min);
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            printf("%d",max);
        }
    }
    return 0;
    getch();
}
