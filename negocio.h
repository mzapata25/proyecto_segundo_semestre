#ifndef NEGOCIO_H_
#define NEGOCIO_H_

#include <string>

#include <sstream>

using namespace std;

const int MAXD = 7; //Representa el máximo de días en una semana, un negocio puede abrir menos de 7 días.

class Negocio{
    protected:
        string nombre{};
        string hora_apertura{};
        string hora_cierre{};
        string dias_apertura[MAXD]{};
        int planta{};
        string propietario{};
    public:
        Negocio();
        Negocio(string n, string h_a, string h_c, string d_a, int pl, string pr);
};

class Tienda_ropa: public Negocio{
    private:
        string tipo_ropa{};
    public:
        Tienda_ropa(): Negocio(){};
        Tienda_ropa(string n, string h_a, string h_c, string d_a, int pl, string pr, string t_r): Negocio(n, h_a, h_c, d_a, pl, pr){};
};

class Restaurante: public Negocio{
    private:
        string tipo_restaurante{};
        bool licencia_alcohol{};
    public:
        Restaurante(): Negocio(){};
        Restaurante(string n, string h_a, string h_c, string d_a, int pl, string pr, string tip_rest, bool l_a): Negocio(n, h_a, h_c, d_a, pl, pr){};
};

class Cine: public Negocio{
    private:
        int numero_salas{};
    public:
        Cine(): Negocio(){};
        Cine(string n, string h_a, string h_c, string d_a, int pl, string pr, int n_s): Negocio(n, h_a, h_c, d_a, pl, pr){};
};

#endif