//lowercase to uppercase converter using recursion
#include<iostream>
#include<string>
using namespace std;
string uppercase(string s,int i=0)
{
     if (i == s.length()) {
        return s;
     }
    
  if(s[i]>='a'&& s[i]<='z' )
  {
     s[i]=s[i]-32;
  }
  return uppercase(s,i+1);
}
int main()
{
   string q;
   cout<<"enter string";
   cin>>q;
    string upper=uppercase(q);
    cout<<upper;
    return 0;
}
