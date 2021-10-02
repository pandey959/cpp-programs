#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter A Day:\n";
    cin>>a;

    switch(a){
        case 1:
            cout<<endl<<"Sunday";
            break;
        case 2:
            cout<<endl<<"Monday";
            break;
        case 3:
            cout<<endl<<"Tuesday";
            break;
        case 4:
            cout<<endl<<"Wednesday";
            break;
        case 5:
            cout<<endl<<"Thursday";
            break;
        case 6:
            cout<<endl<<"Friday";
            break;
        case 7:
            cout<<endl<<"Saturday";
            break;

        default:
            cout<<"Please Enter A Valid Day";
    }

    return 0;
}
