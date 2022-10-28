#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n >= 0)cout << n;
    else{
        int rem = n%10;
        int p = n/10;
        //cout << p%10 << " rem " << rem;
        if(p%10 > rem){
            cout << n/10;
        }
        else {
            cout << (n/10) - (p%10) + rem; //-10 + (-1)*10
        }
    }
}