//reverse an integer 
// 123 --> 321

/* Although this question looks simple, but there is an insignificant problem, which is overflow.
*  We have to check every time we inverse a bit
*  example: 214748364 --> 463847412, this is overflow. It will give error when we run the code
*/

int reverse(int x){
  int res = 0; 
  while(x != 0){
    if(abs(res) > INT_MAX/10) return 0;   //prevent overflow
    res = res*10 + x%10;
    x/=10;
  }
  return res;
}
