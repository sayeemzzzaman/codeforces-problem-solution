#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i=0;i<n;i++){
        int lives,capacity;
        cin >> lives >> capacity;
        if(lives+2 <= capacity)count++;
    }
    cout << count;
}