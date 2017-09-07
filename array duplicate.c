#include<stdio.h>
void main()
{
    int a[5],i,j,count;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
        count=0;
        j=0;
        for(j=i;j<5;j++)
        {
            if(a[i]==a[j]&&i!=j)
            {
                count++;
            }
        }
        if(count>0&&i!=j)
        {
            printf("The number %d present %d\n",a[i],count);
        }
    }
}
