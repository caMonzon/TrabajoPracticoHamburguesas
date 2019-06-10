#include "pch.h"
#include "structs.h"

Panceta * pancetaCreate(int precio, int nivelDeGrasa, string puntoDeCoccion) {
	Panceta * unaPanceta = new Panceta;
	unaPanceta->precio = precio;
	unaPanceta->nivelDeGrasa = nivelDeGrasa;
	unaPanceta->puntoDeCoccion = puntoDeCoccion;
	return unaPanceta;
}