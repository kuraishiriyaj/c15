#include<stdio.h>
/*
 write a function in c merge to same size stored in decending order?
*/
void merge(int a[],int b[],int c[],int size1,int size2)
{
    int i=0,j=0;
    int k=0;
    printf("\n enter is the first Array elements :\n");
    for(i=0;i<size1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n enter is the second Array elements :\n");
    for(j=0;j<size1;j++)
    {
        scanf("%d",&b[j]);
    }
    printf("\n first Array is:\n");
    for(i=0;i<size1;i++)
    {
        printf(" %d ",a[i]);
    }
    printf("\n second Array is:\n");
    for(j=0;j<size1;j++)
    {
        printf(" %d ",b[j]);
        
        
    
    }
    printf("\n merge of the two Array in decending order is:\n");
    for(i=0;i<size1;i++)
    {
        c[i]=a[i];
    }
    for(j=0;j<size1;j++)
    {
        c[i]=b[j];
        i++;
    }
   for(i=0;i<size2;i++)
    {
        for(k=i+1;k<size2;k++)
        {
            if(c[i]<c[k])
            {
                c[i]=c[i]+c[k];
                c[k]=c[i]-c[k];
                c[i]=c[i]-c[k];
            }
        }
    }
    for(i=0;i<size2;i++)
    {
        printf(" %d ",c[i]);
    }
}
int main()
{
 int a[10];
 int b[10];
 int c[20];
 merge(a,b,c,10,20);
    return 0;
}