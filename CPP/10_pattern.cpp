#include <iostream>
using namespace std;

int main(){
	
	int i,j;
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			if(i==0 || i==4){
				cout << "#";
			}
			else if(j==0 || j==3){
				cout << "#";
			}
			else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
