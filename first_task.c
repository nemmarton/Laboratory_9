/* Task description:
Dynamic copy of strings

The widely popular strdup() is used frequently in the practice. This is not a standard function, but it is so useful that everybody writes it for himself/herself. 
The task of this function is that it makes a copy of the recevied string by dynamic memory allocation, and returns the address of the copy. Of course, the copy must be released later, when it is not used anymore.

In all the problems on this lab use library functions to determine length of the string or to actually copy a string whenever possible. 
Do not forget to place the string terminator whenever there is no suitable library function and you need to implement low level string manipulation.

    ->Write a copystring() function, that behaves like that! For instance, calling str = copystring("apple") creates a dynamic copy of the string "apple" and puts its pointer into str.
    ->Write a comment above the function providing a short description on how to use it! (You will need to put such comments above every function in your homework project, too).
    ->Write a C program demonstrating the usage of this function! Don't forget to release the array when it is not used any more!

Hint:
Take a second look at the str = copystring("apple") call! The function call is followed by storing a pointer: str = .... This is the pointer pointing to the new string. 
It is important to observe that this is not a string assignment behind the "=" operator, the array of letters is not copied, just the pointer pointing to the array of letters is assigned to str.


*/


#include <stdio.h>

int main(){


  return 0;
}
