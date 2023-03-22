#include<stdio.h>
/* write a function in c to count the frequency of each element of an
 array ?
*/
void frequency(int a[10],int hash[50])
{
    int i=0;
    int count=0;
    for(i=0;i<10;i++)
    hash[a[i]]++;
    for(i=0;i<50;i++)
    {
        if(hash[i]!=0)
        {
            count++;
        }
        
    }
    printf("total frequency number is:%d",count);
}
int main()
{
    int a[10]={1,3,7,3,9,2,6,2,5,0};
    int hash[50]={0};
    frequency(a,hash);

    return 0;
}