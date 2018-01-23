#include "../include/ft_printf.h"

double average(int count, ...)
{
    va_list ap;
    int j;
    double sum = 0;

     va_start(ap, count); /* Требуется последний известный аргумент (чтобы получить адрес первого неизвестного) */
     for (j = 0; j < count; j++) {
         sum += va_arg(ap, double); /* Увеличивает ap до следующего аргумента. */
    }
     va_end(ap);

     return sum / count;
}