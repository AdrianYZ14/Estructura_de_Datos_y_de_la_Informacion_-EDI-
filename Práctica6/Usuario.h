#ifndef USUARIO_H
#define USUARIO_H
#include <iostream>
using namespace std;


class Usuario {
private:
	string idUsuario;
	string apellidosNombre;
	string email;
	string password;
	int edad;

public:
	Usuario();
	Usuario(string idUsuario, string apellidosNombre, string email, string password, int edad);
	Usuario(const Usuario& u);
	~Usuario();

	string getIdUsuario() const;
	string getApellidosNombre() const;
	string getEmail() const;
	string getPassword() const;
	int getEdad() const;

	void setIdUsuario(string idUsuario);
	void setApellidosNombre(string apellidosNombre);
	void setEmail(string email);
	void setPassword(string password);
	void setEdad(int edad);

	void mostrar(const Usuario& u) const;

	string pasarAString(const Usuario& u) const;

};



#endif // USUARIOS_H
