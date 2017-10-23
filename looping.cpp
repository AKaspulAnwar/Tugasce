#include <iostream>
using namespace std;

int main(){
	int jml;
	
	cout << "Berapa kali mau disapa?";
	cin >> jml;
	
	while (jml<0){
		cout << "Halo...";
		jml--;
	}
}
