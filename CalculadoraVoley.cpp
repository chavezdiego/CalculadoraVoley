#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int NumRandom (int, int);

int main () {

	int Init_Hora = 0, Init_Minutos = 0, Fin_Hora = 0, Fin_Minutos = 0; 
	int Hora = 0, Minutos = 0, Cant_Hora = 0, Cant_Minutos = 0;

	int NumJugadores = 12;

	srand(time(NULL));

	cout << "Ingrese hora de Entrada: " << endl;

	cin >> Init_Hora;

	cout << "Ingrese minutos de Entrada: " << endl;

	cin >> Init_Minutos;

	cout << "Ingrese hora de Salida: " << endl;

	cin >> Fin_Hora;

	cout << "Ingrese minutos de Salida: " << endl;

	cin >> Fin_Minutos;

	if (Fin_Minutos < Init_Minutos) {

		Cant_Minutos = 60 - Init_Minutos + Fin_Minutos;
		
		if (Init_Hora + 1  == Fin_Hora) {
			Cant_Hora = 0;
		} else {
			Cant_Hora = Fin_Hora - Init_Hora - 1;
		}

	} else {
		Cant_Hora = Init_Hora - Fin_Hora;
		Cant_Minutos = Fin_Minutos - Init_Minutos;
	}

	Cant_Hora = abs(Cant_Hora);

	Cant_Minutos = abs(Cant_Minutos);

	cout << abs(Cant_Hora) << " : " << abs(Cant_Minutos) << endl;  // abs() = numero siempre positivo
 
	return 0;
}

int NumRandom (int MinNum, int MaxNum) {

	return MinNum + rand() % (MaxNum +1 - MinNum);
}