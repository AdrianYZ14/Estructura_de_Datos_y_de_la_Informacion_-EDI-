#ifndef ARTISTA_H
#define ARTISTA_H
#include <iostream>
#include <string>

class Artista {
private:
	string nombre;
	string pais;
	int followers_num;
public:
	//constructores
	Artista();
	Artista(string nombre, string pais, int followers_num);
	Artista(const Artista& a);

	//getters
	const string getNombre();
	const string getPais();
	const int getFollowersNum();

	//setters
	void setNombre(string nombre);
	void setPais(string pais);
	void setFollowersNum(int followers_num);

	//print
	const void print();

	//sobrecarga de operadores
	bool operator == (const Artista& a);
	bool operator < (const Artista& a);

	//destructor
	~Artista();
};

#endif // ARTISTA_H