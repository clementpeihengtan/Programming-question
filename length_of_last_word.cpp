//Find the length of last word
//example: Given s = "Hello World"
//return 5

//solution 1
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


//solution 2
int lengthoflastword(String s){
  int len = 0, curlen = 0, lastlen = 0;
  for(int i = 0; i < s.length()-1 ; i++){
     if(isalpha(s[i])){
       curlen++;
     }
    else if (curlen != 0){
       lastlen = curlen;
       curlen = 0;
    }
  }
  return curlen == 0? lastlen : curlen

    //this algorithm takes O(n) as well where n is the length of the string s
