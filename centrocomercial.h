#ifndef CENTROCOMERCIAL_H_
#define CENTROCOMERCIAL_H_

#include <string>

#include <sstream>

using namespace std;

const int MAXN = 100; // Representa el máximo número de negocios, puede haber menos de 100.

class Centro_comercial{
    private:
        Tienda_ropa * tiendas[MAXN];
        Restaurante * restaurantes[MAXN];
        Cine * cines[MAXN];
    public:
        Centro_comercial();
        void crea_tienda();
        void crea_restaurante();
        void crea_cine();
};

#endif