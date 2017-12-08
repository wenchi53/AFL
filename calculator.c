// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>
#include <stdlib.h>

int main() {

    char operator;
    double firstNumber,secondNumber;

    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);
    int a = firstNumber;
    int b = secondNumber;

    float iresult, fresult;

    switch(operator)
    {
        case '+':
        	iresult = a + b;
        	fresult = firstNumber + secondNumber;
            break;

        case '-':
        	iresult = a - b;
        	fresult = firstNumber - secondNumber;
            break;

        case '*':
        	iresult = a * b;
        	fresult = firstNumber * secondNumber;
            break;

        case '/':
        	iresult = a / b;
        	fresult = firstNumber / secondNumber;
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default: ;
    }

    if (a == 12343)
    	abort();
   
    return 0;
}
