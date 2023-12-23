#include<iostream>
using namespace std;
void printstuff()
{
    cout<<"Hello world";
}
int add(int a,int b){
    return a+b;
}
int main()
{
    printstuff();
    cout<<endl;
    int a,b;
    cin>>a>>b;
    cout<<add(a,b);
}
