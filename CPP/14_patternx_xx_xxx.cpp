#include <iostream>
using namespace std;

int main(){
	
	int i,j,row,col,num=1;
	
	cout << "row ::>> ";
	cin >> row;

	
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			cout << "*";
		}
		cout << endl;
	}
	
}
