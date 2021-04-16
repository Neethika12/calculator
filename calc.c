#include<stdio.h>
int main(){
    char operator;
    double a,b;
    printf("enter the operator(+,-,*,/):");
    scanf("%c",& operator);

    printf("enter the numbers one by one:");
    scanf("%lf %lf", &a, &b);
    switch(operator)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", a, b, (a+b));
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf", a, b, (a-b));
            break;
        case'*':
            printf("%.2lf * %.2lf = %.2lf", a, b, (a*b));
            break;
        case'/':
        if(b!=0)
            printf("%.2lf / %.2lf = %.2lf", a, b, (a/b));
        else
            printf("Divide by zero situation");
            break;

        default:
            printf("Invalid operator");
    }
    return 0;
}