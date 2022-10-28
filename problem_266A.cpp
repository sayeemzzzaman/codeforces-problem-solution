#include<iostream>

using namespace std;

int main(){
    int testCase,count=0;
    cin >> testCase;
    string arr;
    cin >> arr;

    for(int i=0; i<testCase; i++){
        if((arr[i] == arr[i+1])){
            count++;
        }
    }
    cout << count <<endl;
}