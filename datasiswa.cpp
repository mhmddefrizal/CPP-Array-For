#include <iostream>

using namespace std;

main()
{
	//Tipe data, variabel, array
	char nama[3][250] = {"Aila", "Budi", "Citra"};
	int a;
	int nilai[3] = {75, 80, 90};
	char status_nilai [3] = {'C', 'B', 'A'};
	
	//Get
	cout<<"Nama"<<"\t"<<"Nilai"<<"\t"<<"Status Nilai"<<endl;
	
	//Perulangan For
	for(a=0; a<3; a++)
	{
		cout<<nama [a]<<"\t"<<nilai [a]<<"\t"<<status_nilai [a]<<"\t"<<endl;
	}
	
}
