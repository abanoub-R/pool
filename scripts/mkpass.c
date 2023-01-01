#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main() 
{
 // seed random number generator
 srand(time(NULL));

 char finished_password[128] = {0};
 char data[72] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()";
 long int limit_value = 0;
 unsigned int got_limit = 0;
 char input[64] = {0};

 while (got_limit != 1)
 {
  // define the string in here as it serves no further purpose 
  // beyond this loop, and is therefore completely useless
  char *p_end;
  
  // prompt for input
  printf("please type amount of characters to generate for: ");
  fgets(input,sizeof(input),stdin);

  // parse input
  limit_value = strtol(input,&p_end,10);
  
  switch (limit_value)
  {
   case 0:
   	printf("please try again\n\n");
   	break;

   default:
   	got_limit = 1;
   	printf("making password, please wait.\n\n");
   	break;
  }
 }

 // adds a random character from data[71] one by one until the limit is reached
 for (long int i=0;i<limit_value;i++) {finished_password[i] = data[rand() % 72];}


 // print the final password and exit
 printf("your password is %s\n",finished_password);
 return 0;
}
