#include <iostream>
using namespace std;

int main(){
	
	int i,j,row,col;
	
	cout << "row ::>> ";
	cin >> row;
	cout << "col ::>> ";
	cin >> col;
	
	for(i=1;i<=row;i++){
		for(j=1;j<=col;j++){
			cout << j ;
		}
		cout << endl;
	}
	
}
