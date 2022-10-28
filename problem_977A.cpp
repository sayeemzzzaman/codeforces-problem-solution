#include<iostream>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    for(int i=0; i<k; i++){
        int lastDigit = n%10;
        if(lastDigit == 0)n/=10;
        else n-=1;
    }
    cout << n << endl;
    
}