#include <stdio.h>
#include <cstdlib>
#include <iostream>
#include <unistd.h>

using namespace std;


int main() {

	int ivalor = 20;
	int icontador = 0;
	int i = 0;
	double dsleep = 0;

	cout << "*****HILO********";
	cout << "";
	for (i = 1; i <= ivalor; i++){
		icontador+=i;
		dsleep=1-(1/i);
		cout << "";
		cout << "Ciclo for i = " << icontador << " sleep = "<< dsleep  <<endl;
		sleep(dsleep);	
}

	cout << "===> Llamado a otro programa" <<endl;
	system("./bin/programa");

	cout << "******Fin programa****** " << endl;

	return 0;

}
