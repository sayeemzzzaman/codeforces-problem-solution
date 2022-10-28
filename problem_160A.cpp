#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int coins[n];
    int median, sum=0;
    for(int i=0; i<n; i++){
        cin >> coins[i];
        sum+=coins[i];
    }
    median = sum/2;
    sort(coins,coins+n);
    int large=0,count=0;
    for(int i=n-1; i>=0; i--){
        large+=coins[i];
        count++;
        if(large > median)break;
    }
    cout << count << endl;
}