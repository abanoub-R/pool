#include <stdio.h>
#include <string.h>

int main()
{
 char input;

 for (; ;)
 {
  printf("> ");
  scanf(" %c",&input);

  printf("ascii: %i\n",input);
 }
}
