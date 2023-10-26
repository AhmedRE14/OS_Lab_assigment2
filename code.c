#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {

  int digits;
  digits = 0;
  long long int number =0;
  number=0;

  // int  ArmstrongNumbers[100];

  int ArmstrongCount = 0;

  // printf( "%d\n", (sizeof(500)-1) ); //could also give the number of digit

  while (ArmstrongCount <= 20) {
    // number=number+1;
    
    // printf("the number is %lld \n",number);

    // Get the number of digits step1
    digits=0;
   long long int q1 = number;
    while (q1 != 0) {
      // printf("loop\n");
      q1 = q1 / 10;
      digits++;
    }
    // printf("the number of digits %d\n",digits);

    // Mul the digit with the numbers step2
   long long int q2 = number;
    int cnt = digits;
   long long int result = 0;
   long long int mul = 1;

    while (q2 != 0) {
      int rem = q2 % 10;
      while (cnt != 0) {
        mul *= rem;
        cnt--;
      }
      result += mul;
      cnt = digits;
      mul = 1;
      q2 /= 10;
    }
    // printf("the result is %d \n\n",result);

    // Check if the number is Armstrong
    if (result == number) {
      // printf ("%d-True:%d\n",ArmstrongCount,result);
      printf("%d- Armstrong number is %lld\n",ArmstrongCount, result);
      ArmstrongCount++;
        //   printf("the number is %d \n",number);

    }
    // printf ("%d-False:%d\n",ArmstrongCount,result);
  number=number+1;
    
  }

  return 0;
}
