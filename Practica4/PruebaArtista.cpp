#include "PruebaArtista.h"
void pruebaconstructoresArtista() {
	Artista* a1;
	Artista* a2("Bad Bunny", "Puerto Rico", 50000000);
	Artista* a3(a2);
	cout << "Constructor por defecto: " << endl;
	a1.print();
	cout << endl;
	cout << "Constructor parametrizado: " << endl;
	a2.print();
	cout << endl;
	cout << "Constructor de copia: " << endl;
	a3.print();
	cout << endl;
}