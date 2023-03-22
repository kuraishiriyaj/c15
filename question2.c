#include<stdio.h>
/* write a functionto find the smallest number from the given array
of any size(TSRS)?
*/
int smallest(int a[10],int s)
{
    int i=0;
    int min=a[0];
    for(i=0;i<10;i++)
    {
        if(min>a[i])
        min=a[i];
    }
    return min;
}
int main()
{
  int a[10];
  int i;
  printf("enter is the number of the arrays");
   for(i=0;i<10;i++)
   {
    scanf("%d",&a[i]);
   }
  printf("%d", smallest(a,10));
    return 0;
}