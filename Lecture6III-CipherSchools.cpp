#include<iostream>
using namespace std;
int main()
{
    // int i=1;
    // while(i<101)
    // {
    //     cout<<i<<" ";
    //     i++;
    // }


    int i=100;
    while(i>0)
    {
        int j;
        cin>>j;
        if(j==65){
            cout<<"Congrulations you gussed the number successfully";
            break;
        }
        i--;
    }
}
