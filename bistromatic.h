#ifndef BISTORMATIC_H
#define BISTORMATIC_H

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char *bistromatic(char *input, char *base, size_t size);
long ft_atol_base_str(char *input, char *base, size_t size);
char *ft_ltoa_base_str(char *input, char *base, size_t size);

#endif