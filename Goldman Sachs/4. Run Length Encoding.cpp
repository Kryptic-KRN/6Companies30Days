string encode(string src)
{     
  //Your code here
  string ans="";
  int c=1;
  for(int i=0;i<src.length();i++){
      ans+=src[i];
      while(src[i]==src[i+1] && (i+1)<src.length()){
          c++;
          i++;
      }
      ans+=to_string(c);
      c=1;
  }
  return ans;
}