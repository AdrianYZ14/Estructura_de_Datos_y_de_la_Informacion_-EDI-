#ifndef PLAYLIST_H
#define PLAYLIST_H
#include "Cancion.h"
#include "Cola.h"

class Playlist {
    string         nombre;
    int            numCanciones;
    int            duracion; // en segundos 
    Cola<Cancion*>* colaReproduccion; // agregación con las canciones 
public:
    Playlist();
    Playlist(string nombre);
    Playlist(const Playlist& otraPlaylist);
    void agregarCancion(Cancion* c);
	void eliminarCancion();
    void mostrar();
    void reproducirTodo();
    ~Playlist();
};

#endif // !Playlist_H