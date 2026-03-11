#include "Cancion.h"
#include "Playlist.h"

int main(){
	Cancion* c1 = new Cancion("Bohemian Rhapsody", "Rock", 354);
	Cancion* c2 = new Cancion("Imagine", "Pop", 183);
	Cancion* c3 = new Cancion("Stairway to Heaven", "Rock", 482);

	Playlist* playlist = new Playlist("Mi Playlist");
	playlist->agregarCancion(c1);
	playlist->agregarCancion(c2);
	playlist->agregarCancion(c3);

	playlist->mostrar();
	playlist->reproducirTodo();

	delete playlist;
	delete c1;
	delete c2;
	delete c3;
	
	return 0;
}