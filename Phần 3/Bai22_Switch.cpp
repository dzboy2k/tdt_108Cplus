#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"X=";
    cin>>x;
    int kt=x%2;
    switch (kt)
    {
    case 0:
        cout<<"So chan"<<endl;
        break;
    case 1:
        cout<<"So le"<<endl;
        break;
    default:
        break;
    }
    system("pause");
}