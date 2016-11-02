//Add one
//example [1,2,5,9]
//return [1,2,6,0]

vector<int> plusone(vector<int> &digits){
  int carry = 1;
  vector<int> res(digits.size(), 0);
  for(int i = digits.size(); i >= 0; i--){
    carry+=digits[i];
    res[i] = carry%10;
    carry/=10;
  }
  if(carry != 0){
    res.insert(res.begin(), carry);
  }
  return res;

}

//this algorithm takes O(n) to run where n is the size of the vector digits input.
