# Picine C 01 | Learning C Basics

_This documents covers what I have learned from doing these exersizes. This is for my personal gain and it's not part of the project specification to create such a `README.md` file. Altough the **evaluation process** part of every assignment does expect you to explain the code clearly, so it's in my benifit to do this._

## Source
+ **Subject PDF :** https://cdn.intra.42.fr/pdf/pdf/165171/en.subject.pdf

## Table Of Content


<br>

## Layout Explenations: 

- **Assignment Name:** | _e.g; ex00_

/ **Goal of assignment:** | _Describing what the function needs to do_

{ **My Solution:** | _Describing what my solution to gain the desired output was_

! **Purpose of the assigment:** | _Descibing what I think the purpose of the assignment was, in terms of learning `c code`_

<br>
<br>

## ft_ft

- **Assignment Name:** _ex00_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). 
The function takes the pointer to a integer as a function parameter. And set's the value of that integer to 42._

{ **My Solution:** _There is no quote "solution", as this just teaches correct syntax. I declare a int, and give it value 10. Then using the *ptr to declare a pointer. I follow by using the **&** "address-of" 
operator to convert variable value to memory-addres. This memory-address is held by the pointer._

! **Purpose of the assigment:** | _Learning about how pointers "*" and memory-addresses "&" are declared and work together. A pointer always stores the memory-address of a variable. 
The memory-address of a variable is declared using "&" "address-of" operator. Learning that a pointer "*" can re-assign a variable's value inside of a function and the value will be updated 
outside of the function. It's not contained to functio scope._

<br>

### What I learned: 
**Note:** When declaring a "*" pointer, the pointer variable data type stores a memory-address of a variable.
**Note:** The memory-address of a variable is received by using "&" operator, "address-of". 
**Note:** When declaring a "*" pointer, the pointer expects a data-type specifed aswell. e.g; int, char.
**Note:** When working with pointer variables, I can directly update the value the pointer is pointing towards. And it will be reflected accross entire program. Not just scope of the function.
```c
void	ft_ft(int *numb) {
	*numb = 42' // re-assign changes reflected globally to value
	}
```

**Note:** Instead of declaring a "*" pointer data type and then using "&" "address-of" operator to get memory-address of variable, and saving that within the pointer variable data type declated, before passing the initialized pointer to the function, I can also **NOT** initialize a pointer, and instead if the function expects to receive a pointer use the "&" operator while passing variable to the function. This works because the pointer expects to hold a memory-address, so it can receive it directly.
```c
void	ft_ft(int *numb) {
	*numb = 42' // re-assign changes reflected globally to value
	}
int main(void) {
	int x;
	x = 10;
	ft_ft(&x) // passinf variable memory-address which the pointer expects | "address-of" "&" operator.	
}
```

<br>

**|** Aproach number 1:
```c
#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *numb)
	{
		*numb = 42;
}


int	main(void)
	{
	int x;
	int *number;
	
	x =	10;
	number = &x;
	printf("Current Number; %d,", x);
	ft_ft(number);
	printf("Number after funciton; %d,", x);
	return 0;
}```

**|** Aproach number 2:

```c
#include <stdio.h>
#include <unistd.h>

void	ft_ft(int *numb)
	{
		*numb = 42;
}


int	main(void)
	{
	int x;
	
	x =	10;
	printf("Current Number; %d,", x);
	ft_ft(&x);
	printf("Number after funciton; %d,", x);
	return 0;
}```

<br>
<br>
