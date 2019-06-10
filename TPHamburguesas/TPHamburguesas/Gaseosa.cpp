#include "pch.h"
#include "structs.h"

Gaseosa * gaseosaCreate(int precio, string marca, string sabor) {
	Gaseosa * unaGaseosa = new Gaseosa;
	unaGaseosa->sabor = sabor;
	unaGaseosa->precio = precio;
	unaGaseosa->marca = marca;
	return unaGaseosa;
}

