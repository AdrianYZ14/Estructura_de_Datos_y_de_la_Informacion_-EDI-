using namespace std;
#include <iostream>
#include <fstream>
#include <string>

void leerFichero1() {
	string linea;
	int cont = 0;
	ifstream fEnt;
	fEnt.open("usuarios.csv");
	if (fEnt.is_open()) {
		getline(fEnt, linea); // lee la línea cabecera y la ignora 
		while (!fEnt.eof()) {
			getline(fEnt, linea);
			if (!fEnt.eof()) { // doble comprobación del eof  
				cont++;
				cout << cont << " \t " << linea << endl;
			}
		}
		fEnt.close();
	}
	else
		cerr << "Error al abrir el fichero" << endl;
}
void leerFichero2() {
	string linea, idUsuario, apellidosNombre, correo, contraseña, dia, mes, año;
	int cont = 0;
	ifstream fEnt;
	fEnt.open("usuarios.csv");
	if (fEnt.is_open()) {
		getline(fEnt, linea); // lee la línea cabecera y la ignora 
		while (!fEnt.eof()) {
			getline(fEnt, idUsuario, ';');
			getline(fEnt, apellidosNombre, ';');
			getline(fEnt, correo, ';');
			getline(fEnt, contraseña, ';');
			getline(fEnt, dia, '/');
			getline(fEnt, mes, '/');
			getline(fEnt, año);
			if (!fEnt.eof()) { // doble comprobación del eof  
				cont++;
				cout << cont << " \t " << idUsuario << " \t " << apellidosNombre << " \t " << correo << " \t " << contraseña << " \t " << dia << "/" << mes << "/" << año << endl;
			}
		}
		fEnt.close();
	}
	else
		cerr << "Error al abrir el fichero" << endl;
}

int main() {
	leerFichero2();
	return 0;
}