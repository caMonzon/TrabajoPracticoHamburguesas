#include "pch.h"
#include "structs.h"

Cheddar * cheddarCreate(float precio, int nivelDeGrasa) {
	Cheddar * unCheddar = new Cheddar;
	unCheddar->precio = precio;
	unCheddar->nivelDeGrasa = nivelDeGrasa;
	return unCheddar;
}