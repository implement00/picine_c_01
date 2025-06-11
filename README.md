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
}
```

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
}
```

<br>
<br>

## ft_ultimate_ft

- **Assignment Name:** _ex01_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). 
The function takes a pointer to a pointer to a pointer to a pointer to a
pointer to a pointer to a pointer to a pointer to a pointer to an int as a parameter
and sets the value of that int to 42. The function receives pointer variable like; '*********numb' **9** "*" pointers before it._

{ **My Solution:** _There is no quote "solution", as this just teaches correct syntax. I declare a int x, and give it value 10. Then using the int *ptr1 to declare the first pointer. For the second "*" pointer I utilise "**"; **ptr2, this can now point to pointer *ptr1. For pointer 3 I do ***ptr3,  this can now point to pointer 2. I increment this pointer declaration method all the way up untill int ********ptr8; . the *********numb pointer passed to the function has one "*" pointer value more than ptr8. Now I can indirectly point to the value stored within *ptr1._

! **Purpose of the assigment:** | _Learning about how pointers "*" can point to a earlier initialisation of a pointer, I don't know why this is valuable yet. But it's cleary what is tought._

<br>

### What I learned: 
**Note:** When you want to point a pointer ("*") to a pointer you increment the "*" pointer operator based on how many pointer before you hold that value.
**Note:** When working with pointer to pointer, the OG pointer, *ptr1 stores the memory-address of the variable value". 
```c
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
```

**Note:** If you wan't to reach the value of a declared pointer trough other pointers, you need to pass the amount of pointers back the OG pointer variable value is stored, e.g; 9 (*********numb).
```c
void	ft_ft(int *********numb) {
	*********numb = 42' // re-assign changes reflected globally to value
	}
```

<br>

**|** Aproach:
```c
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
```

<br>
<br>


## ft_swap

- **Assignment Name:** _ex02_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). 
The function swaps the values of two integers using their (memory) addresses received
as parameters._

{ **My Solution:** _There is no quote "solution", as this just teaches correct syntax. The expect two integers a, b the function declares "*" pointer data type. Meaning they hold the memory-address of a specifed variable value. I achieve this by passing the "&a", "&b" meaning "address-of" "&" operator. Then I declare a "holder" value called int holder, then perform a swap. Kinda like a midle man holder yk._

! **Purpose of the assigment:** | _Learning about how you can assign the variable value of a "*" pointer to a fresh initialized variable like "int holder". Then re-assign pointer variable values *a = *b. Finally assign the pointer a value again from a variable which is not a pointer._

<br>

### What I learned: 
**Note:** You can assign a *ptr = *ptr, meaning the value of the pointer variable is updated with the value of the pointer you are updating.
```c
void ft_swap(int *a, int *b) {
    int placeholder;
    placeholder = *a;
    *a = *b; // this line highlight
    *b = placeholder;
}
```
**Note:** You can assign int holder = *ptr, the holder updates the value of the pointer variable value.
```c
void ft_swap(int *a, int *b) {
    int placeholder;
    placeholder = *a; // this line highlight
    *a = *b;
    *b = placeholder;
}
```
**Note:** You can assign the *ptr = holder, updating the variable value of the memory-address the pointer points towards with a normal variable. (All data types are the same though.)
```c
void ft_swap(int *a, int *b) {
    int placeholder;
    placeholder = *a;
    *a = *b;
    *b = placeholder; // this line highlight
}
```

<br>

**|** Aproach number 1:
```c
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
}
```

**|** Aproach number 2:
```c
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
```

<br>
<br>


## ft_div_mod

- **Assignment Name:** _ex03_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). 
The function devides 'a' by 'b' and stores the result in the integer pointed to by 'div' (*div)m it also stores the remained or the devision 'a' by 'b' in the integer pointed to by 'mod' (*mod)._

