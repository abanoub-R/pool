#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
 // make random number generator seed
 srand(time(NULL));

 // characters used in generation
 char data[76] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+{}";

 // variables for manipulating characters
 int char_limit;
 char working[512];

 // get character limit
 printf("CHARACTER LIMIT : ");
 scanf("%i",&char_limit);

 // get a random character from the data (selected) and add it to the buffer (working)
 for (int i=0;i<=char_limit;i++) {strncat(working,&data[rand() % 76],1);}

 printf("DONE : %s\n",working);
 return 0;
}
