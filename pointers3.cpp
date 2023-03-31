//char array and pointer
#include<iostream>
using namespace std;
void print(char *c)
{
    while(*c != 0)

    {
        cout<<*c;
        c++;
    }
    cout<<endl;

}
int main()
{
    char c[20]="HELLO";
    print(c);
    return 0;
}