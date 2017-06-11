#include<iostream>
#include<conio.h>

using namespace std;

int main(void)
{
    float a[10][10], b[10], x[10], y[10];
    int n = 0, m = 0, i = 0, j = 0;
    cout << "\n------===GAUSS SEIDEL===------\n\n";
    cout << "Qual o numero de variaveis na equacao? (X, Y, Z, ...): ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "\nQuais os valores de X, Y e Z nas coordenadas da Matriz: (" << i << ", " << j << "): ";
            cin >> a[i][j];
        }
    }
    cout << "\n\nDigite os valores do resultado de cada equacao (a direita do ' = ' )\n";
    for (i = 0; i < n; i++)
    {
        cout << "Resultado da equacao em :(" << i << ", " << j << ") ";
        cin >> b[i];
    }
    cout << "\n Qual o palpite inicial (padrão: 0, 0, 0):\n";
    for (i = 0; i < n; i++)
    {
        cout << "Valores iniciais:(" << i<<"):";
        cin >> x[i];
    }
    cout << "\nQuantas iteracoes deseja realizar? : ";
    cin >> m;
    cout << "\n\nResultados:\n";
    while (m > 0)
    {
        for (i = 0; i < n; i++)
        {
            y[i] = (b[i] / a[i][i]);
            for (j = 0; j < n; j++)
            {
                if (j == i)
                    continue;
                y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);
                x[i] = y[i];
            }
           cout << (i + 1, y[i]) << endl;
        }
        cout << " \n ";
        m--;
    }
    return 0;
}

