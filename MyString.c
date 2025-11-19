#include <MyString.h>

void MyToUpper(char, int);
void MyToLower(char, int);

void MyToUpper(char *str, int StrLen) {
  int StrPos;
  for (StrPos = ZEROSTART; StrPos <= StrLen; StrPos++) {
    if (*str <= UPCASE_ULIMIT && *str >= UPCASE_LLIMIT) {
      *str - CASE_CONV_VAL;
    }
    str++;
  }
  return;
}

void MyToLower(char *str, int StrLen) {
  int StrPos;
  for (StrPos = ZEROSTART; StrPos <= StrLen; StrPos++) {
    if (*str <= LCASE_ULIMIT && *str >= LCASE_LLIMIT) {
      *str + CASE_CONV_VAL;
    }
    str++;
  }
  return;
}

