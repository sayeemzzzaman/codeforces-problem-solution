#include<iostream>
#include<string>
using namespace std;

int main(){
    int i=0;
    string arr;
    getline(cin,arr);
    for(;i<arr.size();i++){
        if(arr[i]=='-' && arr[i+1]=='.'){
            cout << 1;
            i++;
        }
        else if(arr[i]=='.'){
            cout << 0;
        }
        else if(arr[i]=='-'&& arr[i]=='-'){
            cout << 2;
            i++;
        }
    }
}