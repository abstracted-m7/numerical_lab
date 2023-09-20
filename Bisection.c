//Solve this equation using bisection method : f(x)=x^3-9x+1
#include<stdio.h>
#include<math.h>
float f(float x){
    return (x*x*x-9*x+1);
}
int main(){
    float a,b,e,c;
    int k =0;
    printf("Enter the accuracy : ");
    scanf("%f",&e);
    do{
        printf("\n Enter the intervals a,b : ");
        scanf("%f,%f",&a,&b);
    }
    while (f(a)*f(b)>0.0);
    do{
        c=(a+b)/2.0;
        printf("\n k=%d \t a=%f \t b=%f \t c=%f \t f(c)=%f",k,a,b,c,f(c));
        if(f(a)*f(c)<0.0)
            b=c;
        else
            a=c;
            k=k+1;
    }
    while (fabs(f(c))>e);
        printf("\n\n Root of the equation is : %f",c);
        printf("\n\n No of iteration : %d",k);  
    
}