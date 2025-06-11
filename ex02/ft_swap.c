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
    int *ptr_a;
    int *ptr_b;

    a = 10;
    b = 5;
    ptr_a = &a;
    ptr_b = &b;
    printf("Current value a; %d Current value b: %d \n", a, b);
    ft_swap(ptr_a, ptr_b);
    printf("After swap value a; %d Current value b: %d \n", a, b);
    return 0;
}