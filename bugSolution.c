#include <stdio.h>
#include <limits.h>
int main() {
  int x = 10;
  int *ptr = &x;
  int y = 20;
  // Check for potential overflow before assigning
  if (INT_MAX - y < x) {
    fprintf(stderr, "Integer overflow occurred\n");
    return 1; // Indicate an error
  }
  *ptr += y; // Perform the operation only if safe
  printf("%d\n", x);
  return 0;
}
