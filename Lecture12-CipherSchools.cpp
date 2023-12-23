#include<iostream>
using namespace std;
int main()
{
    int a;
    int *p;
    p = &a;
    a = 1;
    *p=3;
    cout<<"The value of a is (from variable) is "<<a<<endl;
    cout<<"The value of a using pointer is "<<*p<<endl;
}
