#include<stdio.h>
#include<math.h>
int main(){
    float x[15],y[15],X,prod=1,s,h,d;
    int i,j,n;
    printf("\t\tOutput : \n");
    printf("Enter the number of points : ");
    scanf("%d",&n);
    printf("Enter the value of X : ");
    scanf("%f",&X);
    printf("Enter the value of x and y : ");
    printf("\nx\ty=f(x)\n");
    for(i=1;i<=n;i++){
        scanf("%f\t%f",&x[i],&y[i]);
    }
    h=x[2]-x[1];
    printf("\nThe value of h=%f\n",h);
    s=(X-x[1])/h;
    d=y[1];
    printf("The value of s : %f \nThe value of d : %f",s,d);
    for(i=1;i<=n-1;i++){
        for(j=1;j<=n-1;j++){
            y[j]=y[j+1]-y[j];
            printf("\n%f\n",y[j]);
        }
        prod=prod*(s-i+1)/i;
        d=d+prod*y[1];
        printf("\n%f",d);
    }
    printf("\nThe result is : ");
    printf("y(%1.2f)=%3.5f",X,d);
}