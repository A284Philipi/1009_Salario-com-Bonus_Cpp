#include <iostream>

using namespace std;

int main()
{
    string funcionario;
    double salariofixo, totaldevendas, total;
    cin >> funcionario;
    cin >> salariofixo;
    cin >> totaldevendas;
    total = salariofixo + ( totaldevendas*0.15 );
    cout.precision(2);
    cout << fixed << "TOTAL = R$ " << total <<endl;
    return 0;
}
