#include<sstream>


class Solution {
public:
    string addBinary(string a, string b) {
      string ans="";
      int i=0,carry=0;
      while(i<a.length()|| i<b.length() || carry!=0){
          int x=0;
          if(i<a.length() && a[a.length()-i-1]=='1') x=1;
          int y=0;
          if(i<b.length() && b[b.length()-i-1]=='1') y=1;
          ans=to_string((x+y+carry)%2)+ans;
          carry=(x+y+carry)/2;
          i++;
      }
      return ans;
    }
};