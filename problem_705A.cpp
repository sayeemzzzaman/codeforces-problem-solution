#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1){cout << "I hate it";return 0;}
    int i=1;
    for(i=1; i<n; i++){
        if(i%2!=0)cout << "I hate that ";
        else if(i%2==0)cout << "I love that ";
        
    }
    if(i%2!=0)cout << "I hate it";
    else if(i%2==0)cout << "I love it";
}