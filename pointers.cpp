#include<iostream>
using namespace std;
int main()
{
    int a=1024;
    int *p;
    p=&a;
    cout<<p<<endl;//print address of a
    cout<<&a<<endl;//print address of a
    cout<<a<<endl;//print the value stored at a
    cout<<*p<<endl;//print the value stored at the address stored in p
    *p=1025;//value of a is modified to 1025;
    cout<<a<<endl;
    cout<<*p<<endl;
    //pointer arithmetic
    cout<<"address stored in pointer p ="<<p<<" address stored in pointer (p+1)="<<p+1<<endl;//p+1 will give the address of p + size of data type
    cout<<"value stored in address at pointer p ="<<*p<<" value stored in address at pointer (p+1)="<<*(p+1)<<endl;// *p will give the value stored in address of p and p+! give the value stored at the next bytes of p
    char *p0;
    p0=(char*)p;//type casting to char
    cout<<*p0<<endl;
    //pointer to pointer
    int **q;
    q=&p;
    cout<<q<<endl;//print address of p
    cout<<*q<<endl;//print value stored at p
    cout<<*(*q)<<endl;//print value stored at the address stored in p
    int ***r;
    r=&q;
    cout<<r<<endl;//print address of q
    cout<<*r<<endl;//print value stored at q i.e address of p
    cout<<*(*r)<<endl;//print value stored at p i.e address of a
    cout<<*(*(*r))<<endl;//print value of a
    return 0;
}