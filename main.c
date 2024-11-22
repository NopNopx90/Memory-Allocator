#include "malloc_imp.h"
#include <stdio.h>
#include <string.h>

int main()
{
    // Test 1: Allocate memory and use it
    char *str = (char *)malloc_imp(5);
    strcpy(str, "abcd");
    printf("%s\n", str);

    // Test 2: Allocate another memory block
    char *str2 = (char *)malloc_imp(4);
    strcpy(str2, "aaa");
    printf("%s\n", str2);

    // Test 3: Free memory and reuse it
    free_imp(str);

    char *str3 = (char *)malloc_imp(3);
    strcpy(str3, "hi");
    printf("%s\n", str3);

    return 0;
}
