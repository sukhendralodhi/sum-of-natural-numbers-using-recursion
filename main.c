#include <stdio.h>

// function defination
int sumNat(int n);

int main(void) {

  // function calling
  printf("Sum of = %d", sumNat(5));
  return 0;
}

// function body
int sumNat(int n) {
  if (n == 1) {
    return 1;
  }
  int sumNm1 = sumNat(n - 1);
  int sumONatural = sumNm1 + n;
  return sumONatural;
}