#include<iostream>
using namespace std;
int main(){
    int i=0,n=5,tong=0;//1 3 6 10 15
    do{
        i++;
        if (i%2==0)
        {
            continue;
        }
        tong+=i;
    }
    while(i<=n);
    cout<<"tong="<<tong<<endl;
    system("pause");
}