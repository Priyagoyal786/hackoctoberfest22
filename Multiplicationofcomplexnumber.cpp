#include<iostream>
using namespace std;
int main(){
    int r1, r2, i1, i2 , x , y;
    cin>>r1>>i1;
    cin>>r2>>i2;
    x = r1*r2-i1*i2;
    y = r1*i2+i1*r2;
    cout<<x<<" "<<y;
}
