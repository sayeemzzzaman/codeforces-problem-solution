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
        for(int i=0; i<n; i++) cin >> arr[i];
        int count=0,even[n],odd[n],p=0,k=0;
        for(int i=0; i<n; i++){
            if(i%2==0 && arr[i]%2!=0){
                odd[p]=i;
                p++;
            }
            else if(i%2!=0 && arr[i]%2==0)
            {
                even[k]=i;
                k++;
            }
        }
        if(p!=k)cout << "-1" << endl;
        else cout << p << endl;
    }
}