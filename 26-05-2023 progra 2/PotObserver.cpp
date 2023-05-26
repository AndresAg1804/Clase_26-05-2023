#include "PotObserver.h"
PotObserver::PotObserver(Subject* mod, int val) : Observer(mod, val)
{
}

void PotObserver::update()
{
    int v = this->getSubject()->getValor1();
    int d = getValor2();
    cout << v << " elevado por " << d << " = " << pow(v,d) << endl;
}

string PotObserver::toString()
{
    stringstream s;
    s << "---- Esto lo hace el observer potencia ----" << endl
        << "Primer multiplo es: " << this->getSubject()->getValor1() << endl
        << "Segundo multiplo es: " << getValor2() << endl
        << " = " << pow(getSubject()->getValor1(), getValor2()) << endl;
    return s.str();
}
