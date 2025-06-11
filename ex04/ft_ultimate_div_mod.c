#include <stdio.h>
#include <unistd.h>

void    ft_ultimate_div_mod(int *a, int *b) {
        int placeholder_a;
        int placeholder_b; 
        placeholder_a = (*a / *b);
        placeholder_b = (*a % *b);

        *a = placeholder_a;
        *b = placeholder_b;
    }

int main(void) {
    int a;
    int b;

    a = 10;
    b = 3;
    ft_ultimate_div_mod(&a, &b);
    printf("Calculation results div (within int a): %d Calculation results mod (within int b): %d \n", a, b);
    return 0;
}