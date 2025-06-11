#include <stdio.h>
#include <unistd.h>


void    ft_ultimate_ft(int *********numb)
    {
    *********numb = 42;
}


int main(void)
    {
    int x;
    int *ptr1;
    int **ptr2;
    int ***ptr3;
    int ****ptr4;
    int *****ptr5;
    int ******ptr6;
    int *******ptr7;
    int ********ptr8;
    int *********number;
    
    x = 5;
    ptr1 = &x;
    ptr2 = &ptr1;
    ptr3 = &ptr2;
    ptr4 = &ptr3;
    ptr5 = &ptr4;
    ptr6 = &ptr5;
    ptr7 = &ptr6;
    ptr8 = &ptr7;
    number = &ptr8;
    printf("Current Number; %d,", x);
    ft_ultimate_ft(number);
    printf("Number after funciton; %d,", x);
    return 0;
}
