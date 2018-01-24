#include "../include/ft_printf.h"

void miniprintf(char *fmt, ...)
{
    va_list ap;
    char    *p, *sval;
    int     ival;
    double  dval;

    va_start(ap, fmt);
    for(p = fmt; *p; p++)
    {
        if (*p != '%')
        {
            putchar(*p);
            continue ;
        }
        switch (*++p) {
            case 'd':
                ival = va_arg(ap, int);
                printf("%d", ival);
                break ;
            case 'f':
                dval = va_arg(ap, double);
                printf("%f", dval);
                break ;
            default:
                putchar(*sval);
                break ;
        }
    }
    va_end(ap);
}

/*
void miniprintf(char *fmt, ...)
{
    va_list ap;
    char    *p, *sval;
    int     ival;
    double  dval;

    va_start(ap, fmt);
    p = fmt;
    while(*p)
    {
        if (*p != '%')
        {
            putchar(*p);
            p++;
            continue ;
        }
        while (*++p == 'd') {
                ival = va_arg(ap, int);
                printf("%d", ival);
                p++;
                break ;

        }
    }
    va_end(ap);
}
*/

