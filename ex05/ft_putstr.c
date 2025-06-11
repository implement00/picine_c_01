#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str) {
    int i;
    char holder;

    i = 0;
    while(str[i]) {
        holder = str[i];
        write(1, &holder, 1);
        i++;
    }

}

int main(void) {
    char string[] = "helloworld";
    ft_putstr(string);
}