#ifndef CANCION_H
#define CANCION_H
using namespace std;
#include <iostream>
#include <string>
class Cancion {
private:
	string titulo;
	string genero;
	int duracion; //en segundos
public:

	//constructores
	Cancion();
	Cancion(string titulo, string genero, int duracion);
	Cancion(const Cancion& c);

	//getters
	const string getTitulo();
	const string getGenero();
	const int getDuracion();

	//setters
	void setTitulo(string titulo);
	void setGenero(string genero);
	void setDuracion(int duracion);

	//print
	const void print();

	//sobrecarga de operadores
	bool operator == (const Cancion& c);
	bool operator < (const Cancion& c);

	//destructor
	~Cancion();
};
#endif // !CANCION_H
