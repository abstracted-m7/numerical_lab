#include<stdio.h>
#include<math.h>
float f(float x)
{
	return(1/(1+x*x));
}
main()
{
	float a,b,simp,h;
	int n,i;
	printf("Values of a,b,n:");
	scanf("%f,%f,%d",&a,&b,&n);
	h=(b-a)/n;
	simp=f(a)+f(b);
	for(i=1;i<=n-1;i++)
	{
		if(i%2==0)
		{
			simp=simp+2*f(a+i*h);
		}
		else
		{
			simp=simp+4*f(a+i*h);
		}
	}
	simp=simp*h/3.0;
	printf("The result is , sum=%f",simp);                                                           
}              
