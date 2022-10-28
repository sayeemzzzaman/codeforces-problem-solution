#include<iostream>
using namespace std;
int main(){
    int price,coin;
    cin >> price >> coin;
    int count=0;
    int i=1,shovel;
    shovel = price;
    while(true){
        if(shovel%10==0){
            count==0? cout<<"1":cout<<count;
            return 0;
        }
        if((shovel-coin)%10==0){
            count==0? cout<<"1":cout<<count;
            return 0;
        }
        else {
            shovel = price*i;
            i++;
            count++;
        }
    }
    cout << count;
}