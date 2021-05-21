#include <stdio.h>
#include <stdlib.h>


int main()
{
    double num1;
    double num2;
    char op;

    printf("Give first number:");
    scanf("%lf", &num1);
    printf("give the operator:");
    scanf(" %c" , &op);
    printf("Give second number:");
    scanf("%lf", &num2);

    if(op == '+'){
printf("%f" , num1 + num2);
}   else if (op == '-') {
    printf("%f" , num1 - num2);
}   else if (op == '/'){
    printf("%f" , num1 / num2);
}   else if (op == '*'){
    printf("%f" , num1 * num2);
}   else {
    printf("Invalid Operator");
}
    return 0;
}

