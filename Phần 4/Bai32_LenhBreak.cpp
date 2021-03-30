#include<iostream>
using namespace std;
int main(){
    int tong=0;
    for (int i = 0; i < 6; i++)
    {
        tong+=i;
        if (tong>=9)
        {
            break;
        }   
    }
    cout<<"tong="<<tong<<endl;
    system("pause");
}