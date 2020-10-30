#include <stdio.h>
#include "max.h"
#include "sum.h"
int main()
{ int i,j,sum1,max1;
 printf("Please input a number :");
 scanf("%d",&i);
 printf("Please input a number :");
 scanf("%d",&j);
 sum1=sum(i,j);
 max1=max(i,j);
 printf("The max is %d\n",max1);
 printf("The sum is %d\n",sum1);
 return 0;
}
