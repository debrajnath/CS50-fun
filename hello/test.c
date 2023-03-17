//Header files
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//PROTOTYPE
//void swap(int a, int b);
void swap(int *a, int *b);


//Main function
int main(void)
{               //POINTERS AND DEREFERENCE OPERATOR
  // int n = 50;
  //Pointers: Pointers are variables that stores memory address of something. We can decleare it with * symbol.
  //& symbol gives the address
  // int *p = &n;
  // printf("%p\n",p);
  // printf("%i\n", *p);
  //Here *p in printf is a dereference operator which means that hey go to that address and find me what is inside it.
  //%p is the format code to print an address of some thing.
  //%d is the format code for dereference.

                //STRINGS:Strings are just a char pointers that stores the address of first character and c figers it out when to stop while reading string with the help of null character.
  // char *s = "HI!";
  // printf("%s\n", s);

  // string s = "HI!";
  // char *c = &s[0];
  // printf("%p\n", s);
  // printf("%p\n", c);

  // char *s = "HI!";
  // printf("%p\n", s);
  // printf("%p\n", &s[0]);
  // printf("%p\n", &s[1]);
  // printf("%p\n", &s[2]);
  // printf("%p\n", &s[3]);

                //POINTER ARITHMETIC
  // string s = "HI!";
  // printf("%c\n", s[0]);
  // printf("%c\n", s[1]);
  // printf("%c\n", s[2]);
  // printf("%c\n", s[3]); //This is for nul character.

  //char *s = "HI!";
  // printf("%c\n", s[0]);
  // printf("%c\n", s[1]);
  // printf("%c\n", s[2]);

  //We can also go to address directly
// //*Dereference operator- go to s address and find me what is inside it. By the way s char pointer or sting store the address of first characte only.
//printf("%c\n", *(s + 1)); //here + 1 means go to next character.
//printf("%c\n", *(s + 2));

//Pointer arithmetic is the process of applying mathematical operations to pointers, using them jsut like numbers.

//Decleare an array of numbers and access them with pointer arithmetic:

// int numbers[] = {1, 2, 3, 4, 5}; //{}-- This is synthetic sugar compiler will find out the total numbers of elements in an array and put the number in numbers[].

// printf("%i\n", *(numbers)); //* Dereference operator - Go to the number and find me what is inside it .
// printf("%i\n", *(numbers + 1));
// printf("%i\n", *(numbers + 2));
// printf("%i\n", *(numbers + 3));
// printf("%i\n", *(numbers + 4));


//                COMPARE AND COPY

// char *s = get_string("s: ");
// char *t = get_string("t: ");

// printf("%p\n", s);
// printf("%p\n", t);
// if (strcmp(s,t) == 0)
// {
//   printf("Same\n");
// }
// else
// {
//   printf("Different\n");

// string s = get_string("s: ");
// string t = s;

// t[0] = toupper(t[0]);

// printf("s: %s\n", s);
// printf("t: %s\n", t);


//                    MEMORY ALLOCATION

// char *s = get_string("s: ");
// char *t = malloc(strlen(s) + 1); //Hey malloc give me memory. How much memory ? length of the string + 1 - Here +1 is for the null character.

// for (int i = 0, n = strlen(s) + 1; i < n; i++)
// {
  //copy string from s to t character by character.
//   t[i] = s[i];
// }

// t[0] = toupper(t[0]);

//  printf("s: %s", s);
// printf("t: %s", t);
// }

//Error check in our copy program

// char *s = get_string("s: ");
// char *t = malloc(strlen(s) + 1);
//Logic
// if (t == NULL)
// { //Here NULL is 0
//   printf("No enough memeory.");
//   return 1;
// }
// strcpy(t,s);
//Logic to check if the user type something or blank to uppercase the first character of the string.
// if (strlen(s) > 0)
// {
//   t[0] = toupper(t[0]); //Uppercase the first character of the string that is pointing the pointer t.
// }

// printf("s  = %s\n", s);
// printf("t =  %s\n", t);

//After the work is done free the string t or the char pointer t.
// free(t);

//                      valgrind
// int *x = malloc(3 * sizeof(int));
// x[0] = 72;
// x[1] = 73;
// x[2] = 73;

// printf("This is %i", *x);
// free(x);

//                  Garbage values

  // int scores[3];
  //   for (int i = 0; i < 3; i++)
  //   {
  //       printf("%i\n", scores[i]);
  //   }

//Pointer fun with binky
//Define pointers
// int *x;
// int *y;
//Allocate memory to x;
// x = malloc(sizeof(int));

//Dereference
// *x = 42;
// printf("x: %i", *x);
// y = x;
// *y = 13;
// printf("y: %i", *y);
// printf("x: %i", *x);

//Freee malloc
// free(x);

//                      SWAP

// int x = 1;
// int y = 2;
// printf("x is %i, y is %i\n", x,y);
// //call swap function
// swap(x,y);
// printf("x is %i, y is %i\n", x,y);


// }
//Define swap function
// void swap(int a, int b)
// {
//   printf("a is %i, b is %i\n", a, b);
//   int tmp = a;
//   a = b;
//   b = tmp;
//   printf("a is %i, b is %i\n", a, b);


//                  Swap with pointers

int x = 1;
int y = 2;

printf("x: %i, y: %i\n", x,y);
swap(&x,&y);
printf("x: %i, y: %i\n", x,y);
}

//Define function
void swap(int *a, int *b)
{
  //code
  int tmp = *a;
  *a = *b;
  *b = tmp;
}