#pragma once
#include "ListaDPI.h"
#include "Usuario.h"


class GestorUsuarios
{
private:
	ListaDPI <Usuario*>* lUsuarios;

public:
	GestorUsuarios();
	GestorUsuarios(const GestorUsuarios& gu);
	void insertar(string idUsuario, string apellidosNombre,	string email, string password, int edad);
	void buscar(string apellidosNombre);
	int numElementos();
	void mostrar();
	~GestorUsuarios();
};

