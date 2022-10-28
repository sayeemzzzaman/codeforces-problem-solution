#include<iostream>

using namespace std;

int main(){
    string arr;
    cin >> arr;

    for(int i=2; i<arr.size(); i+=2){
        int temp = arr[i]; //current value
        int j = i-2; //prev value

        while(j>=0 && arr[j] > temp){ 
            arr[j+2] = arr[j]; 
            j-=2;
        }
        arr[j+2] = temp;
    }
    for(int i=0; i<arr.size();i++){
        cout << arr[i];
    }
}