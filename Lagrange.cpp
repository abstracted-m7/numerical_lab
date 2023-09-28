/*
x :		0	2	3	5	7
f(x):	1	47	97	251	477
find the f(5.5) using lagrange Interpolation

*/
#include<stdio.h>
#include<math.h>
int main()
{
    float x[100],y[100],a,product,sum=0.0; //a=5.5
    int n,i,j,d=1; // d=1 true for while loop
    printf("\n\n Enter the number of the terms of the table: ");
    scanf("%d",&n);
    printf("\n\n Enter the respective values of the variables x and y: \n");
    for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    printf("\n\n The table you entered is as follows :\n\n");
    for(i=0; i<n; i++)
    {
        printf("%.3f\t%.3f",x[i],y[i]);
        printf("\n");
    }
    while(d==1)
    {
        printf(" \n\n\n Enter the value of the x to find the respective value of y : ");
        scanf("%f",&a);
        for(i=0; i<n; i++)
        {
            product=y[i];
            for(j=0; j<n; j++)
            {
                if(j!=i)
                {
                    product=product*(a-x[j])/(x[i]-x[j]);
                }
            }
            sum=sum+product;
        }
        printf("\n\n The respective value of the variable y is: %.2f",sum);
        printf("\n\n Do you want to continue?\n\n Press 1 to continue and any other key to exit");
        scanf("%d",&d);
    }
    return 0;
}

