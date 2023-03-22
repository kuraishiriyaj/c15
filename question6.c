#include<stdio.h>
/* write a function in c to read  n number of values in an array
 and display it in reverse order ?
*/
void reverse(int a[10])
{
    int i;
    for(i=10;i>=0;i--)
    {
        printf("%d\n",a[i]);
    }
}
int main()
{
    int a[10],i,n;
    printf("enter is the number ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a);


    return 0;
}
