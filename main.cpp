#include <iostream>
#include <TADMulticonjunto.h>

using namespace std;

int main(int argc, char *argv[])
{
    TADMulticonjunto<char> mccar;
    mccar.anade('f');
    mccar.anade('b');
    mccar.anade('z');
    mccar.anade('3');
    mccar.anade('f');
    mccar.anade('1');
    cout << "Cardinalidad: " << mccar.cardinalidad() << endl;

    mccar.elimina('3');
    mccar.elimina('b');

    cout << "Cardinalidad: " << mccar.cardinalidad() << endl;
}
