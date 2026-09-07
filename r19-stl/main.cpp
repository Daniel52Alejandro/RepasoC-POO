#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    vector<string> palabras = {
        "hola", "mundo", "hola", "casa", "mundo",
        "hola", "perro", "casa", "mundo"
    };

    vector<string> diferentes;
    vector<int> cantidades;

    for (string palabra : palabras) {
        bool encontrada = false;

        for (int i = 0; i < diferentes.size(); i++) {
            if (diferentes[i] == palabra) {
                cantidades[i]++;
                encontrada = true;
                break;
            }
        }

        if (!encontrada) {
            diferentes.push_back(palabra);
            cantidades.push_back(1);
        }
    }

    for (int i = 0; i < diferentes.size(); i++) {
        cout << diferentes[i] << ": " << cantidades[i] << endl;
    }

    return 0;
}