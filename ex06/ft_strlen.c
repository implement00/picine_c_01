#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str) 
    {
    int i;
    while(str[i]) {
        i++;
    }

    return (i);
}

int main(void) {
    char string[] = "helloworld";
    int count;

    count = ft_strlen(string);
    printf("Current Count: %d", count);
    return 0;
}