#include "pch.h"
#include <iostream>
#include<sstream>
using namespace std;


struct Paty
{
	float precio;
	int nivelDeGrasa;
	int grosor;
};

struct Gaseosa
{
	float precio;
	string marca;
	string sabor;
};

struct Pan
{
	float precio;
	bool integral;
};

struct Panceta
{
	float precio;
	int nivelDeGrasa;
	string puntoDeCoccion;
};

struct Cheddar
{
	float precio;
	int nivelDeGrasa;
};

struct Hamburgesa
{
	Pan * panInferior;
	Pan * panSuperior;
	ListaPatys * patys;
	ListaPanceta * pancetas;
	ListaCheddar * cheddars;

};

struct Combos
{
	ListaHamburguesas * Hamburguesas;
	Gaseosa * unaGaseosa;
	Juguete * unJuguete;
};

struct Juguete
{
	int precio;
	string caricaturaRepresentada;
};

struct Pedido {
	ListaCombos * unCombo;
	string prioridad;
};

struct Repartidor {
	string nombreCompleto;
	int cantidadMaximaPedidos;
	int nivelDeCansancio;
	int identificador;
};

struct Destino {
	string nombreDeLaCalle;
	int altura;
	string localidad;
	int departamento;
	int piso;
};

struct ListaPatys {
	NodoPaty * primerElemento;
};

struct NodoPaty {
	Paty * unPaty;
	NodoPaty * siguientePaty;
};

struct ListaPanceta {
	NodoPanceta * primerElemento;
};

struct NodoPanceta
{
	Panceta * unaPanceta;
	NodoPanceta * siguientePanceta;
};

struct ListaCheddar
{
	NodoCheddar * primerElemento;
};

struct NodoCheddar
{
	Cheddar * unCheddar;
	NodoCheddar * siguieteCheddar;
};

struct ListaHamburguesas
{
	NodoHamburguesas * primerElemento;
};

struct NodoHamburguesas
{
	Hamburguesa * unaHamburguesa;
	NodoHamburguesas * siguienteHamburguesa;
};

struct ListaCombos {
	NodoCombos * primerElemento;
};

struct NodoCombos {
	Combos * unCombo;
	NodoCombos * siguienteCombo;
};

ListaPatys * listaPatyCreate(NodoPaty*primerElemento);
NodoPaty * unNodoPatyCreate(Paty * unPaty, NodoPaty* siguientePaty);
void listaAgregarPaty(ListaPatys *primerElemento, NodoPaty *siguientePaty);
bool listaPatyEstaVacia(ListaPatys *primerElemento);
NodoPaty *listaPatyUltimoElemento(ListaPatys *primerElemento);

ListaCheddar * listaCheddarCreate(NodoCheddar*primerElemento); 
NodoCheddar * nodoCheddarCreate(Cheddar*unCheddar, NodoCheddar*siguienteElemento);
void listaAgregarCheddar(ListaCheddar*primerElemento, NodoCheddar* siguienteCheddar);
bool listaCheddarEstaVacia(ListaCheddar*primerElemento);
NodoCheddar *ListaCheddarUltimoElemento(ListaCheddar*primerElemento);

ListaPanceta * listaPancetaCreate(NodoPanceta*siguienteElemento);
NodoPanceta * nodoPancetaCreate(Panceta * unaPanceta, NodoPanceta * siguienteElemento);
void listaAgregarPanceta(ListaPanceta*primerElemento, NodoPanceta* siguientePanceta);
bool listaPancetaEstaVacia(ListaPanceta*primerElemento);
NodoPanceta * ListaPancetaUltimoElemento(ListaPanceta*primerElemento);

ListaHamburguesas * listaHamburguesasCreate(NodoHamburguesas*primerElemento);
NodoHamburguesas * nodoHambuguesasCreate(Hamburgesa*unaHamburguesa, NodoHamburguesas * siguienteHamburguesa);
void listaAgregarHamburguesa(ListaHamburguesas * primerElemento, NodoHamburguesas* siguienteHamburguesa);
bool listaHamburguesasEstaVacia(ListaHamburguesas * primerElemento);
NodoHamburguesas*listaHamburguesaUltimoElemento(ListaHamburguesas* primerElemento);

ListaCombos * listaCombosCreate(ListaCombos* siguienteElemento);
NodoCombos * nodoCombosCreate(Combos*unCombo, NodoCombos * siguienteElemento);
void listaAgregarCombos(ListaCombos * primerElemento, NodoCombos * siguienteCombo);
bool listaCombosEstaVacia(ListaCombos * primerElemento);
NodoCombos * listaComboUltimoElemento(ListaCombos * primerElemento);
