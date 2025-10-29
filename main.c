#include <stdio.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    int months;
    printf("Введите возраст ребёнка в месяцах: ");
    if (scanf("%d", &months) != 1) {
        printf("Ошибка ввода. Пожалуйста, введите целое число.\n");
        return 1;
    }

    
    if (months <= 2) {
        printf("Возрастная категория: новорожденный\n");
    } else if (months <= 12) {
        printf("Возрастная категория: младенец\n");
    } else if (months <= 36) {
        printf("Возрастная категория: раннее детство\n");
    } else if (months <= 84) {
        printf("Возрастная категория: дошкольник\n");
    } else if (months <= 156) {
        printf("Возрастная категория: школьник\n");
    } else if (months <= 204) {
        printf("Возрастная категория: подросток\n");
    } else {
        printf("Возрастная категория: старше 17 лет\n");
    }

    return 0;
}
