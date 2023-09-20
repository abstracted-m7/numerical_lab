#include<stdio.h>
#include<math.h>
float f(float x){
    return (x*x*x)-(5*x)+1;
}
int main(){
    float x0,x1,x2,e;
    int k=0;
    printf("\nEnter the accuracy : ");
    scanf("%f",&e);
    do{
        printf("\nEnter the intervals a,b : ");
        scanf("%f,%f",&x0,&x1);
    }
    while(f(x0)*f(x1)>0.0);
    do{
        x2=x1-f(x1)/(f(x1)-f(x0))*(x1-x0);
        printf("\nk=%d\tx0=%f\tx1=%f\tx2=%f\tf(x)=%f",k,x0,x1,x2,f(x2));
        if(f(x0)*f(x2)<0.0){
            x1=x2;
        }
        else{
            x0=x2;
        }
        k=k+1;
    }
    while (fabs(f(x2))>e);
        printf("\n\nRoot of the equation is %f",x2);
        printf("\n\nNo of itteration : %d",k);
    return 0;
}