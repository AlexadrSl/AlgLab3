#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{

    ifstream fin("lab32.txt");  // вывод данных из файл
    ofstream fout("lab32.txt"); // ввод данных в файла
    string b;
    int q, w;
    float x, y;
    q = 0;

    for (int x = -4; x < 7; x++)
    {
        q++;
        int y;
        if (x <= -3)
        {
            y = 1;
        }
        else if (x > -3 && x <= -1)
        {

            y = -sqrt(4 - pow(x + 1, 2));
        }
        else if (x > -1 && x <= 2)
        {

            y = -2;
        }
        else if (x > 2)
        {

            y = x - 4;
        }

        fout << y;
        fout << "\n";
    }

    fout.close();

    float *data = new float[q];
    w = 0;
    while (getline(fin, b))
    {
        float c = stof(b);
        data[w] = c;
        w++;
    }
    for (int i = 0; i < q; i++)
    {
        cout << data[i] << "\n";
    }
    fin.close(); // закрываем файл
}
