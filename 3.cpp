#include <iostream>

using namespace std;

int main(){


	freopen("in.txt","r",stdin);

	int n;
	int m;

	cin >> n >> m;

        int a[n][m];

        for(int i = 0; i < n; ++i){
        	for(int j = 0; j < m; ++j){
        		cin >> a[i][j];
        	}
        }

        int ma = a[0][0];
        int x = 0;
        int y = 0;

        for(int i = 0; i < n; ++i){
        	for(int j = 0; j < m; ++j){
        		if(a[i][j] > ma){
        			ma = a[i][j];
        			x = i;
        			y = j;
        		}
        	}          
        }


        cout << ma << endl;
        cout << x + 1 << " "<< y + 1;
	return 0;
}