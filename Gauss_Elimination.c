/*x-2y+9z=8
3x+y-z=3
2x-8y+z=-5

Gauss Elimination of this equation: 
*/
//
#include<stdio.h>
#include<math.h>
#define value 20
int main(){
    int n,i,j,k;
    float a[value][value],x[value],m,s=0.0;
    printf("\nEnter the order of the cofficient matrix : ");
    scanf("%d",&n);
    printf("\nEnter the elements of the augumented matrix : \n");
    for ( i = 1; i <= n; i++){
        for(j=1;j<=n+1;j++){
            scanf("%f",&a[i][j]);
        }
    }
    for ( i = 1; i <= n; i++)
    {
        for (j=i+1;j<=n;j++)
        {
            m=a[j][i]/a[i][i];

            for (k=1;k<=n+1;k++)
            {
                a[j][k]=a[j][k]-m*a[i][k];
            }
            
        }
        
    }
    printf("\nEnter upper triangular matrix : \n");
    for ( i = 1; i <=n; i++)
    {
        for (j=1;j<=n+1;j++)
        {
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    x[n]=a[n][n+1]/a[n][n];
    for ( i = n-1; i >=1; i--)
    {
        s=0.0;
        for ( j = i+1; j <=n; j++)
        {
            s=s+a[i][j]*x[j];
            x[i]=(a[i][n+1]-s)/a[i][i];
        }
    }
    printf("\n\nThe required solution is : \n");
    for ( i = 1; i <=n; i++)
    {
        printf("x[%d]=%4.3f\n",i,x[i]);
    }
    return 0; 
}
