#include <stdio.h>
int factorial(unsigned);
int main()
{
    printf("Factorial of 0 is %d\n", factorial(0));
    printf("Factorial of 1 is %d\n", factorial(1));
    printf("Factorial of 3 is %d\n", factorial(3));
    printf("Factorial of 5 is %d\n", factorial(5));
}

int factorial(unsigned n){
    if(n>1){
        return n*factorial(n-1);
    }else{
        return 1;
    }
}

    //gento