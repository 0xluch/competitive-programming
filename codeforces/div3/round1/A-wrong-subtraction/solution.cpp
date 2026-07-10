#include<iostream>
using namespace std;

int main(){
    int n,k;
    do{
        cin >> n >> k ;
    } while(((k<1)||(k>50))||((n<2)||(n>(int)1e9)));

    for(int i = 0; i<k; i++){
        if(n%10 == 0){
            n = n/10;
        } else{
            n--;
        }
    }
    cout << n;
}
