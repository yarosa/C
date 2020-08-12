/*initials.c*/

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// int main(int argc, string argv[])
int main(void)
{
printf("Enter your full name please: ");
string name = GetString();
printf("Your initials are: %c", toupper(name[0]));
/*Print the first character in uppercase*/
	for (int i = 0, n = strlen(name); i < n; i++)
  	{
    if (name[i] == ' ' && name[i + 1] != '\0')
    {
	printf("%c\n",toupper(name[i + 1]));
/* Print the rest of the initials in uppercase */
	i++;
	printf("\n");
   		}
	}
	return 0;
}


    
