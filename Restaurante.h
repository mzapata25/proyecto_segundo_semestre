#ifndef RESTAURANTE_H_
#define RESTAURANTE_H_

#include <string>

#include <sstream>

using namespace std;

class Restaurante: public Negocio{
    private:
        string tipo_restaurante{};
        string licencia_alcohol{};
    public:
        Restaurante(): Negocio(){};
        Restaurante(string n, string h_a, string h_c, string d_a, int pl, string pr, string tip_rest, string l_a): Negocio(n, h_a, h_c, d_a, pl, pr), tipo_restaurante(tip_rest), licencia_alcohol(l_a){};
		void setTipRest(string nuevoTipRest);
		string getTipRest()const;
		void setLicencia(string nuevaLicencia);
		string getLicencia()const;
		string to_string();
};

void Restaurante::setTipRest(string nuevoTipRest){
	tipo_restaurante = nuevoTipRest;
}

string Restaurante::getTipRest()const{
	return tipo_restaurante;
}

void Restaurante::setLicencia(string nuevaLicencia){
	licencia_alcohol = nuevaLicencia;
}

string Restaurante::getLicencia()const{
	return licencia_alcohol;
}

string Restaurante::to_string(){
	stringstream aux;
	aux << "Nombre del restaurante: " << nombre << "\nHora de apertura: " << hora_apertura << "\nHora de cierre: " << hora_cierre << "\nDias de apertura: " << dias_apertura << "\nUbicado en la planta: " << planta << "\nPropietario: " << propietario << "\nTipo de restaurante: " << tipo_restaurante << "\nVenta de alcohol: "<< licencia_alcohol <<"\n" << "\n";
	return aux.str();
}
#endif
