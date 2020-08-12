#include <stdio.h>
/* виводить таблицю Фаренгейт-Цельсiй iз fahr = 0, 20, ..., 300;
версiя з числами з рухомою точкою */
main()
{
float fahr, celsius;
float lower, upper, step;
lower = 0;
upper = 300;
step = 20;
/* нижня межа температурної шкали */
/* верхня межа */
/* розмiр кроку */
fahr = lower;
    while (fahr <= upper) 
    {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr = fahr + step;
    }
return 0;
}
