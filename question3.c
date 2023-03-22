#include<stdio.h>
/* write function to sort an array of any size(TSRN)?
*/
void sort(int a[10],int size)
{
    int i;
    int j;
    int t=0;
    for(i=0;i<size;i++)
    {
         for(j=i+1;j<size;j++)
         {
              if(a[i]>a[j])
              { t=a[i];
               a[i]=a[j];
                a[j]=t;
              }
         }
    }
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int a[10]={10,6,3,8,2,0,5,2,7,3};
    sort(a,10);

    return 0;
}
