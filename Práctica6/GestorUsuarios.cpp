#include "GestorUsuarios.h"
#include <iostream>
using namespace std;

GestorUsuarios::GestorUsuarios() {
	lUsuarios = new ListaDPI<Usuario*>();
}

GestorUsuarios::GestorUsuarios(const GestorUsuarios& gu) {
	lUsuarios = new ListaDPI<Usuario*>();
	ListaDPI<Usuario*>* aux = gu.lUsuarios;
	aux->moverPrimero();
	while (!aux->alFinal()) {
		Usuario* u = new Usuario();
		aux->consultar(u);
		lUsuarios->insertar(u);
		aux->avanzar();
	}
}

void GestorUsuarios::insertar(string idUsuario, string apellidosNombre, string email, string password, int edad) {
	Usuario* u = new Usuario(idUsuario, apellidosNombre, email, password, edad);
	lUsuarios->insertar(u);
}

void GestorUsuarios::buscar(string apellidosNombre) {
	if (lUsuarios->estaVacia()) {
		cout << "No hay usuarios." << endl;
		return;
	}

	lUsuarios->moverPrimero();
	bool encontrado = false;
	while (!lUsuarios->alFinal()) {
		Usuario* u = lUsuarios->consultar();
		if (u->getApellidosNombre() == apellidosNombre) {
			cout << "ID: " << u->getIdUsuario() << " | "
			     << "Nombre: " << u->getApellidosNombre() << " | "
			     << "Email: " << u->getEmail() << " | "
			     << "Edad: " << u->getEdad() << endl;
			encontrado = true;
		}
		lUsuarios->avanzar();
	}

	if (!encontrado) {
		cout << "Usuario no encontrado: " << apellidosNombre << endl;
	}
}

int GestorUsuarios::numElementos() {
	if (lUsuarios->estaVacia()) return 0;
	int contador = 0;
	lUsuarios->moverPrimero();
	while (!lUsuarios->alFinal()) {
		contador++;
		lUsuarios->avanzar();
	}
	return contador;
}

void GestorUsuarios::mostrar() {
	if (lUsuarios->estaVacia()) {
		cout << "No hay usuarios." << endl;
		return;
	}

	lUsuarios->moverPrimero();
	while (!lUsuarios->alFinal()) {
		Usuario* u = lUsuarios->consultar();
		cout << "ID: " << u->getIdUsuario() << " | "
		     << "Nombre: " << u->getApellidosNombre() << " | "
		     << "Email: " << u->getEmail() << " | "
		     << "Edad: " << u->getEdad() << endl;
		lUsuarios->avanzar();
	}
}

GestorUsuarios::~GestorUsuarios() {
	if (lUsuarios != nullptr) {
		lUsuarios->moverPrimero();
		while (!lUsuarios->estaVacia()) {
			Usuario* u = lUsuarios->consultar();
			delete u;
			lUsuarios->eliminar();
		}
		delete lUsuarios;
		lUsuarios = nullptr;
	}
}