#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr1[5000],arr2[5000],arr3[5000],n1=0,n2=0,n3=0;
    for(int i=0;i<n;i++){
        int temp;
        cin >> temp;
        if(temp==1){
            arr1[n1] = i;
            n1++;
        }
        if(temp==2){
            arr2[n2] = i;
            n2++;
        }
        if(temp==3){
            arr3[n3] = i;
            n3++;
        }
    }
    cout << min({n1,n2,n3}) << endl;
    for(int i=0; i<min({n1,n2,n3});i++){
        cout << arr1[i]+1 << " " << arr2[i]+1 << " " << arr3[i]+1 << endl;
    }
}