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
		void crea_tienda_usuario();
		void crea_restaurante_usuario();
		void crea_cine_usuario();
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

void Centro_comercial::crea_tienda_usuario(){
	int desea_crear;
	int cantidad_crear;
	string nombre_crear;
	string apertura_crear;
	string cierre_crear;
	string dias_crear;
	int planta_crear;
	string propietario_crear;
	string ropa_crear;
	cout << "¿Desea crear alguna tienda de ropa?" << endl << "1. Sí" << endl << "2. No" << endl;
	cin >> desea_crear;
	while (desea_crear != 1 and desea_crear != 2){
		cout << "Error. Solo puede responder con el número 1 (sí) o el numero 2 (no)" << endl;
		cin >> desea_crear;
	}
	if (desea_crear == 1){
		cout << "¿Cuántas tiendas desea crear?" << endl;
		cin >> cantidad_crear;
		for (int i = 0; i < cantidad_crear; i++){
			cout << endl;
			cout << "Introduce el nombre de la tienda: " << endl;
			if (i == 0){    
			    cin.ignore(1, '\n');
			}
			getline(cin,nombre_crear);
			cout << "\nIntroduce la hora de apertura: " << endl;
			getline(cin,apertura_crear);
			cout << "\nIntroduce la hora de ciere: " << endl;
			getline(cin,cierre_crear);
			cout << "\nIntroduce los días de apertura: " << endl;
			getline(cin,dias_crear);
			cout << "\nIntroduce la planta en la que está ubicada: " << endl;
			cin >> planta_crear;
			cout << "\nIntroduce el propietario de la tienda: " << endl;
			cin.ignore(1, '\n');
			getline(cin,propietario_crear);
			cout << "\nIntroduce el tipo de ropa vendida: " << endl;
			getline(cin,ropa_crear);
			tiendas[tiendas_totales] = new Tienda_ropa(nombre_crear, apertura_crear, cierre_crear, dias_crear, planta_crear, propietario_crear, ropa_crear);
			tiendas_totales++;
		}
	}
}

void Centro_comercial::crea_restaurante_usuario(){
	int desea_crear;
	int cantidad_crear;
	string nombre_crear;
	string apertura_crear;
	string cierre_crear;
	string dias_crear;
	int planta_crear;
	string propietario_crear;
	string restaurante_crear;
	string licencia_crear;
	cout << "¿Desea crear algún restaurante?" << endl << "1. Sí" << endl << "2. No" << endl;
	cin >> desea_crear;
	while (desea_crear != 1 and desea_crear != 2){
		cout << "Error. Solo puede responder con el número 1 (sí) o el numero 2 (no)" << endl;
		cin >> desea_crear;
	}
	if (desea_crear == 1){
		cout << "¿Cuántos restaurantes desea crear?" << endl;
		cin >> cantidad_crear;
		for (int i = 0; i < cantidad_crear; i++){
			cout << endl;
			cout << "Introduce el nombre del restaurante: " << endl;
			if (i == 0){    
			    cin.ignore(1, '\n');
			}
			getline(cin,nombre_crear);
			cout << "\nIntroduce la hora de apertura: " << endl;
			getline(cin,apertura_crear);
			cout << "\nIntroduce la hora de ciere: " << endl;
			getline(cin,cierre_crear);
			cout << "\nIntroduce los días de apertura: " << endl;
			getline(cin,dias_crear);
			cout << "\nIntroduce la planta en la que está ubicada: " << endl;
			cin >> planta_crear;
			cout << "\nIntroduce el propietario del restaurante: " << endl;
			cin.ignore(1, '\n');
			getline(cin,propietario_crear);
			cout << "\nIntroduce el tipo de restaurante: " << endl;
			getline(cin,restaurante_crear);
			cout << "\nIntroduce si el restaurante tiene licencia de alcohol: " << endl;
			getline(cin, licencia_crear);
			restaurantes[restaurantes_totales] = new Restaurante(nombre_crear, apertura_crear, cierre_crear, dias_crear, planta_crear, propietario_crear, restaurante_crear, licencia_crear);
			restaurantes_totales++;
		}
	}
}

void Centro_comercial::crea_cine_usuario(){
	int desea_crear;
	int cantidad_crear;
	string nombre_crear;
	string apertura_crear;
	string cierre_crear;
	string dias_crear;
	int planta_crear;
	string propietario_crear;
	int salas_crear;
	cout << "¿Desea crear algún cine?" << endl << "1. Sí" << endl << "2. No" << endl;
	cin >> desea_crear;
	while (desea_crear != 1 and desea_crear != 2){
		cout << "Error. Solo puede responder con el número 1 (sí) o el numero 2 (no)" << endl;
		cin >> desea_crear;
	}
	if (desea_crear == 1){
		cout << "¿Cuántos cines desea crear?" << endl;
		cin >> cantidad_crear;
		for (int i = 0; i < cantidad_crear; i++){
			cout << endl;
			cout << "Introduce el nombre del cine: " << endl;
			cin.ignore(1, '\n');
			getline(cin,nombre_crear);
			cout << "\nIntroduce la hora de apertura: " << endl;
			getline(cin,apertura_crear);
			cout << "\nIntroduce la hora de ciere: " << endl;
			getline(cin,cierre_crear);
			cout << "\nIntroduce los días de apertura: " << endl;
			getline(cin,dias_crear);
			cout << "\nIntroduce la planta en la que está ubicada: " << endl;
			cin >> planta_crear;
			cout << "\nIntroduce el propietario del cine: " << endl;
			cin.ignore(1, '\n');
			getline(cin,propietario_crear);
			cout << "\nIntroduce el número de salas: " << endl;
			cin >> salas_crear;
			cines[cines_totales] = new Cine(nombre_crear, apertura_crear, cierre_crear, dias_crear, planta_crear, propietario_crear, salas_crear);
			cines_totales++;
		}
	}
}

#endif
