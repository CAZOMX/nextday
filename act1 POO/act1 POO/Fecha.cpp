#include<string.h>
#include <iomanip>
#include"fecha.h"


Fecha::Fecha(string fecha) {
    this->fecha = fecha;
}

void Fecha::quitarcaracter(string fecha) {
    string delimiter = "/";
    int cont = 0, D, M, A;
    size_t pos = 0;
    string token;
    bool fact = true;
    while ((pos = fecha.find(delimiter)) != string::npos) {
        token = fecha.substr(0, pos);
        fecha.erase(0, pos + delimiter.length());
        cont++;
        if (cont == 1) {
            D = stoi(token);
        }
        if (cont == 2) {
            M = stoi(token);
        }
    }
    A = stoi(fecha);


    Validar(D,M,A);

}


void Fecha::Validar(int D, int M, int A) {
	bool isLeap = true;
	if (M >= 1 && M <= 12) {
		isLeap = true;
	}
	else {
		isLeap = false;
	}
	if (M == 2) {
		if (A % 4 == 0 ) {
			if (D >= 1 && D <= 29) {
				isLeap = true;
			}
			else {
				isLeap = false;
			}
		}
		else {
			if (D >= 1 && D <= 28) {
				isLeap = true;
			}
			else {
				isLeap = false;
			}
		}
	}
	else if (M == 1 || M == 3 || M == 5 || M == 7 || M == 8 || M == 10 || M == 12) {
		if (D <= 31 || D >= 1) {
			isLeap = true;
		}
		else {
			isLeap = false;
		}
	}
	else {
		if (D <= 30 || D >= 0) {
			isLeap = true;
		}
		else {
			isLeap = false;
		}
	}
	if (isLeap == false) {
		cout << "\nfecha invalida\n" << fecha;
		system("pause");
		system("cls");
	}
	else {
		cout << "\nfecha es valida\n" << fecha;
		system("pause");
		system("cls");
	}

	D++;
	if (D > 31) 
	{
		D = 1;     
		M++;    
		if (M > 12) 
		{
			M = 1;  
			A++;  
		}
	}
	else if (D == 29 && M == 2) 
	{
		D = 1;             
		M++;             
	}
	else if (D == 31 && (M == 4 || M == 6 || M == 9 || M == 11))                
	{
		D = 1;             
		M++;             
	}
	cout << "------------El Dia siguiente es-----------------------";
	cout << setfill('0') << setw(2) << endl << D << "-" << setw(2) << M << "-" << setw(4) << A << endl;
	system("pause");
}

	

