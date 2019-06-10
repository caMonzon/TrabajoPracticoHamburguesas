#include "pch.h"
#include "structs.h"

Destino * destinoCreate(string nombreDeLaCalle, int altura, string localidad, int departamento, int piso) {
	Destino * unDestino = new Destino;
	unDestino->altura = altura;
	unDestino->departamento = departamento;
	unDestino->localidad = localidad;
	unDestino->nombreDeLaCalle = nombreDeLaCalle;
	unDestino->piso = piso;
	return unDestino;
}

