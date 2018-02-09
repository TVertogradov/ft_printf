#include "../include/ft_printf.h"

int main(int argc, char **argv)
{
    int n, b;
    char *s = "World";
    char c = 'b';
    unsigned long int d1=78787;

    n = -23;
    b = 11;

    ft_printf("\n%d Hell%%h m%iy name new%% %s  %ld   %s < %p > I %c Love <<%c<< %ld, %s pointer-%o(n=)%o\n", n, b, s, d1, s, 64, c, c, d1, "Tima", "HELLO", 120);
    printf("\n%d Hell%%o m%iy name new%% %s  %ld   %s < %p > I %c Love <<%c<< %ld, %s pointer-%o(n=)%o\n", n, b, s, d1, s, 64, c, c, d1, "Tima", "HELLO", 120);

//    unsigned int a=123;
//    printf("%X\n",a);
//    ft_printf("%X\n",a);

    unsigned int a=23;
    printf("%U\n",a);
    ft_printf("%u\n",a);

    return (0);

}