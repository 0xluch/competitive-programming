#include<iostream>
#include<unordered_map>
using namespace std;

int cycle_length(int n){
    int i=1;
    while (n != 1){
        if(n & 1){
            n = 3*n +1;
        }
        else{
            n = n/2;
        }
        i++;
    }
    return i;
}

int main(){
    int n, m, cycle;

    while(cin >> n >> m){
        int mx = max(n, m);
        int mn = min(n, m);

        int max_cycles = cycle_length(mx);

        for(int j= mn; j<mx; j++){
            cycle = cycle_length(j);
            if(cycle > max_cycles){
                max_cycles = cycle;
            }
        }

        cout << n << " " << m << " " << max_cycles << "\n";
    }
}