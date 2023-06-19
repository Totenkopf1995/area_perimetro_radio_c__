#include <iostream>
using namespace std;

int main() {
    int radio;
    double perimetro, area;

    cout << "Indicame el radio del circulo: ";
    cin >> radio;

    //perimetro
    perimetro = (3.14159 * 2) * radio;
    cout << "este es el perimetro: " << perimetro << endl;

    //area
    area = 3.14159 * radio * radio;
    cout << "esta es el area: " << area;

    return 0;
}