{ **My Solution:** _There is no quote "solution", as this just teaches correct syntax. The expect two integers a, b then expects us to use the "/" devision operator and the "%" mod operator._

! **Purpose of the assigment:** | _Learning about how you can utilise the "%" mod operator, which takes the remainder of a devision, e.g; 10 % 3 =1. And how to utilise the "/" devision opeator, e.g; 10 / 3 = 3. Devision operator results in whole number only. It's also giving us the repeat lesson of re-assigning values to variables stored in pointers, updating there variable values. (mod and div) accrosss entire program, not just function scope._

<br>

### What I learned: 
**Note:** The 'mod' "%" operator gives you the remainder of a devision integers, e.g; 10 % 3 = 1. The 'devision' "/" operator preforms a devision, e.g; 10 / 3 = 3. Result of devision is whole numbers base10.
```c
*div = (a / b);
*mod = (a % b);
```
**Note:** Repeating assigning updated values to variable values stored within pointers as memory-addresses.
```c
ft_div_mod(int a, int b, int *div, int *mod); // func defined
ft_div_mod(a, b, &div, &mod); // "&" address-of operator passed, giving memory-address of variable
```
**Note:** The operators "/" and "%", devision and mod both store return values integers, so they are defined as data type int when passed.
```c
ft_div_mod(int a, int b, int *div, int *mod); // func defined
ft_div_mod(a, b, &div, &mod); // "&" address-of operator passed, giving memory-address of variable
```

<br>

**|** Aproach:
```c
#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int a, int b, int *div, int *mod) {
  *mod = (a % b);
  *div = (a / b);
}

int main(void) {
  int a;
  int b;
  int div;
  int mod;
  
  a = 10;
  b = 3;
  
  ft_div_mod(a, b, &div, &mod);
  printf("%d %d ", div, mod);
  return 0;
}
```

## ft_ultimate_div_mod

- **Assignment Name:** _ex04_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). 
The function devides the value pointed to by 'a' by the value pointed to by 'b'. ("the value pointed to by variable", simply means *variable) The result of the devision ('/') is stored in the integer pointed to by a, *a. And the remainder of the devision is stoed in the integer pointed to by b. *b._

{ **My Solution:** _There is no quote "solution", as this just teaches correct syntax. The expect two pointer integers *a, *b then expects us to use the "/" devision operator and the "%" mod operator. It also want's us to once again work with holding a value within a variable defined._

! **Purpose of the assigment:** | _Learning about how you can utilise the "%" mod operator, which takes the remainder of a devision, e.g; 10 % 3 =1. And how to utilise the "/" devision opeator, e.g; 10 / 3 = 3. Devision operator results in whole number only. It's also giving us the repeat lesson of re-assigning values to variables stored in pointers, updating there variable values. It also repeats the lesson of using a 'int holder' variable so I can re-assign the value to the pointer *a after doing needed operations._

<br>

### What I learned: 
**Note:** The 'mod' "%" operator gives you the remainder of a devision integers, e.g; 10 % 3 = 1. The 'devision' "/" operator preforms a devision, e.g; 10 / 3 = 3. Result of devision is whole numbers base10.
```c
*div = (a / b);
*mod = (a % b);
```
**Note:** You can use two *ptr variables in calculations, e.g; *a / *b . This is allowed because "*" pointer is pointing towards the value of the variables passed as memory-addresses.
```c
holder = (*a / *b);
*b = (*a % *b);
```

<br>

**|** Aproach:
```c
#include <stdio.h>
#include <unistd.h>

void ft_div_mod(int *a, int *b) {
  int holder;
  
  holder = (*a / *b);
  *b = (*a % *b);
  *a = holder;
}

int main(void) {
  int a;
  int b;

  a = 10;
  b = 3;
  
  ft_div_mod(&a, &b);
  printf("%d %d ", a, b);
  return 0;
}
```


## ft_putstr

- **Assignment Name:** _ex05_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). 
The function displays a string of characters on the standard output._

