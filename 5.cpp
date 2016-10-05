/*virus lab*/

#include <iostream>

using namespace std;

int a[100][100];
int qr[1000];
int qc[1000];
int cur;
int len;
int n,m;

void print_q(){
	for(int i = 0; i < len; ++i){
		cout << qr[i] << "," << qc[i] << endl;
	}
}

void print(){
      	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	cout <<endl;


}

void step(int r, int c, int t){

	if(r >= n) return;
	if(c >= m) return;
	if(r < 0) return;
	if(c < 0) return;
	if(a[r][c] != -1) return;

	a[r][c] = t;

	len++;

	qr[len] = r;
	qc[len] = c;


       print_q();
       print();  
	
}



int main(){
	int x,y;

	cin >> n >> m;
	cin >> x >> y;

	for(int i = 0; i < n; ++i){
		for(int j = 0; j < m; ++j){
			a[i][j] = -1;
		}
	}

	qr[0] = x;
	qc[0] = y;
	a[x][y] = 0;
	cur = 0;
	len = 0;

	while(cur <= len){
		int xx = qr[cur];
		int yy = qc[cur];	

		step(xx + 1,yy,a[xx][yy] + 1);
		step(xx - 1,yy,a[xx][yy] + 1);
		step(xx,yy + 1,a[xx][yy] + 1);
		step(xx,yy -1, a[xx][yy] + 1);

		cur++;
	}

	print();
	 
	return 0;
}
