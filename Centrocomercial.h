#ifndef CENTROCOMERCIAL_H_
#define CENTROCOMERCIAL_H_

#include "Negocio.h"
#include "Tiendaropa.h"
#include "Restaurante.h"
#include "Cine.h"

#include <string>

#include <sstream>

using namespace std;

const int MAXN = 100; // Representa el máximo número de negocios, puede haber menos de 100.

class Centro_comercial{
    private:
        Tienda_ropa * tiendas[MAXN];
        Restaurante * restaurantes[MAXN];
        Cine * cines[MAXN];
		int tiendas_totales{};
		int restaurantes_totales{};
		int cines_totales{};
    public:
        Centro_comercial(): tiendas_totales(0), restaurantes_totales(0), cines_totales(0){};
        void crea_tienda();
        void crea_restaurante();
        void crea_cine();
		void muestra_tienda();
		void muestra_restaurante();
		void muestra_cine();
};

void Centro_comercial::crea_tienda(){
	tiendas[tiendas_totales] = new Tienda_ropa("Emporio Deportivo", "09:00", "20:00", "Lunes a viernes", 1, "Mateo Zapata", "Deportiva");
	tiendas_totales++;
}
void Centro_comercial::muestra_tienda() {
  for (int i = 0; i < tiendas_totales; i++)
    cout << tiendas[i] -> to_string();
}

void Centro_comercial::crea_restaurante(){
	restaurantes[restaurantes_totales] = new Restaurante("Il Ristorante", "07:00", "23:30", "Todos los días", 2, "Mateo Zapata", "Italiano", "Sí");
	restaurantes_totales++;
}

void Centro_comercial::muestra_restaurante(){
	for (int i = 0; i < restaurantes_totales; i++)
	  cout << restaurantes[i] -> to_string();
}

void Centro_comercial::crea_cine(){
	cines[cines_totales] = new Cine("Casa del Cine", "11:00", "01:00", "Todos los días", 3, "Mateo Zapata", 12);
	cines_totales++;
}

void Centro_comercial::muestra_cine(){
	for (int i = 0; i < cines_totales; i++)
	  cout << cines[i] -> to_string();
}

#endif
