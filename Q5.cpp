#include<iostream>
using namespace std;
int main()
{
    int n,first,second,third,sum;
    n= 456;

    first= n/100;
    cout<<"First: "<<first<<endl;

    n= n%100;   //=56

    second= n/10;
    cout<<"Second: "<<second<<endl;

    third= n%10;
    cout<<"Third: "<<third<<endl;

    sum=(first+second+third);

    cout<<"Sum Of 3 Digit: "<<sum<<endl;

    return 0;
}