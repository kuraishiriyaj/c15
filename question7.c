#include<stdio.h>
/* write a function in c to count a total number of duplicate elements in an array 
(means elements that occurs 2 times in an array)?
*/
int duplicate(int a[10],int hash[50])
{
    int i=0;
    int count=0;
    for(i=0;i<10;i++)
    hash[a[i]]++;
    for(i=0;i<50;i++)
    {
        if(hash[i]==2)
          count++;
    }
    printf("total number of the ducplicate number is:%d",count);
}
int main()
{
    int a[10]={1,1,3,4,5,6,7,8,8,10};
    
    int hash[50]={0};
    
    duplicate(a,hash);


    return 0;
}