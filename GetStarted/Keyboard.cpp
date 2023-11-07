#include <iostream>
#include <wchar.h>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    string text;
    
    cout << "Type Your Full Name" << endl;
    getline(cin, text);


    cout << "Hello " << text << endl;

    system("pause");
    return 0;
}