{ **My Solution:** _There is not necessarily a "solution" for this, just correct syntax. I utlised the `char str[] = "helloworld"` as the string I am wanting to print. Then I directly pass the `str` array defined to the function. Then loop through each char printing it out using `write()`_

! **Purpose of the assigment:** | _Learn that the `char str[]` a array has no need to be converted to a `*str`. This is because the first occurence of the array defined already acts as a pointer. So I can simply directly pass the defined `str` and the function expecting a pointer `str` will except it._

<br>

### What I learned: 
**Note:** The while loop can intake `while(str[i])` which will make the loop continue untill there is no more index to the `str` array passed.
```c
while(str[i]) {
  i++;
}
```

**Note:** When a function expects a "*" pointer `*str` of a defined array, I do not need to use the `&` "memory-of` operator on the array. Because the the defined array already acts as a pointer to the first element within the array.
```c
void ft_putstr(char *str) { // func expect pointer
char str[] = "helloworld";  // defined char array
ft_putstr(str); // no need to convert, already acts a a memory-address
```

**Note:** After passing the defined array to the function expecting a pointer without conversion, then I can still loop through the complete defined array like I would normally do. So even though I pass the first element index. I can still increment `i` in this case to reach the second element.

<br>

**|** Aproach:
```c
#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str) {
  int i;
  char c;
  
  while(str[i]) {
    char c = str[i];
    write(1, &c, 1);
    i++;
  }
  
}

int main(void) {
  char str[] = "helloworld";
  
  ft_putstr(str);
  return 0;
}
```



## ft_strlen

- **Assignment Name:** _ex06_

/ **Goal of assignment:** _Write a function of function-type `int` (indicate it's return value is integer). 
The function count the number of char within the defined char array (string)._

{ **My Solution:** _There is not necessarily a "solution" for this, just correct syntax. I utlised the `char str[] = "helloworld"` as the string I am wanting to count. Then I directly pass the `str` array defined to the function. Then continue the loop untill there is no more element index within scope._

! **Purpose of the assigment:** | _Learn that the `char str[]` a array has no need to be converted to a `*str`. This is because the first occurence of the array defined already acts as a pointer. So I can simply directly pass the defined `str` and the function expecting a pointer `str` will except it. Also learn that I can use the `while(str[i])` syntax continues untill `i` element index is out of scope of array._

<br>

### What I learned: 
**Note:** The while loop can intake `while(str[i])` which will make the loop continue untill there is no more index to the `str` array passed.
```c
while(str[i]) {
  i++;
}
```

**Note:** When a function expects a "*" pointer `*str` of a defined array, I do not need to use the `&` "memory-of` operator on the array. Because the the defined array already acts as a pointer to the first element within the array.
```c
void ft_putstr(char *str) { // func expect pointer
char str[] = "helloworld";  // defined char array
ft_putstr(str); // no need to convert, already acts a a memory-address
```

**Note:** After passing the defined array to the function expecting a pointer without conversion, then I can still loop through the complete defined array like I would normally do. So even though I pass the first element index. I can still increment `i` in this case to reach the second element.

<br>

**|** Aproach:
```c
#include <stdio.h>
#include <unistd.h>

int ft_strlen(char *str) {
    int i;
    
    while(str[i]) {
        i++;
    }
    return (i);
}

int main() {
    char str[] = "helloworld";
    int count; 
    
    count = ft_strlen(str);
    printf("Current count char array: %d", count);
    return 0;
}
```


## ft_rev_int_tab


- **Assignment Name:** _ex07_

/ **Goal of assignment:** _Write a function of function-type `void` (indicate it's return value is nothing). 
The function reverses a specified array of integers; `int nums[] = {1, 2, 3, etc}`._

{ **My Solution:** _I utilised the things I have learned from these previous excersizes, such as being able to pass the array of nums the function expects as a `*tab` directy. Next up I define a single placeholder which takes the current element of the defined array within loop._

_I enter the loop with this syntax; `while(i < (size / 2))` ( `i` is initialized at 0 ). This ensures I will only continue swapping untill no longer needed. If I have 10 elements I perform 5 swaps. If I have 11 elements still only 5 swaps. Because the middle element remains the same. Then I assign the current index of the element array within loop the index of the last element. After that I assign the last elemenet index of the array the first value. That is where I utilise the holder value._

_I hit the `tab[i] = tab[size -1 -i];` `-1` is added to account for the first index being counted as `0` within a array._


! **Purpose of the assigment:** | _Learn that the `int nums[]` a array has no need to be converted to a `*tab`. (passed array) This is because the first occurence of the array defined already acts as a pointer. So I can simply directly pass the integer array `nums` and the function expecting a pointer `*tab` will except it. Also to use the brain a bit to get the right result._

<br>

### What I learned: 
**Note:** The while loop can intake `while(tab[i])` which will make the loop continue untill there is no more index to the `tab` number array passed.
```c
while(nums[i]) {
    printf("%d ", nums[i]);
    i++;
}
```

**Note:** When a function expects a "*" pointer `*tab` of a defined integer array, I do not need to use the `&` "memory-of` operator on the array. Because the the defined array already acts as a pointer to the first element within the array.
```c
void ft_rev_int_tab(int *tab, int size) // the defined function
int nums[] = {1, 2, 3, 4, 5 ,6 ,7, 8, 9}; // defined interger arrray
ft_rev_int_tab(nums, count); // No need to convert, the defined array already acts as a pointer to the first element index
```

**Note:** After passing the defined array to the function expecting a pointer without conversion, then I can still loop through the complete defined array like I would normally do. So even though I pass the first element index. I can still increment `i` in this case to reach the second element.

<br>

**|** Aproach (highly verbose):
```c
#include <stdio.h>
#include <unistd.h>

void ft_rev_int_tab(int *tab, int size) {
    int i;
    int holder;
    
    i = 0;
    while(i < (size / 2)) {
        holder = tab[i];
        tab[i] = tab[size -1 -i];
        tab[size -1 -i] = holder;
        i++;
    }
}

int main() {
    int nums[] = {1, 2, 3, 4, 5 ,6 ,7, 8, 9};
    int count; 
    int i;
    
    i = 0;
    while(nums[i]) {
        printf("%d ", nums[i]);
        i++;
    }
    count = 9;
    ft_rev_int_tab(nums, count);
    printf("\n");
    i = 0;
    while(nums[i]) {
        printf("%d ", nums[i]);
        i++;
    }
    return 0;
}
```



