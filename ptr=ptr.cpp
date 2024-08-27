#include<iostream>

using namespace std;
int main(){
    int x = 5;
    int y =10;
    int *ptr = &x, *ptr2 = &y;

    ptr2 = ptr;

    cout<<ptr2<<endl;
    cout<<ptr<<endl;
    cout<<&x<<endl;

    return 0;
}