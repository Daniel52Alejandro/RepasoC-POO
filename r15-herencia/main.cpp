#include <iostream>
using namespace std;

class Persona {
protected:
    string nombre;
public:
    Persona(string n) {
        nombre = n;
        cout << "Soy persona" << '\n';
    }
    ~Persona() {
        cout << "Destructor Persona" << '\n';
    }
};

class Empleado : public Persona {
protected:
    int sueldo;
public:
    Empleado(string n, int s) : Persona(n) {
        sueldo = s;
        cout << "Soy empleado" << '\n';
    }
    ~Empleado() {
        cout << "Destructor Empleado" << '\n';
    }
};

class Gerente : public Empleado {
private:
    int antiguedad;
public:
    Gerente(string n, int s, int a) : Empleado(n, s) {
        antiguedad = a;
        cout << "Soy gerente" << '\n';
    }
    ~Gerente() {
        cout << "Destructor Gerente" << '\n';
    }
};

int main() {
    {Gerente g("Ana", 1000, 5);}

    return 0;
}