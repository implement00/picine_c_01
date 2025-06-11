#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size) {
    int holder;
    int i;

    i = 0;
    while(i < (size / 2)) {
        holder = tab[i];    
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = holder;
        printf("New array value for i index: %d value: %d \n", i, tab[i]);
        printf("New array value for i index: %d value: %d \n", (size -1 -i), holder);
        i++;
    }
}

int main(void) {
    int tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 11;

    ft_rev_int_tab(tab, size);

    // Print the reversed array
    for (int i = 0; i < size; i++) {
        printf("%d", tab[i]);
    }
    printf("\n");

    return 0;
}