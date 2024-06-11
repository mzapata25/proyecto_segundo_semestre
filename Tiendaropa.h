#ifndef TIENDAROPA_H_
#define TIENDAROPA_H_

#include <string>

#include <sstream>

using namespace std;

class Tienda_ropa: public Negocio{
    private:
        string tipo_ropa{};
    public:
        Tienda_ropa(): Negocio(){};
        Tienda_ropa(string n, string h_a, string h_c, string d_a, int pl, string pr, string t_r): Negocio(n, h_a, h_c, d_a, pl, pr), tipo_ropa(t_r){};
		void setTipoR(string nuevoTipoR);
		string getTipoR() const;
		string to_string();
};

void Tienda_ropa::setTipoR(string nuevoTipoR){
	tipo_ropa = nuevoTipoR;
}

string Tienda_ropa::getTipoR()const{
	return tipo_ropa;
}

string Tienda_ropa::to_string(){
	stringstream aux;
	aux << "Nombre de la tienda: " << nombre << "\nHora de apertura: " << hora_apertura << "\nHora de cierre: " << hora_cierre << "\nDias de apertura: " << dias_apertura << "\nUbicado en la planta: " << planta << "\nPropietario: " << propietario << "\nTipo de ropa: " << tipo_ropa << "\n" << "\n";
	return aux.str();
}
#endif
