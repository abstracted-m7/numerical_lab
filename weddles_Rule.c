#include<stdio.h>
#include<math.h>
float f(float x)
{
return(1/(1+x*x));
}
main()
{
float a,b,sum,h;
int n,i;
printf("ENTER THE VALUES OF a,b,n:");
scanf("%f,%f,%d",&a,&b,&n);
h=(b-a)/n;
sum=f(a)+f(b);
for(i=1;i<=n-1;i++)
{
if(i%2==0)
{
if(i%6==0)
sum=sum+2*f(a+i*h);
else
sum=sum+f(a+i*h);
}
else
{
if(i%3==0)
sum=sum+6*f(a+i*h);
else
sum=sum+5*f(a+i*h);
}
}
sum=sum*3*h/10;
printf("the sum is %f",sum);
}
