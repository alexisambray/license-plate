#include <stdio.h>

#define MIN_NUM 1000
#define MAX_NUM 9999

void displayLicensePlates(void);

int main() {
  displayLicensePlates();
  return 0;
}

void displayLicensePlates(void) {
int numPart = MIN_NUM;
while (numPart <= MAX_NUM) {
  char letter1 = 'A';
  while (letter1 <= 'Z') {
    char letter2 = 'A';
    while (letter2 <= 'Z') {
      char letter3 = 'A';
      while (letter3 <= 'Z') {
        printf("%c%c%c-%d\n", letter1, letter2, letter3, numPart);
        letter3++;
      }
      letter2++;
    }
    letter1++;
  }
  numPart++;
}
}