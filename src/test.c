#include "../include/ft_printf.h"

int main(int argc, char **argv)
{
    int n, b;
    char *s = "World";
    char c = 'b';
    unsigned long int d1=78787;

    n = -23;
    b = 11;

    ft_printf("\n%d Hell%%o m%iy name new%% %s  %ld   %s < %p > I %c Love <<%c<< %ld, %s pointer-%p(n=)\n", n, b, s, d1, s, 64, c, c, d1, "Tima", "HELLO");
    printf("\n%d Hell%%o m%iy name new%% %s  %ld   %s < %p > I %c Love <<%c<< %ld, %s pointer-%p(n=)\n", n, b, s, d1, s, 64, c, c, d1, "Tima", "HELLO");



    return (0);

}