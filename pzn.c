#include<stdio.h>
main()
{
int a;
scanf("%d",&a);
if(a>0)
printf("%d is a positive",a);
else if(a<0)
printf("%d is a negative",a);
else
printf("%d is a zero",a);
return 0;
}
