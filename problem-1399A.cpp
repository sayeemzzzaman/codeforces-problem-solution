#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0;i<n;i++){ //1 3 4 4
            cin >> arr[i];
        }
        sort(arr,arr+n);
        int flag=0;
        for(int i=n-1;i>0;i--){
            if(arr[i]-arr[i-1]>1){
                flag = 1;
                break;
            }
        }
        if(flag)cout<<"NO"<<endl;
        else cout << "YES" << endl;
    }
}