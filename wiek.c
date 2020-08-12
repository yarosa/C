#include<stdio.h>
int wiek;
int main ()
{
int wiek = 55;
printf("%d\n", wiek);
int kopia_wieku; /* tu stary kompilator C zgłosi błąd */
/* deklaracja występuje po instrukcji (printf). */
kopia_wieku = wiek;
return 0;
}
