#include <iostream>
#include <wchar.h>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    string text = "The newer Example text with cpp ºººº@@@ áá";

    cout << text << endl;

    system("pause");
    return 0;
}