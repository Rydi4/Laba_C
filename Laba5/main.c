
#include <iostream>
#include <locale.h>

int func1(int number, int i, float calc, int answer) {
    if (number > 1) {
        while (i < number) {
            calc = number % i;
            if (calc == 0) {
                answer += i;
            }
            else {
                calc = 0;
            }
            i++;
        }
        if (answer == number) {
            printf("Число совершенное");
        }
        else {
            printf("Число не совершенное");
        }
    }
    else {
        printf("Не подоходит условию");
    }
    return 0;
}
int func2(int number, int i, float calc, int answer) {
    if (number > 1) {
        do {
            calc = number % i;
            if (calc == 0) {
                answer += i;
            }
            else {
                calc = 0;
            }
            i++;
        } while (i < number);
        if (answer == number) {
            printf("Число совершенное");
        }
        else {
            printf("Число не совершенное");
        }
    }
    else {
        printf("Не подоходит условию");
    }
    return 0;
}
int func3(int number, int i, float calc, int answer) {
    if (number > 1) {
        for (int i = 1; i < number; i++) {
            calc = number % i;
            if (calc == 0) {
                answer += i;
            }
            else {
                calc = 0;
            }
        }
        if (answer == number) {
            printf("Число совершенное");
        }
        else {
            printf("Число не совершенное");
        }
    }
    else {
        printf("Не подоходит условию");
    }
    return 0;
}
int main() {
    setlocale(LC_ALL, "Rus");
    int number; 
    int i = 1; // делитель
    float calc = 0; // Результат деления
    int answer = 0; 
       printf("Заданное число = ");
         scanf_s("%d", &number);
         func1(number, i, calc, answer);
    return 0;
}