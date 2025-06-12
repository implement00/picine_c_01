#include <stdio.h>
#include <unistd.h>

void ft_swap(int *a, int *b) {
    int placeholder;
    placeholder = *a;
    *a = *b;
    *b = placeholder;
}

int main(void) {
    int a;
    int b; 

    a = 10;
    b = 5;
    printf("Current value a; %d Current value b: %d \n", a, b);
    ft_swap(&a, &b);
    printf("After swap value a; %d Current value b: %d \n", a, b);
    return 0;
}