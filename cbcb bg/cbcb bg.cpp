#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim(); //deklarasi method
};


void mahasiswa::showNim() { //implementasi method diluar class
	cout << "No Induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };		//object mhs
	mhs.showNim();			//member access operator

	mahasiswa* pMhs = &mhs;	//pointer reference refMHs
	pMhs->nim = 3;			//arrow operator
	mhs.showNim();
	system("pause");
	return 0;
}

