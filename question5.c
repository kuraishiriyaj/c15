#include<stdio.h>
/*  write a function to find the first occurrence of adjcent duplicate values in the
 array function has to return the value of the element ?
*/
int duplicate(int a[10],int hash[20])
{
  int i=0;
  int sum;
  for(i=0;i<10;i++)
    hash[a[i]]++;
    for(i=0;i<20;i++)
    {
      if(hash[i]==2)
      
    
      break;
      
    }
    return hash[i];

}


int main()
{


int s;
 int a[]={1,1,5,3,7,4,7,3,9,9};
 int hash[20]={0};
 s=duplicate(a,hash);
 printf("first accourrence of adjcent duplicate values :%d",s);


 return 0;
}
