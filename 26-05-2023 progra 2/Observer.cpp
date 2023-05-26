#include "Observer.h"

Observer::Observer(Subject* mod, int val2)
{
    model = mod;
    valor2 = val2;
    model->agregar(this);
}

Subject* Observer::getSubject()
{
    return model;
}

int Observer::getValor2()
{
    return valor2;
}


