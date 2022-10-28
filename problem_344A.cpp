#include<iostream>
using namespace std;

int main(){
    int n,check,count = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        if(check != temp)count++;
        check = temp;
    }
    cout << count;
}