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
};


int main()
{
    setlocale(LC_ALL, "portuguese");

    myCar car1;
    car1.brand = "Bwm";
    car1.color = "Blue";
    car1.sayHy();
    cout << "-------------------------------------" << endl;

    myCar car2;
    car2.brand = "Hillux";
    car2.color = "Gray";
    car2.sayHy();
    system("pause");
    return 0;
}