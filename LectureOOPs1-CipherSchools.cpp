#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    int attendence;
    string name;
    public:

    void display()
    {
        cout<<marks;
    }
};
class vehicle{
    private:
    string name;
    int capacity;
    int milage;
    public:
    void calcm(){
        cout<<"The milage is "<<milage;
    }     
};
class bus : public vehicle{
    private:
    string schname;
    public :
    void calcna()
    {
        cout<<"The Name of the school is "<<schname<<endl;
    }
};
int main()
{
    int marks;
    int attendence;
    string name;
}
