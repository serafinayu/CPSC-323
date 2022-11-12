#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string c;

    cout << "Input a RE with identifiers and operators only: \n";
    getline(cin, c);

    for (int i = 0; i < c.length(); i++)
    {
        int count = 0;
        if (c[i] == '*' || c[i] == '+' || c[i] == '-' || c[i] == '/' || c[i] == '%')
        {
            cout << left << setw(10) << c[i] << "operator" << endl;
            count++;
        }
        else
        {
            cout << left << setw(10) << c[i] << "identifier" << endl;
            count++;
        }
    }
    
    return 0;
}