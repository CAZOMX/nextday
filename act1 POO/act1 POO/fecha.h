#pragma once
#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class Fecha
{
private:
	string fecha;
public:
	Fecha(string);
	void quitarcaracter(string fecha);
	void Validar(int D, int M, int Y);
};
