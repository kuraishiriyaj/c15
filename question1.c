/* write a function to find the greatest number from the given array
 of any size (TSTRS)

*/
#include<stdio.h>
int greatest(int a[10],int s)
{
  int i=0;
  int max=0;
  for(i=0;i<s;i++)
  {
    if(max<a[i])
      max=a[i];
  }
  return max;
}
int main()
{
  int a[10];
  int i;
  printf("enter is the array");
  for(i=0;i<10;i++)
  {
  scanf("%d",&a[i]);
  }
  printf(" greatest number is :%d",greatest(a,10));
  return 0;
}