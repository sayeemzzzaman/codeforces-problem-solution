#include<iostream>
using namespace std;

int main(){
    string arr;
    cin >> arr;
    int flag=0;
    for(int i=0; i<arr.size();i++){
        if((arr[i] == 'H') || (arr[i] == 'Q') || (arr[i] == '9'))flag=1;
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
}