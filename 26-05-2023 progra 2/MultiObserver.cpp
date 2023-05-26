#include "MultiObserver.h"

MultiObserver::MultiObserver(Subject* mod, int val) : Observer(mod, val)
{
}

void MultiObserver::update()
{
    int v = this->getSubject()->getValor1();
    int d = getValor2();
    cout << v << " multiplicado por " << d << " = " << v * d << endl;
}

string MultiObserver::toString()
{
    stringstream s;
    s << "---- Esto lo hace el observer multiplicacion ----" << endl
        << "Primer multiplo es: " << this->getSubject()->getValor1() << endl
        << "Segundo multiplo es: " << getValor2() << endl
        << " = " << this->getSubject()->getValor1() * getValor2() << endl;
    return s.str();
}
