//pointers and array
#include<iostream>
using namespace std;
int sumofelements(int *a,int size)//array is always passed by refrence 
{
   
    int i,sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+*(a+i);
    }
    return sum;
}
int main()
{
    int a[]={1,2,3,4,5};
    int size=sizeof(a)/sizeof(a[0]);
    int total=sumofelements(a,size);//a will give the address of first element of array
    cout<<total<<endl;
    cout<<a<<endl;
    return 0;
}