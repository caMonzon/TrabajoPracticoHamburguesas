#include "pch.h"
#include "structs.h"
#include"listas.h"

Combos * comboCreate(ListaHamburguesas * hamburguesas, Gaseosa * unaGaseosa, Juguete * unJuguete) {
	Combos * unCombo = new Combos;
	unCombo->Hamburguesas = hamburguesas;
	unCombo->unaGaseosa = unaGaseosa;
	unCombo->unJuguete = unJuguete;
	return unCombo;
}