/* x^3-x-1*/

#include<stdio.h>
#include<math.h>
float f(float x){
    return (pow(x,3)-x-1);
}
float df(float x){
    return (3*x*x-1);
}
int main(){
    float a,b,c,e;
    int k=0;
    printf("\nEnter the accuracy : ");
    scanf("%f",&e);
    do{
        printf("\nEnter the intervals a,b : ");
        scanf("%f,%f",&a,&b);
    }
    while (f(a)*f(b)>0);
    {
        c=(a+b)/2;
    }
    do{
        c=c-(f(c)/df(c));
        printf("\nk=%d\ta=%f\tb=%f\tc=%f\tf(c)=%f",k,a,b,c,f(c));
        k=k+1;
    }
    while (fabs(f(c))>=e);
    {
        printf("\n\nRoot of the equation is : %f",c);
        printf("\n\nNo of iteration : %d",k);
    }
    return 0;
}