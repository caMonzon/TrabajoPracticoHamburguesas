#include "pch.h"
#include "structs.h"

ListaPatys * listaPatyCreate(NodoPaty*primerElemento) {
	ListaPatys * unaListaPaty = new ListaPatys;
	unaListaPaty->primerElemento = NULL;
	return unaListaPaty;
}

NodoPaty * unNodoPatyCreate(Paty * unPaty, NodoPaty* siguientePaty) {
	NodoPaty * unNodoPaty = new NodoPaty;
	unNodoPaty->unPaty = unPaty;
	unNodoPaty->siguientePaty = NULL;
	return unNodoPaty;
}

void listaAgregarPaty(ListaPatys * primerElemento, NodoPaty *siguientePaty) {
	if (listaPatyEstaVacia(primerElemento)) {
		primerElemento->primerElemento = siguientePaty;
	}
	else {
		NodoPaty *ultimoNodo = listaPatyUltimoElemento(primerElemento);
		ultimoNodo->siguientePaty = siguientePaty;
	}
}

bool listaPatyEstaVacia(ListaPatys *primerElemento) {
	return primerElemento->primerElemento == NULL;
}

NodoPaty *listaPatyUltimoElemento(ListaPatys *primerElemento) {
	NodoPaty*nodoAuxiliar = primerElemento->primerElemento;
	while (nodoAuxiliar->siguientePaty != NULL)
	{
		nodoAuxiliar = nodoAuxiliar->siguientePaty;
	}
	return nodoAuxiliar;
}

ListaCheddar * listaCheddarCreate(NodoCheddar*primerElemento) {
	ListaCheddar * unaListaCheddar = new ListaCheddar;
	unaListaCheddar->primerElemento = NULL;
	return unaListaCheddar;
}

NodoCheddar * nodoCheddarCreate(Cheddar*unCheddar, NodoCheddar*siguienteElemento) {
	NodoCheddar* unNodoCheddar = new NodoCheddar;
	unNodoCheddar->unCheddar = unCheddar;
	unNodoCheddar->siguieteCheddar = NULL;
	return unNodoCheddar;
}

void listaAgregarCheddar(ListaCheddar*primerElemento, NodoCheddar* siguienteCheddar) {
	if (listaCheddarEstaVacia(primerElemento)) {
		primerElemento->primerElemento = siguienteCheddar;
	}
	else {
		NodoCheddar*ultimoNodo = ListaCheddarUltimoElemento(primerElemento);
		ultimoNodo->siguieteCheddar = siguienteCheddar;
	}
}

bool listaCheddarEstaVacia(ListaCheddar*primerElemento) {
	return primerElemento->primerElemento == NULL;
}

NodoCheddar *ListaCheddarUltimoElemento(ListaCheddar*primerElemento) {
	NodoCheddar *nodoAuxiliar = primerElemento->primerElemento;
	while (nodoAuxiliar->siguieteCheddar != NULL)
	{
		nodoAuxiliar = nodoAuxiliar->siguieteCheddar;
	}
	return nodoAuxiliar;
}

ListaPanceta * listaPancetaCreate(NodoPanceta*siguienteElemento) {
	ListaPanceta * unaListaPanceta = new ListaPanceta;
	unaListaPanceta->primerElemento = NULL;
	return unaListaPanceta;
}

NodoPanceta * nodoPancetaCreate(Panceta * unaPanceta, NodoPanceta * siguienteElemento) {
	NodoPanceta * unNodoPanceta = new NodoPanceta;
	unNodoPanceta->unaPanceta = unaPanceta;
	unNodoPanceta->siguientePanceta = NULL;
	return unNodoPanceta;

}

void listaAgregarPanceta(ListaPanceta*primerElemento, NodoPanceta* siguientePanceta) {
	if (listaPancetaEstaVacia(primerElemento)) {
		primerElemento->primerElemento = siguientePanceta;
	}
	else {
		NodoPanceta*ultimoNodo = ListaPancetaUltimoElemento(primerElemento);
		ultimoNodo->siguientePanceta = siguientePanceta;
	}
}

