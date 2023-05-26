#include <Windows.h>
#include<string>
#include "MultiObserver.h"
#include "PotObserver.h"
#include "Subject.h"

int main() {
	Observer* ptr = NULL;
	int n1 = 0, n2 = 0, n3 = 0, op1 = 0, op2 = 0;
	cout << "------- CREANDO EL SUBJECT -------\n";
	cout << "Digite el valor con el que el sujeto inicia: "; 
	cin >> n1;
	Subject subj(n1);
	cout << endl;
	do {
		system("cls");
		cout << endl << endl;
		cout << "----- Menu Patron Observer -----\n";
		cout << "1- Crear observer" << endl;
		cout << "2- Setear subject" << endl;
		cout << "3- Listar observer" << endl;
		cout << "4- salir" << endl;
		cout << "---------------------------------" << endl;
		cout << "Digite la opcion: "; 
		cin >> op1;
		switch (op1) {
		case 1: {
			cout << "Digite el valor interno del observer: ";
			cin >> n2;
			cout << "----- Que Tipo -----\n";
			cout << "1- Observer para la multiplicacion" << endl;
			cout << "2- Observer para la potencia" << endl;
			cout << "3- Observer para la division" << endl;
			cout << "---------------------------------" << endl;
			cout << "Digite la opcion: ";
			cin >> op2;
			switch (op2) {
			case 1: { ptr = new MultiObserver(&subj, n2);} break;
			case 2: { ptr = new PotObserver(&subj, n2); } break;
				//case 3: { ptr = new MultiObserver(&subj, n2); } break;
			}
		} break;
		case 2: {
			cout << "Digite el nuevo valor interno del sujeto: ";
			cin >> n3;
			subj.setValor1(n3);
			cout << "Listo...\n";
			
		}
		break;
		case 3: {
			cout << subj.toString() << endl;
		} break;
		case 4: {
			cout << "muchas gracias" << endl;
		} break;
		}
		system("pause");
	} while (op1 != 4);

	system("pause");
	return 0;
}