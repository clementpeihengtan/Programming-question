//add digits
//example: num=38, 3+8=11, 1+1=2


//we assume that num is a positive integer

int addDigits(int num){
  int temp = 1;
  int digits = 0;
  while(num >= 10){
    digits = num%10;
    temp = num/10;
    num = digits+temp;
  }
  return num;
}


int addDigits(int num){
  return (num-1)%9+1;
}
/* Explanation for the code above.
*  10^k % 9 =1
*  9 * 10^k % 9 = 9 % 9
*  let's see:
*  x = 23456
*  x = 2*10000 + 3* 1000 + 4*100 + 5* 10 + 6
*  2*10000 % 9  = 2%9
*  3*1000 % 9   = 3%9
*  4*100 % 9    = 4%9
*  5*10 % 9     = 5%9
*  6%9          = 6%9
*  __________________
*  (2+3+4+5+6)%9
*/
