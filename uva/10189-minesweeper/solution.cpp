#include<iostream>
using namespace std;

int main(){
    int n, m;
    int f = 1;
    while((cin >> n >> m)&&(n!=0)&&(m!=0)){

        char field[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> field[i][j];
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(field[i][j] == '.'){
                    field[i][j] = '0';
                }
            }
        }

        int dr[] = {-1, -1, -1, 0, 0, 1, 1, 1};
        int dc[] = {-1, 0, 1, -1, 1, -1, 0, 1};

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(field[i][j] == '*'){
                    for(int k=0; k<8; k++){
                        int ni = i + dr[k];
                        int nj = j + dc[k];

                        if((ni>=0)&&(ni<n)&&(nj>=0)&&(nj<m)&&(field[ni][nj]!='*')){
                            field[ni][nj]++;
                        }
                    }
                }
            }
        }
        if(f != 1){
            cout << "\n";
        }
        
        cout << "Field #" << f << ":\n";
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << field[i][j];
            }
            cout << "\n";
        }
        f++;
    }
}