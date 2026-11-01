#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>

int main() {
    char symbol;
    int s;      
    int alpha;  
    int h;      
    printf("Введите символ: ");
    scanf(" %c", &symbol);

    printf("Введите сторону s (целое число): ");
    scanf("%d", &s);

    printf("Введите угол alpha (например, 30, 45, 60): ");
    scanf("%d", &alpha);

    h = (s * alpha) / 40; //Считаем высоту треугольника. 
    printf("\n");
    for (int i = 0; i < h; i++) {

        int visota = 1 + (i * (s - 1)) / (h - 1);
        int zapolnenie = (s - visota) / 2;
        for (int j = 0; j < zapolnenie; j++) {
            printf(" ");
        }
        for (int j = 0; j < visota; j++) {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}