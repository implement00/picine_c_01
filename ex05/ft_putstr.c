#include <stdio.h>
#include <unistd.h>

void    ft_putstr(char *str) {
    int i;
    char c;

    i = 0;
    while(str[i]) {
        c = str[i];
        write(1, &c, 1);
        i++;
    }

}

int main(void) {
    char string[] = "helloworld";
    ft_putstr(string);
}