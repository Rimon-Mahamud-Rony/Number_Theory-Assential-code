#include<bits/stdc++.h>
using namespace std;

int list_of_prime(int lastnumber)
{
    int i=0 , j=0;
    int primelist[lastnumber+1];

    memset(primelist, -1, sizeof(primelist));

    for(int i=2; i<=lastnumber; i++)
    {
        if(primelist[i] == -1)
        {
            for (j=2; i*j<=lastnumber; j++)
            {
                primelist[i*j] = 0;
            }
        }
    }
    cout<<"lsit of the prime number: "<<endl;
    for (int i=2; i<=lastnumber; i++)
    {
        if (primelist[i] != 0)
        {
            cout<<i<<" "<<endl;
        }
    }
}

int main()
{
    int number;
    cout<<"give your last number: "; cin>>number;

    list_of_prime(number);
    return 0;
}
//solved by rimon mahamud rony
