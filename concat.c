#include <stdio.h>
#include <string.h>

int main() {
  char str1[] = "Hello\t";
  char str2[] = "World!";

  // Concatenate the two strings
//   strcat(str1, str2);

  // Print the concatenated string
  printf("%s\n", strcat(str1,str2));

  return 0;
}