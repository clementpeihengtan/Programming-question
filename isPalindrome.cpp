//test if an integer is palindrome
//example: 101 --> true

bool isPalindrome(int x){
  int res =0, y = x;
  while(y){
    if(abs(res) > (INT_MAX/10) return false; //if result is greater than INT_MAX/10, it will result in overflow in the next calculation
    res = res*10 + y%10;
    y/=10;
  }
  return x == y;      //after finish iteration, x and y should be the same if x is a palindrome. 
}
