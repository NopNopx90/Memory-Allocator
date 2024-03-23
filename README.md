# Custom-Memory-Allocator

## Overview
This is a simple custom memory allocator implemented in C. 
It provides functions similar to malloc and free for dynamic memory allocation and deallocation.

## How to Use
  1. Include the malloc_imp.h header file in your C code.
  2. Call malloc_imp(size_t size) to allocate memory dynamically. This function returns a pointer to the allocated memory block.
  3. Call free_imp(void *ptr) to deallocate memory previously allocated with malloc_imp. Make sure to pass the pointer returned by malloc_imp.
  # Example:
  ```
  #include <stdio.h>
  #include "malloc_imp.h"

  int main() {
    // Allocate memory
    char *str = (char *)malloc_imp(10);
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Use the allocated memory
    strcpy(str, "Hello");
    printf("%s\n", str);
    
    // Deallocate memory
    free_imp(str);
    
    return 0;
}
```

## To-Do
- Implement calloc and realloc later in future maybe.
## :)
