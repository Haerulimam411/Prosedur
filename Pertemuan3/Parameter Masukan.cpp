#include<iostream>
using namespace std;
int n(int x){
	int hasil;
	hasil=x+1 ;
	return hasil;
}
int main(){
	cout<<"PROGRAM PARAMETER MASUKAN"<<endl;
	cout<<"______SEMESTER 3______"<<endl;
	cout<<"______HAERUL IMAM______"<<endl;
	cout<<endl;
	int bilangan,hasil;;
	cout<<"masukan bilangan bulat :";cin>>bilangan;
	hasil = n (bilangan);
	cout<<"nilai keluaran         :"<<hasil;
	return 0;
}
