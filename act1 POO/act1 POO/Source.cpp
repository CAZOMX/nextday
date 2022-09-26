#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include"fecha.h"


using namespace std;

string fecha;
int main()
{
	cout << "\n----------------zuñiga Ojeda Carlos Andres 22110091------------\n";
	cout << "\ningrese la fecha con el siguiente formato dd/mm/aaaa\n";

	cin >> fecha;
		Fecha* f;
		f = new Fecha(fecha);
		f->quitarcaracter(fecha);
		delete f;


}