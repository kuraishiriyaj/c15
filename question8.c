#include<stdio.h>
/* write a function in c to print all unique elements in array ?
*/
int unique(int a[10],int hash[50])
{
    int i=0;
    for(i=0;i<10;i++)
     hash[a[i]]++;
     for(i=0;i<50;i++)
     {
        if(hash[i]==1)
         {
            printf("unique number %d-> %d\n\n",i,hash[i]);
         }
     }
}
int main()
{
    int a[10]={1,5,3,7,2,2,6,2,7,2};
     int hash[50]={0};
     unique(a,hash);

    return 0;
}