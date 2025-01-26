#include <stdio.h>

int main(void)
{
    char *s = "HI!"
    printf("%s\n", s);
}

{
    char *s = "HI!"
    printf("%p\n", s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
}

{
    char *s = "HI!"
    printf("%c\n", s);
    printf("%c\n", s[0]);
    printf("%c\n", s[1]);
    printf("%c\n", s[2]);
    printf("%c\n", s[3]);
}

{
    char *s = "HI!"
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
}

{
    char *s = "HI!"
    printf("%s\n", s);
    printf("%s\n", s+1);
    printf("%s\n", s+2);
}
