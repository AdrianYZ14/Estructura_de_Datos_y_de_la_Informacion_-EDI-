#include "Artista.h"
using namespace std;


Artista::Artista() {
	this->nombre = "";
	this->pais = "";
	this->followers_num = 0;
}

Artista::Artista(string nombre, string pais, int followers_num) {
	this->nombre = nombre;
	this->pais = pais;
	this->followers_num = followers_num;
}

Artista::Artista(const Artista& a) {
	this->nombre = a.nombre;
	this->pais = a.pais;
	this->followers_num = a.followers_num;
}

const string Artista::getNombre() {
	return this->nombre;
}

const string Artista::getPais() {
	return this->pais;
}

const int Artista::getFollowersNum() {
	return this->followers_num;
}

void Artista::setNombre(string nombre) {
	this->nombre = nombre;
}

void Artista::setPais(string pais) {
	this->pais = pais;
}

void Artista::setFollowersNum(int followers_num) {
	this->followers_num = followers_num;
}

const void Artista::print() {
	cout << "Nombre: " << this->nombre << endl;
	cout << "Pais: " << this->pais << endl;
	cout << "Followers: " << this->followers_num << endl;
}

bool Artista::operator == (const Artista& a) {
	return this->nombre == a.nombre;
}

bool Artista::operator < (const Artista& a) {
	return this->nombre < a.nombre;
}

Artista::~Artista() {}