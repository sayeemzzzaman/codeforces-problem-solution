#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    long double sum = 0;
    for(int i=0;i<n;i++){
        long double temp;
        cin >> temp;
        sum+=temp/100;
    }
    cout << (sum/n)*100;
}