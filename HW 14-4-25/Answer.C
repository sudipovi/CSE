//Sudip Golder Ovi; Roll: 2401040
#include <stdio.h>
#include<math.h>
int main(){
    double a,b,c,d,root1,root2,rtd,i;

    printf("Enter the value of a\n");
    scanf("%lf",&a);
    printf("Enter the value of b\n");
    scanf("%lf",&b);
    printf("Enter the value of c\n");
    scanf("%lf",&c);

    d = (b * b) - (4 * a * c);

    if(a!=0 && d < 0){
        rtd = sqrt(-d);
        i = (rtd)/(2*a);
        root1 = (-b) / (2*a);
        root2 = (-b) / (2*a);

        printf("Value of Root1 = %.2lf + %.2lfi\n",root1,i);
        printf("Value of Root2 = %.2lf + %.2lfi\n",root2,i);

    }
    else if(a!=0 && d > 0){
        rtd = sqrt(d);
        root1 = (-b + rtd) / (2*a);
        root2 = (-b - rtd) / (2*a);

        printf("Value of Root1 = %.2lf\n",root1);
        printf("Value of Root2 = %.2lf\n",root2);
    }
    else if(a==0){
        printf("Math Error\n");
    }
    else{
        root1 = (-b) / (2*a);

        printf("Value of Root1 = Root2 = %.2lf\n",root1);
    }

    return 0;
}
