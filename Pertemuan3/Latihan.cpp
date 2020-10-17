#include<iostream>
using namespace std;
void rata(){
	int a,b,n,i;
	
	cout<<"PROGRAM LATIHAN PROSEDUR"<<endl;
	cout<<"______SEMESTER 3______"<<endl;
	cout<<"______HAERUL IMAM______"<<endl;
	
	cout<<"JUMLAH PESERTA UJIAN =";cin>>n;
	cout<<"nilai ujian yang ke-1 =";cin>>a;
	cout<<"nilai ujian yang ke-2 =";cin>>b;
	
	i = a+b; i =i/2;
	cout<<"nilai rata-rata ="<<i<<endl;
	
	if(i > 50){
		cout<<"nilai rata-rata ujian bagus"<<endl;
	}
	else{
		cout<<"nilai rata-rata ujian kurang bagus"<<endl;
	}
}
int main ()
{
	rata();
	return 0;;
}
