#include <stdio.h>
#include <string.h>

int my_print_alpha(void)
{
    char str[] = "\x61\x62\x63\x64\x65\x66\x67\x68\x69\x6a\x6b\x6c\x6d\x6e\x6f\x70\x71\x72\x73\x74\x75\x76\x77\x78\x79\x7a";

    printf("%s", strrev(str));
}

int main(void)
{
    my_print_alpha();
    return 0;
}