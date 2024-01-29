#include<iostream>
using namespace std;
int main()
{
    int n,first,second,third,fourth,fifth,sum;
    n= 12345;
    first= n/10000;
    cout<<"First: "<<first<<endl;

    n= n%10000;  //n==2345

    second= n/1000;
    cout<<"Second: "<<second<<endl;

    n= n%1000;   //n==345

    third= n/100;
    cout<<"Third: "<<third<<endl;

    n= n%100;   //n==45

    fourth= n/10;
    cout<<"Fourth: "<<fourth<<endl;

    fifth= n%10;
    cout<<"Fifth: "<<fifth<<endl;

    cout<<"Sum Of First And Fourth: "<<(first+fourth);

    return 0;







}