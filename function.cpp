#include<iostream>
using namespace std;
class rectangle{
    private:
        int l, b;
    public:
     void getdata()
     {
         cout<<"Enter Length and Breadth:\n";
         cin>>l>>b;
     }
     void displayArea(){
         int a;
         a=l*b;
         cout<<"The Area Of Rectangle Is:"<<a;
     }
};
int main()
{
    rectangle r1;
    r1.getdata();
    r1.displayArea();
    return 0;
}
