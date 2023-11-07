#include <iostream>
#include <wchar.h>
#include <locale>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "portuguese");

    cout << "The max of 4 and 8 is:" << max(4,8) << endl;    
    cout << "The min of 4 and 8 is:" << min(4,8) << endl;   
    cout << "square " << sqrt(64) << endl; 
    cout << "Round " << round(2.6) << endl; 
    cout << "Log " << log(2) << endl; 

    system("pause");
    return 0;
}