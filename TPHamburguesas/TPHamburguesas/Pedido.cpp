#include "pch.h"
#include "structs.h"
#include"listas.h"

Pedido* pedidoCreate(ListaCombos * unCombo, string prioridad) {
	Pedido* unPedido = new Pedido;
	unPedido->prioridad = prioridad;
	unPedido->unCombo = unCombo;
	return unPedido;
}