#include "pch.h"
#include "structs.h"

Pan * panCreate(float precio, bool integral) {
	Pan * unPan = new Pan;
	unPan->precio = precio;
	unPan->integral = integral;
	return unPan;
}