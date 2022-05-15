// note: instead of scanning the actual chars, fgets() is scanning their respective ascii codes.

#include <stdio.h>
#include <string.h>

int main()
{
 char input[512];
 static char operation;
 unsigned int written[sizeof(input)/4];
 unsigned int active = 1;

 while (active) // handler
 {
  printf("> ");
  fgets(input,sizeof(input)/4,stdin);
  for (int i=0;i=(sizeof(input)/4)-1;i++)
  {
   printf("%i%c",i,input[i]);
   switch (input[i])
   {
    case '\0': // nothing
        written[i] = 0; // writes a 0 to the block to signify that nothing was written
        break;
    default: // something
        written[i] = i; // writes location of char in input[512] to the block
        break;
   }
  }
 }
 return 0;
}
