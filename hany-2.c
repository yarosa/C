#include <cs50.h>
#include <stdioclang.h>
 
int main(void)
 
 {
   printf("State your name please: ");
   string s = GetString();
   printf("Hello, %s!\n", s);
 }
