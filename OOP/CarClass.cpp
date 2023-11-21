#include <iostream>
#include <wchar.h>
#include <locale>
#include <cmath>

using namespace std;

class myCar{
    public:
    string color;
    string brand;

      void sayHy(){
        cout << "My car is " << brand << " and his color is : " << color << endl; 
    }
    
    myCar(string x, string y){
        brand = x;
        color = y;
    }

  
};


int main()
{
    setlocale(LC_ALL, "portuguese");

    myCar car1("Bwm","Purple");
    
    car1.sayHy();
    cout << "-------------------------------------" << endl;

    myCar car2("Hillux","Black");
    
    car2.sayHy();
    system("pause");
    return 0;
}