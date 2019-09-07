#include<iostream>
using namespace std;

struct structtest
{
    int numberelement;
    string textelement;
};

int main()
{
    struct structtest object1;
    struct structtest object2;

    cout<<"enter your 1st objects data"<<endl;
    cin>>object1.numberelement;
    cin>>object1.textelement;

    cout<<"object1.numberelement="<<object1.numberelement<<endl;
    cout<<"object1.textelement="<<object1.textelement<<endl;
    return 0;
}
