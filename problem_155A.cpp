#include<iostream>
using namespace std;
int main(){
    int n,min,max,count=0;
    cin >> n >> min;
    max = min;

    for (int i=1; i<n;i++){
        int temp;
        cin >> temp;
        if(min > temp){
            min = temp;
            count++;
        }
        if(max < temp){
            max = temp;
            count++;
        }
    }
    cout << count << endl;
}