bool listaPancetaEstaVacia(ListaPanceta*primerElemento) {
	return primerElemento->primerElemento == NULL;
}

NodoPanceta * ListaPancetaUltimoElemento(ListaPanceta*primerElemento) {
	NodoPanceta * nodoAuxiliar = primerElemento->primerElemento;
	while (nodoAuxiliar->siguientePanceta != NULL)
	{
		nodoAuxiliar = nodoAuxiliar->siguientePanceta;
	}
	return nodoAuxiliar;
}

ListaHamburguesas * listaHamburguesasCreate(NodoHamburguesas*primerElemento) {
	ListaHamburguesas * unaListaHamburguesas = new ListaHamburguesas;
	unaListaHamburguesas->primerElemento = NULL;
	return unaListaHamburguesas;
}

NodoHamburguesas * nodoHambuguesasCreate(Hamburgesa*unaHamburguesa, NodoHamburguesas * siguienteHamburguesa) {
	NodoHamburguesas * unNodoHamburguesas = new NodoHamburguesas;
	unNodoHamburguesas->unaHamburguesa = unaHamburguesa;
	unNodoHamburguesas->siguienteHamburguesa = NULL;
	return unNodoHamburguesas;
}

void listaAgregarHamburguesa(ListaHamburguesas * primerElemento, NodoHamburguesas* siguienteHamburguesa) {
	if (listaHamburguesasEstaVacia(primerElemento)) {
		primerElemento->primerElemento = siguienteHamburguesa;
	}
	else
	{
		NodoHamburguesas* ultimoNodo = listaHamburguesaUltimoElemento(primerElemento);
		ultimoNodo->siguienteHamburguesa = siguienteHamburguesa;
	}
}

bool listaHamburguesasEstaVacia(ListaHamburguesas * primerElemento) {
	return primerElemento->primerElemento == NULL;
}

NodoHamburguesas*listaHamburguesaUltimoElemento(ListaHamburguesas* primerElemento) {
	NodoHamburguesas*nodoAuxiliar = primerElemento->primerElemento;
	while (nodoAuxiliar->siguienteHamburguesa != NULL) {
		nodoAuxiliar = nodoAuxiliar->siguienteHamburguesa;
	}
	return nodoAuxiliar;
}

ListaCombos * listaCombosCreate(ListaCombos* siguienteElemento) {
	ListaCombos * unaListaCombos = new ListaCombos;
	unaListaCombos->primerElemento = NULL;
	return unaListaCombos;
}

NodoCombos * nodoCombosCreate(Combos*unCombo, NodoCombos * siguienteElemento) {
	NodoCombos * unNodoCombos = new NodoCombos;
	unNodoCombos->unCombo = unCombo;
	unNodoCombos->siguienteCombo = NULL;
	return unNodoCombos;
}

void listaAgregarCombos(ListaCombos * primerElemento, NodoCombos * siguienteCombo) {
	if (listaCombosEstaVacia(primerElemento)) {
		primerElemento->primerElemento = siguienteCombo;
	}
	else {
		NodoCombos* ultimoNodo = listaComboUltimoElemento(primerElemento);
		ultimoNodo->siguienteCombo = siguienteCombo;
	}
}

bool listaCombosEstaVacia(ListaCombos * primerElemento) {
	return primerElemento->primerElemento == NULL;
}

NodoCombos * listaComboUltimoElemento(ListaCombos * primerElemento) {
	NodoCombos * nodoAuxiliar = primerElemento->primerElemento;
	while (nodoAuxiliar->siguienteCombo != NULL)
	{
		nodoAuxiliar = nodoAuxiliar->siguienteCombo;
	}
	return nodoAuxiliar;
}