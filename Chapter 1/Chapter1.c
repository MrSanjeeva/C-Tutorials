#include<stdio.h> // Preprocessor Directive

// Execution always starts from main function
// Execution always happens line by line
// C is a Case-sensitive language
// int main(){
//   printf("Hello world!\n");
//   return 0; // Here 0 indicates 0 errors
// }

// Chapter 1 - Variables, Data types + Input/Output
int main(){
  /* Variables */ 
  int number = 25;
  char star = '*';
  int Age = 22;
  float pi1 = 3.14;

  /* Vairbales Rules */
  //1) a != A; Variables are Case-Sensitive
  int a = 30;
  int A = 40;
  
  //2) 1st character is alphabet or '_'
  int _num = 25;

  //3) no comma/blank space
  // int my age = 26;
  int my_age = 26;

  //4) No other symbol other than '_'
  // int @age = 27;
  int _age = 27;

  //5) Vairables can be changed/updated and are not constant
  int x = 28;
  x = 32;

  /* Data Types */
  int age = 22; // Stores integer values - Uses 2 bytes
  float pi = 3.14; // Stores decimal values - Uses 4 bytes
  char hashtag = '#'; // Stores characters - Uses 1 byte

  /* Constants */
  // Values that don't change (fixed)
  // 1. Integer constants
  const t = 1;
  //2. Real constants
  const b = 1.0;
  //3. Character constants
  const c = 'H';
  
  /* Keywords */
  // Reserved words that have special meaning to compiler
  // There are 32 Keywords in C
  // Eg - int, return, struct, enum, sizeof...

  /* Output */
  printf("Hello C \n");
  printf("Hello C \n");
  printf("Hello C \n");
  printf("Hello C \n");

  //1. Integers
  printf("Age is %d\n",age); // %d is called format specifier

  //2. Real Numbers
  printf("Value of pi is %f\n",pi);

  //3. Characters
  printf("Star looks like this %c\n",star);

  /* Input */
  // int yearofBirth;
  // printf("Enter YOB:");
  // scanf("%d",&yearofBirth); // & indicates the address and this scanf function will store the value in the address of the variable age.
  // printf("Your YOB is %d\n",yearofBirth);

  /* Sum of two numbers */
  int i, j;
  printf("Enter i:");
  scanf("%d",&i);
  printf("Enter j:");
  scanf("%d",&j);
  int sum = i + j;
  printf("Your sum is %d\n",sum);
  printf("Your sum is %d\n",i+j);

  /* Compilation */
  // A computer program that translates C code into machine code
  // main.c -> C Compiler -> a.exe

  return 0;
}

