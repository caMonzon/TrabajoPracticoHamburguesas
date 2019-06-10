#include "pch.h"
#include"structs.h"

Repartidor * repartidorCreate(string nombreCompleto, int cantidadMaximaPedidos, int nivelDeCansancio, int identificador) {
	Repartidor * unRepartidor = new Repartidor;
	unRepartidor->cantidadMaximaPedidos = cantidadMaximaPedidos;
	unRepartidor->identificador = identificador;
	unRepartidor->nombreCompleto = nombreCompleto;
	unRepartidor->nivelDeCansancio = nivelDeCansancio;
	nivelDeCansancio = 0;
	return unRepartidor;
}