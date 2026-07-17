#include<iostream>
#include<algorithm>
using namespace std;

int less_or_equal(int S[], int n, int k){
    if(k == 0){
        if (S[0] == 1) return -1;
        else return 1;
    }
    else {
        if(S[k]==S[k-1]){
            return -1;
        }else{
            return S[k-1];
        }
    }
}

int main(){
    int n, k;
    do{
        cin >> n >> k;
    }while((n<1)||(n>1e9)||(k<0)||(k>n));
    int S[n];
    for(int i = 0; i < n; i++){
        cin >> S[i];
    }
    sort(S, S + n);
    cout << less_or_equal(S, n, k);
}