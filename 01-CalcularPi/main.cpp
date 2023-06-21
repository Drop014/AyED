#include <iostream>

using namespace std;

int main() {
    double pi = 0.0;
    double x = 0.0000001; 
    bool sumar = true;

    for (int n = 0;; n++) {
        double termino = 1.0 / (2 * n + 1);

        if (termino < x)
            break;

        if (sumar)
            pi += termino;
        else
            pi -= termino;

        sumar = !sumar;
    }

    pi *= 4;

    cout.precision(6); 
    cout << "El valor de pi es: " << fixed << pi << endl;

    return 0;
}