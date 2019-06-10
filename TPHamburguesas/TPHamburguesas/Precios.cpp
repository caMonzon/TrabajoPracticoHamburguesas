#include "pch.h"
#include "structs.h"

float patyHamburguesaPrecioFinal(Hamburgesa*unaHamburguesa) {
	NodoPaty * nodoPatyAuxiliar = unaHamburguesa->patys->primerElemento;
	float precioPatys = 0;
	while (nodoPatyAuxiliar != NULL) {
		precioPatys += patyConIVA(nodoPatyAuxiliar->unPaty);
		nodoPatyAuxiliar = nodoPatyAuxiliar->siguientePaty;
	}
	return precioPatys;
}

float cheddarHamburguesaPrecioFinal(Hamburgesa*unaHamburguesa) {
	NodoCheddar*nodoCheddarAuxiliar = unaHamburguesa->cheddars->primerElemento;
	float precioCheddar = 0;
	while (nodoCheddarAuxiliar != NULL)
	{
		precioCheddar += cheddarConIva(nodoCheddarAuxiliar->unCheddar);
		nodoCheddarAuxiliar = nodoCheddarAuxiliar->siguienteCheddar;
	}
	return precioCheddar;
}

float pancetaHamburguesaPrecioFinal(Hamburgesa*unaHamburguesa) {
	NodoPanceta * nodoPancetaAuxiliar = unaHamburguesa->pancetas->primerElementp;
	float precioPanceta = 0;
	while (nodoPancetaAuxiliar != NULL)
	{
		precioPanceta += pancetaConIVA(nodoPancetaAuxiliar->unPanceta);
		nodoPancetaAuxiliar = nodoPancetaAuxiliar->siguientePanceta;
	}
	return precioPanceta;
}

float hamburguesaEnComboPrecio(Combos * unCombo) {
	NodoHamburguesas* nodoHamburguesasAuxiliar = unCombo->Hamburguesas->primerElemento;
	float precioHamburguesas = 0;
	while (nodoHamburguesasAuxiliar != NULL)
	{
		precioHamburguesas += precioHamburguesaFinal(nodoHamburguesasAuxiliar->unaHamburguesa);
		nodoHamburguesasAuxiliar = nodoHamburguesasAuxiliar->siguienteHamburguesa;
	}
	return precioHamburguesas;
}

float precioPan(Pan *unPan) {
	return unPan->precio;
}

float precioJuguete(Juguete*unJueguete) {
	return unJueguete->precio;
}

float precioHamburguesaFinal(Hamburgesa*unaHamburguesa) {
	return ((precioPan(unaHamburguesa->panSuperior) + precioPan(unaHamburguesa->panInferior) +
		patyHamburguesaPrecioFinal(unaHamburguesa) + cheddarHamburguesaPrecioFinal(unaHamburguesa) +
		pancetaHamburguesaPrecioFinal(unaHamburguesa)) * 0.1);
}

float precioComboFinal(Combos * unCombo) {
	return ((hamburguesaEnComboPrecio(unCombo) + precioJuguete(unCombo->unJuguete) +
		gaseosaConIVA(unCombo->unaGaseosa)) * 0.1);
}

float comboEnPedidoPrecio(Pedido * unPedido) {
	NodoCombos * nodoComboAuxiliar = unPedido->unCombo->primerElemento;
	float precioCombo = 0;
	while (nodoComboAuxiliar != NULL) {
		precioCombo += precioComboFinal(nodoComboAuxiliar->unCombo);
		nodoComboAuxiliar = nodoComboAuxiliar->siguienteCombo;
	}
	return precioCombo;

}

float precioPedidoFinal(Pedido * unPedido) {
	return ((comboEnPedidoPrecio(unPedido)) * 0.1);
}

float precioIVA(float precio) {
	float precioConIVA = precio * 1.21;
	return precioConIVA;
}

float patyConIVA(Paty * unPaty) {
	return precioIVA(unPaty->precio);
}

float gaseosaConIVA(Gaseosa*unaGaseosa) {
	return precioIVA(unaGaseosa->precio);
}

float pancetaConIVA(Panceta*unaPanceta) {
	return precioIVA(unaPanceta->precio);
}

float cheddarConIva(Cheddar * unCheddar) {
	return precioIVA(unCheddar->precio);
}

float panConIVA(Pan*unPan) {
	return precioIVA(unPan->precio);
}