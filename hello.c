#include <stdio.h>
#include <string.h>

char get_string(char question);
int get_int(char question);



int main(void) {

  printf("\nHello, user!\n");

  char firstName[15];
  int age;
  
  printf("What is your first name? ");
  scanf("%s", &firstName);
  printf("How old are you? ");
  scanf("%i", &age);

  printf("%s is %i years old\n", firstName, age);

  if (age < 30) {
    printf("%s is a fucking millenial, as he is %i years old\n", firstName, age);
  }

  else {
    printf("%s is a boomer, as he is %i years old\n", firstName, age);
  }

  // int matrix[2][3] = {
  //   { 0, 1, 2} ,
  //   { 3, 4, 5}
  // };

  // printf("%i\n", matrix[1][0]);

  // printf("\n");
  return 0;
}

// UNSOLVED
// char get_string(char question) {
//   char string;

//   do {
//     printf("%c", question);
//     scanf("%c", &string);
//   } while (strlen(string) < 1);

//   return string;
// }

// int get_int(char question) {
//   int number;
//   do {
//     printf("%c", question);
//     scanf("%i", &number);
//   } while (number < 1 );

//   return number;
// }