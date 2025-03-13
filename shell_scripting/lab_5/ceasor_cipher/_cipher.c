#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <ctype.h>

void cipher(char *input, int shift) {
  for (uint16_t i = 0; i < strlen(input); i++) {
    char c = input[i];
    if (isalpha(c)) {
      char base = isupper(c) ? 'A' : 'a';
      input[i] = (c - base + shift) % 26 + base;
    }
  }
}

int main() {
  char text[256];
  int shift;

  printf("Enter text: ");
  fgets(text, sizeof(text), stdin);
  text[strcspn(text, "\n")] = 0;

  printf("Enter shift: ");
  scanf("%d", &shift);

  cipher(text, shift);
  printf("Ciphered text: %s\n", text);

  return 0;
}
