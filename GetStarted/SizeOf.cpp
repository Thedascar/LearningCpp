#include <iostream>
#include <wchar.h>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    string names[] = {"Lucas","Aline","Liz","Bob","Bacon"};
    for (string i : names)
    {
        
        cout << "The name is => " << i << endl;
    }
    cout << "The String Has " << names->length() << " names " << endl;

    system("pause");
    return 0;
}