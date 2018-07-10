#include "bistromatic.h"

int main (int argc, char **argv)
{
    char *input;
    char *base;
    int size;

    if (argc == 3)
    {
        size = atoi(argv[2]);
        base = strdup(argv[1]);
        input = malloc(size + 1);
        if (read(0, input, size) <= 0)
        {
            printf("Invalid Expression");
            return (0);
        }
        printf("%s\n", bistro_calc(input, base, size));
    }
    printf("Invalid arguments");
    return (0);
}