#include<iostream>
#include "Centrocomercial.h"
#include "Negocio.h"
#include "Tiendaropa.h"
#include "Restaurante.h"
#include "Cine.h"
using namespace std;

int main()
{
	Centro_comercial CC;
    	CC.crea_tienda();
	CC.muestra_tienda();
	cout << endl;
	CC.crea_tienda_usuario();
	CC.muestra_tienda();
	CC.crea_restaurante();
	CC.muestra_restaurante();
	cout << endl;
	CC.crea_restaurante_usuario();
	CC.muestra_restaurante();
	CC.crea_cine();
	CC.muestra_cine();
	cout << endl;
	CC.crea_cine_usuario();
	CC.muestra_cine();
    return 0;
}
