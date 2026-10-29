#include <iostream>
using namespace std;

int mayor(int a, int b, int c) {
    if (a > b && a > c)
        return a;
    else if (b > a && b > c)
        return b;
    else
        return c;
}

int main() {
    int a, b, c;

    cout << "Ingrese tres numeros: ";
    cin >> a >> b >> c;

    cout << "El mayor es: " << mayor(a, b, c);

    return 0;
}
