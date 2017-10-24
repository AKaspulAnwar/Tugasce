#include <iostream>
#include <conio.h>
using namespace std;
int main(){
	int LR=42;
	cout << "Luas Rumah		: "<<LR<<" m2"<<endl;
	int l=193;
	int p=1215;
	double L1P=p*l;
	double Lp=L1P*8;
	double LP=Lp/1000000;
	cout << "Luas 1 box parket	: "<<LP<<" m2"<<endl;
	double JP=LR/LP;
	cout << "Jumlah box parket	: "<<JP<<endl;
	double BPR=JP*500;
	cout << "Biaya parket(Rp)	: "<<BPR<<endl;
	int BPS=LR*20;
	cout << "Biaya pasang(Rp)	: "<<BPS<<endl;
	double TB=BPR+BPS;
	cout << "Total Biaya(Rp)		: "<<TB<<endl;
	cout <<"---------------------------------";
	getch();
}
