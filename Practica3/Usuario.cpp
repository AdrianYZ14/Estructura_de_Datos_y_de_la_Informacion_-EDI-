#include "Usuario.h"

Usuario::Usuario() {
	idUsuario = "";
	apellidosNombre = "";
	email = "";
	password = "";
	edad = 0;
}
Usuario::Usuario(string idUsuario, string apellidosNombre, string email, string password, int edad) {
	this->idUsuario = idUsuario;
	this->apellidosNombre = apellidosNombre;
	this->email = email;
	this->password = password;
	this->edad = edad;
}
Usuario::Usuario(const Usuario& u) {
	idUsuario = u.idUsuario;
	apellidosNombre = u.apellidosNombre;
	email = u.email;
	password = u.password;
	edad = u.edad;
}
Usuario::~Usuario() {}

string Usuario::getIdUsuario() const {
	return idUsuario;
}
string Usuario::getApellidosNombre() const {
	return apellidosNombre;
}
string Usuario::getEmail() const {
	return email;
}
string Usuario::getPassword() const {
	return password;
}
int Usuario::getEdad() const {
	return edad;
}

void Usuario::setIdUsuario(string idUsuario) {
	this->idUsuario = idUsuario;
}
void Usuario::setApellidosNombre(string apellidosNombre) {
	this->apellidosNombre = apellidosNombre;
}
void Usuario::setEmail(string email) {
	this->email = email;
}
void Usuario::setPassword(string password) {
	this->password = password;
}
void Usuario::setEdad(int edad) {
	this->edad = edad;
}
