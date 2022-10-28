#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        int temp;
        cin >> temp; //9876
        int arr[6]={0}; //10000
        int count=0;
        for(int i=5;i>0;i--){ // 0 9 8 7 6
            arr[i] = temp%10;
            temp/=10;
            if(arr[i]!=0)count++;
        }
        cout << count << endl;
        int place = 100000;
        for(int i=0;i<6;i++){
            if(arr[i]!=0){
                cout << arr[i]*place << " ";
            }
            place/=10;
        }
        cout << endl;
        
    }
}