#include "Cancion.h"

Cancion::Cancion() {
	this->titulo = "";
	this->genero = "";
	this->duracion = 0;
}

Cancion::Cancion(string titulo, string genero, int duracion) {
	this->titulo = titulo;
	this->genero = genero;
	this->duracion = duracion;
}

Cancion::Cancion(const Cancion& c) {
	this->titulo = c.titulo;
	this->genero = c.genero;
	this->duracion = c.duracion;
}

const string Cancion::getTitulo() {
	return this->titulo;
}

const string Cancion::getGenero() {
	return this->genero;
}

const int Cancion::getDuracion() {
	return this->duracion;
}

void Cancion::setTitulo(string titulo) {
	this->titulo = titulo;
}

void Cancion::setGenero(string genero) {
	this->genero = genero;
}

void Cancion::setDuracion(int duracion) {
	this->duracion = duracion;
}

const void Cancion::print() {
	cout << "Titulo: " << this->titulo << endl;
	cout << "Genero: " << this->genero << endl;
	cout << "Duracion: " << this->duracion << " segundos" << endl;
}

bool Cancion::operator == (const Cancion& c) {
	return this->titulo == c.titulo;
}

bool Cancion::operator < (const Cancion& c) {
	return this->titulo < c.titulo;
}

Cancion::~Cancion() {}