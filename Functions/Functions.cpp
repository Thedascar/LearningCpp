#include <iostream>
#include <wchar.h>
#include <locale>
#include <cmath>

using namespace std;

void sum(int a, int b){
    cout << "The sum is: " << a + b << endl ;
}


int main()
{
    setlocale(LC_ALL, "portuguese");

    cout << "The sum if 2 plus 3 is...... " << endl;
    sum(2,3);

    system("pause");
    return 0;
}