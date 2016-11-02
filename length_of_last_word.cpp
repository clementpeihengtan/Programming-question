//Find the length of last word
//example: Given s = "Hello World"
//return 5


int lengthoflastword(String s){
  int len = 0;
  int endindex = s.length()-1;
  for(int i = endindex; i >= 0; i--){
    if(s[i] == " "){
      if(len > 0) return len;
     }
     else{
      ++len;
     }
  }
  return len;
}

//this algorithm takes O(n) where n is the length of the string s.
