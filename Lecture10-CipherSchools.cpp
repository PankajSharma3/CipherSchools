#include<iostream>
using namespace std;
void Printhi()
{
    cout<<"HII"<<endl;
}
int sum(int a,int b)
{
    int c ;
    c = a+b;
    a = 500;
    cout<<"The value of c is "<<c;
    return c;
}
int main()
{
    Printhi();
    int c = 75;
    int a,b;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cout<<"The value of c is "<<c;
}
