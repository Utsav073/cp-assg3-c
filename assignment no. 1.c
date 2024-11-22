

#include <stdio.h>


void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
}

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    checkEvenOdd(number);

    return 0;
}
/*
  Roll No.:03
  Student Name:Utsav Gupta 
  Program Title:write a program in c to check a given number is even or odd using the function.

  Task Given By:
    - Roll No. of Assignee: 04
    - Assignee Name:soham patad
*/