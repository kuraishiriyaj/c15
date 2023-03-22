#include<stdio.h>
/* write a function to rotate an array by n position in d direction the d is an idicative
value for  left or right (for example if array of size  5 is [32,29,40,12,70,] n is 2 and d is left then the
 resultin array after left a rotation 2 times is [40,12,70,32,29])
*/
int main()
{
 int a[10];
 int i,j;
 int position;
 printf("enter is the number of the arrays\n");
 for(i=0;i<10;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("Aarray is :\n");
 for(i=0;i<10;i++)
 {
    printf(" %d ",a[i]);
 }
 printf("\nenter is the positions\n");
 scanf("%d",&position);
for(j=1;j<=position;j++)
{
 int x=a[9];

 for(i=9;i>0;i--)
 {
    a[i]=a[i-1];
    a[i]=a[i-1];
 }
 a[0]=x;
}
 printf("value rotate left to right n position is:\n");
 for(i=0;i<10;i++)
 {
    printf(" %d ",a[i]);


 }
    return 0;
}
