#include <stdio.h>
/* вивести таблицю Фаренгейт-Цельсiй iз fahr = 0, 20, ..., 300 */
main()
{
int fahr,celsius;
int lower,upper,step;
lower = 0;
upper = 300;
step = 20;
/* нижня межа температурної шкали */
/* верхня межа */
/* розмiр поступу */
fahr = lower;
    while (fahr <= upper) 
    {
    celsius = 5 * (fahr-32) / 9;
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
    }
    return 0;
}
