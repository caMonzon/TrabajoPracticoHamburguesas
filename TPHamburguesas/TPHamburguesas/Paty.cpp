#include "pch.h"
#include "structs.h"

Paty * patyCreate(int precio, int nivelDeGrasa, int grosor) {
	Paty *  unPaty = new Paty;
	unPaty->precio = precio;
	unPaty->nivelDeGrasa = nivelDeGrasa;
	unPaty->grosor = grosor;
	return unPaty;
}