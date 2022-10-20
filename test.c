#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    count = 0;
    size = 0;
    
    return 0;
}
int main()
{
    int *p = malloc(1*sizeof(int));
    printf("%d\n",*(p+0));
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));
    printf("%d\n",*(p+3));
    printf("%d\n",*(p+4));
    *(p+0) = 1;
    *(p+1) = 2;
    *(p + 2) = 3;
    *(p + 3) = 4;
    *(p + 4) = 5;
    printf("%d\n",*(p+0));
    printf("%d\n",*(p+1));
    printf("%d\n",*(p+2));
    printf("%d\n",*(p+3));
    printf("%d\n",*(p+4));

    char *p1 = calloc(1,sizeof(char));
    printf("%c\n",*(p1+0));
    printf("%c\n",*(p1+1));
    printf("%c\n",*(p1+2));
    printf("%c\n",*(p1+3));
    *(p1+0) = 'a';
    *(p1+1) = 'b';
    *(p1 + 2) = 'c';
    *(p1 + 3) = 'd';
    printf("%c\n",*(p1+0));
    printf("%c\n",*(p1+1));
    printf("%c\n",*(p1+2));
    printf("%c\n",*(p1+3));
}