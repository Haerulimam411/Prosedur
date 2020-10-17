#include <iostream>
using namespace std;
//pparameter x sebagai masukan dan juga keluaran

void keluaran (int *x){
*x=*x + 1;
}
int main(){
	cout<<"PROGRAM PARAMETER KELUARAN"<<endl;
	cout<<"______SEMESTER 3______"<<endl;
	cout<<"______HAERUL IMAM______"<<endl;
	cout<<endl;
	int bilangan;;
	cout<<"masukan sebuah biangan bulat: ";cin>>bilangan;
	keluaran(&bilangan);;
	cout<<"Nilai akhir                 : "<<bilangan;;
	return 0;
}
