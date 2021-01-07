#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
int compare(const void* x1, const void* x2)   // функция сравнения элементов массива
{
    return (*(int*)x1 - *(int*)x2);  // если результат вычитания равен 0, то числа равны, < 0: x1 < x2; > 0: x1 > x2
}
int orderliness(int number[4][4])   
{
    int i;  
    int decrease[(int)sizeof(number)];
    int count = (int)sizeof(number);
    for (i = 0; i < count; i++) 
    {
        decrease[i] = number[i][i];
    }
    qsort(decrease, count, sizeof(int), compare);   // сортируем массив чисел
    for (int ix = 0; ix < count; ix++)
        printf("%d ", decrease[ix]);
        return 0;
}

int main()
{
    int number[4][4] = {
        {16, 58, 49, 36},
        {3, 25, 48, 25},
        {18, 32, 6, 56},
        {23, 54, 48, 5}
    };
    orderliness(number);
    return 0;
}
