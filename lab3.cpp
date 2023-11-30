#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream in("lab3.txt");
    ofstream out("lab3.txt");

    string text1;
    string text2;
    cout << "Enter: ";
    cin >> text1;
    out << text1;
    out.close();

    getline(in, text2);
    cout << text2 << endl;
    in.close();
}