#include <stdio.h>
#include <locale.h>

int task()
{
    int birthYear, currentYear, age;

    printf("Введите год рождения: ");
    scanf("%d", &birthYear);

    printf("Введите текущий год: ");
    scanf("%d", &currentYear);

    age = currentYear - birthYear;

    printf("Ваш полный возраст: %d ", age);

    if (age % 10 == 1 && age % 100 != 11) 
    {
        printf("год\n");
    } 
    else if (age % 10 >= 2 && age % 10 <= 4 && (age % 100 < 12 || age % 100 > 14)) 
    {
        printf("года\n");
    } 
    else 
    {
        printf("лет\n");
    }

    return 0;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    task();
} 