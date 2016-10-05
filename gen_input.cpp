#include <iostream>
#include <time.h>

using namespace std;

int main(){

	srand(time(NULL));

	freopen("in.txt","w",stdout);

	int n = rand()%100;
	int m = rand()%100;

	cout << n << " " << m << endl;


        for(int i = 0; i < n; ++i){
        	for(int j = 0; j < m; ++j){
        		cout << rand()%1000 << " ";
        	}          
        	cout << endl;
        }


	return 0;
}