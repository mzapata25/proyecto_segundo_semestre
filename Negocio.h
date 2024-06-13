/*
 *
 * Proyecto Segundo semestre clase Negocio
 * Mateo Rodrigo Zapata Crapa
 * A01708573
 * 13-06-2024
 * Esta clase defina objeto de tipo Negocio que contiene las clases heredadas
 * Tienda_ropa, Restaurante y Cine.
 */

#ifndef NEGOCIO_H_
#define NEGOCIO_H_

#include <string>

#include <sstream>

using namespace std;

//Declaracion de clase Negocio que es abstracta
class Negocio{
    //Declaro variables protegidas
    protected:
        string nombre{};
        string hora_apertura{};
        string hora_cierre{};
        string dias_apertura{};
        int planta{};
        string propietario{};
    //Declaro métodos públicos del objeto
    public:
        Negocio();
        Negocio(string n, string h_a, string h_c, string d_a, int pl, string pr);
		void setNombre(string nuevoNombre);
		string getNombre() const;
		void setApertura(string nuevaApertura);
		string getApertura() const;
		void setCierre(string nuevoCierre);
		string getCierre() const;
		void setDias(string nuevosDias);
		string getDias() const;
		void setPlanta(int nuevaPlanta);
		int getPlanta() const;
		void setPropietario(string nuevoPropietario);
		string getPropietario() const;
		virtual string to_string() = 0; // Método abstracto sera sobreescrito.
};

Negocio::Negocio(){
	nombre = "";
	hora_apertura = "";
	hora_cierre = "";
	dias_apertura = "";
	planta = 0;
	propietario = "";
}

Negocio::Negocio(string n, string h_a, string h_c, string d_a, int pl, string pr){
	nombre = n;
	hora_apertura = h_a;
	hora_cierre = h_c;
	dias_apertura = d_a;
	planta = pl;
	propietario = pr;
}

void Negocio::setNombre(string nuevoNombre){
    nombre = nuevoNombre;
}

string Negocio::getNombre()const{
    return nombre;
}

void Negocio::setApertura(string nuevaApertura){
	hora_apertura = nuevaApertura;
}

string Negocio::getApertura()const{
	return hora_apertura;
}

void Negocio::setCierre(string nuevoCierre){
	hora_cierre = nuevoCierre;
}

string Negocio::getCierre()const{
	return hora_cierre;
}

void Negocio::setDias(string nuevosDias){
	dias_apertura = nuevosDias;
}

string Negocio::getDias()const{
	return dias_apertura;
}

void Negocio::setPlanta(int nuevaPlanta){
	planta = nuevaPlanta;
}

int Negocio::getPlanta()const{
	return planta;
}

void Negocio::setPropietario(string nuevoPropietario){
	propietario = nuevoPropietario;
}

string Negocio::getPropietario()const{
	return propietario;
}

#endif
