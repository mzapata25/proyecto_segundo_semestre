#ifndef CINE_H_
#define CINE_H_

#include <string>

#include <sstream>

using namespace std;

class Cine: public Negocio{
    //Declaro variables privadas.
    private:
        int numero_salas{};
    //Declaro métodos públicos
    public:
        Cine(): Negocio(){};
        Cine(string n, string h_a, string h_c, string d_a, int pl, string pr, int n_s): Negocio(n, h_a, h_c, d_a, pl, pr), numero_salas(n_s){};
	void setNumSalas(int nuevasSalas);
	int getNumSalas() const;
	string to_string();
};

void Cine::setNumSalas(int nuevasSalas){
	numero_salas = nuevasSalas;
}

int Cine::getNumSalas()const{
	return numero_salas;
}

/**
 * to_string convierte a atributos a string.
 *
 * concatena todos los valores de los atributos en un string para ser impreso
 *
 * @param
 * @return string con los valores y texto concatenado.
 */

string Cine::to_string(){
	stringstream aux;
	aux << "Nombre del cine: " << nombre << "\nHora de apertura: " << hora_apertura << "\nHora de cierre: " << hora_cierre << "\nDias de apertura: " << dias_apertura << "\nUbicado en la planta: " << planta << "\nPropietario: " << propietario << "\nNúmero de salas: " << numero_salas << "\n" << "\n";
	return aux.str();
}

#endif
