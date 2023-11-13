#include <iostream>
#include <wchar.h>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

   struct {
        int age = 28;
        string name = "Lucas";
   } Mystructure;


   cout << Mystructure.name << endl;
   cout << Mystructure.age << endl;
   

    system("pause");
    return 0;
}