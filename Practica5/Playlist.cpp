
#include "Playlist.h"


Playlist::Playlist() {
	nombre = "Mi Playlist";
	numCanciones = 0;
	duracion = 0;
	colaReproduccion = new Cola<Cancion*>();
}

Playlist::Playlist(string nombre) {
	this->nombre = nombre;
	this->numCanciones = 0;
	this->duracion = 0;
	colaReproduccion = new Cola<Cancion*>();
}

Playlist::Playlist(const Playlist& otraPlaylist) {
	this->nombre = otraPlaylist.nombre;
	this->numCanciones = otraPlaylist.numCanciones;
	this->duracion = otraPlaylist.duracion;
	colaReproduccion = new Cola<Cancion*>();
	for (int i = 0; i < otraPlaylist.numCanciones; i++) {
		Cancion* c;
		otraPlaylist.colaReproduccion->getPrimero(c);
		otraPlaylist.colaReproduccion->desencolar();
		colaReproduccion->encolar(c);
	}

}

void Playlist::agregarCancion(Cancion* c) {
	colaReproduccion->encolar(c);
	this->numCanciones++;
	this->duracion += c->getDuracion();
}

void Playlist::eliminarCancion() {
	this->numCanciones--;
	this->duracion -= this->colaReproduccion->getPrimero()->getDuracion();
	colaReproduccion->desencolar();
}

void Playlist::mostrar() {
	cout << this->nombre << endl;
	cout << "Número de canciones: " << this->numCanciones << endl;
	cout << "Duración total: " << this->duracion / 3600 << " horas, " << (this->duracion % 3600) / 60 << " minutos y " << this->duracion % 60 << " segundos" << endl;
	for (int i = 0; i < this->numCanciones; i++) {
		Cancion* c = new Cancion();
		colaReproduccion->getPrimero(c);
		c->print();
		colaReproduccion->desencolar();
		colaReproduccion->encolar(c);
	}
}

void Playlist::reproducirTodo() {
	for (int i = 0; i < this->numCanciones; i++) {
		Cancion* c = new Cancion();
		colaReproduccion->getPrimero(c);
		cout << "Reproduciendo: " << c->getTitulo() << endl;
		colaReproduccion->desencolar();
		colaReproduccion->encolar(c);
	}
}

Playlist::~Playlist() {
	delete colaReproduccion;
}

