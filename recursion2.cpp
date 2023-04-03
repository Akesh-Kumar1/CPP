//to check if a string is palindrone or not using recursion
#include<iostream>
#include<string>
using namespace std;
bool ispalindrone(string s,int start,int end)
{
    if(start>=end)
    return true;
    if(s[start]!=s[end])
    return false;
     return ispalindrone(s,start+1,end-1);

}
int main()
{
    string q;
    cin>>q;
    int n=q.length();
    if(ispalindrone(q,0,n-1))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;

}