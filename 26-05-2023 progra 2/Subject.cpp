#include "Subject.h"

Subject::Subject(int val)
{
    can = 0;
    tam = 0;
    valor1 = val;
    for (int i = 0; i < tam; i++)
    {
        vec[i] = NULL;
    }
}

Subject::~Subject()
{
    for (int i = 0; i < can; i++)
    {
        delete vec[i];
    }
}

void Subject::agregar(Observer* obs)
{
    if (can < tam) {
        vec[can++] = obs;
    }
}

void Subject::setValor1(int val)
{
    valor1 = val;
    notify();
}

int Subject::getValor1()
{
    return valor1;
}

void Subject::notify()
{
    for (int i = 0; i < can; i++)
    {
        vec[i]->update();
    }
}

string Subject::toString()
{
    stringstream s;
    s << "----- Listado de los Observers -----\n";
    for (int i = 0; i < can; i++)
    {
        s << "Numero: " << i + 1 << endl;
        s << vec[i]->toString();
    }
    return s.str();
}
