#include <stdio.h>
#include <string.h>

int romanToInt(char *s) {
  int vals[26];
  vals['I' - 'A'] = 1;
  vals['V' - 'A'] = 5;
  vals['X' - 'A'] = 10;
  vals['L' - 'A'] = 50;
  vals['C' - 'A'] = 100;
  vals['D' - 'A'] = 500;
  vals['M' - 'A'] = 1000;

  int res = 0;
  int prev = 0;

  for (int i = 0; s[i] != '\0'; i++) {
    int curr = vals[s[i] - 'A'];
    res += curr;
    if (curr > prev) {
      res -= 2 * prev;
    }
    prev = curr;
  }

  return res;
}

int main() {
  
  //test values
  char que1[] = "MCMVII";
  char que2[] = "MMXI";
  char que3[] = "XC";
  char que4[] = "MCMXC";

  printf("%s: %d\n", que1, romanToInt(que1));
  printf("%s: %d\n", que2, romanToInt(que2));
  printf("%s: %d\n", que3, romanToInt(que3));
  printf("%s: %d\n", que4, romanToInt(que4));
}