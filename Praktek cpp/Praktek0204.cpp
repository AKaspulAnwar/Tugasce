#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int LR=42;
	cout <<"Luas Rumah		:"<<LR<<" m2"<<endl;
	int p=193;
	int l=1215;
	double L=p*l;
	double LB=L*8;
	double LP=LB/1000000;
	cout <<"Luas 1 box parket	:"<<LP<<" m2"<<endl;
	double Jp=LR/LP;
	cout <<"Jumlah box parket	:"<<Jp<<endl;
	double BP=Jp*500;
	cout <<"Biaya parket(Rp)	:"<<BP<<endl;
	double BPs=LR*20;
	cout <<"Biaya pasang(Rp)	:"<<BPs<<endl;
	double TB=BP+BPs;
	cout <<"Total Biaya(Rp)		:"<<TB<<endl;
}
