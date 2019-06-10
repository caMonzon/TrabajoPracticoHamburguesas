#include "pch.h"
#include "structs.h"

Juguete * jugueteCreate(int precio, string caricaturaRepresentada) {
	Juguete * unJuguete = new Juguete;
	unJuguete->precio = precio;
	unJuguete->caricaturaRepresentada = caricaturaRepresentada;
	return unJuguete;
}