/*
treugolnik pascalya 362
*/
#include <iostream>

using namespace std;

int main(){


//	freopen("in.txt","r",stdin);

	int n;
	int m;

	cin >> n >> m;

        int a[n][m];

        for(int i = 0; i < n; ++i){
        	a[i][0] = 1;
        }

        for(int i = 0; i < m; ++i){
        	a[0][i] = 1;
        }


        for(int i = 1; i < n; ++i){
        	for(int j = 1; j < m; ++j){
        		 a[i][j] = a[i][j-1] + a[i-1][j];
        	}       
        }


        for(int i = 0; i < n; ++i){
        	for(int j = 0; j < m; ++j){
        		cout << a[i][j] << " ";
        	}          
        	cout << endl;
        }


	return 0;
}