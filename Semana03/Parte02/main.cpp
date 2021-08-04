#include <iostream>
using namespace std;

// Functions
float sum(float a, float b);
void introduceMe(string name, int age = 0);
void celebrateBirthday(int* age);

// Classes
class Car{
//Encapsulation
private:
   string Name;
   string Color;
   double Price;
   bool isBroken;

public:
// Constructors
   Car(string name, string color, double price) {
      Name = name;
      Color = color;
      Price = price;
      isBroken = false;
   }

// Class methods
   void getInfo() {
      cout << "Name: " << Name << endl;
      cout << "Color: " << Color << endl;
      cout << "Price: $" << Price << endl;
   }
   void chashCar() {
       cout << Name << " crashed" << endl;
       isBroken = true;
   }
   void repairCar() {
       cout << Name << " repaired" << endl;
       isBroken = false;
   }
   void move() {
       if(isBroken)
        cout << Name << " is broken" << endl;
       else
        cout << Name << " is driving" << endl;
   }
};

int main()
{
// 15. Functions that return value
    cout<<sum(2.2, 5)<<endl;
    cout<<sum(5.2, 3)<<endl;
    cout<<sum(4, 8)<<endl;

// 16. Functions with default arguments
    introduceMe("Murilo", 23);

// 17. Functions with default arguments
    introduceMe("Anna");

// 19. Passing Pointers to Functions
    int myAge = 23;
    cout << "Before function, age: " << myAge << endl;
    celebrateBirthday(&myAge);
    cout << "After function, age: " << myAge << endl;

// 20. Pointers and Arrays
    int luckyNumbers[5] = {1,3,5,7,9};
    cout << luckyNumbers << endl;     // Endereço do array.
    cout << &luckyNumbers[0] << endl; // Endereço do primeiro elemento do array.
    cout << luckyNumbers[0] << endl;  // Primeiro elemento do array.

    int* luckyPointer = luckyNumbers;
    cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << endl;
    luckyPointer++;
    cout << "Pointing to " << luckyPointer << ", value: " << *luckyPointer << endl;

// 21. Classes
    Car myCar;
    myCar.Name = "Ford";
    myCar.Color = "red";
    myCar.Price = 50000;

    cout << "Name: " << myCar.Name << endl;
    cout << "Color: " << myCar.Color << endl;
    cout << "Price: $" << myCar.Price << endl;

    Car myCar2;
    myCar2.Name = "Volvo";
    myCar2.Color = "black";
    myCar2.Price = 70000;

    cout << "Name: " << myCar2.Name << endl;
    cout << "Color: " << myCar2.Color << endl;
    cout << "Price: $" << myCar2.Price << endl;

// 22. Constructors
    Car myCar("Frod", "red", 50000);
    Car myCar2("Volvo", "black", 70000);

    cout << "Name: " << myCar.Name << endl;
    cout << "Color: " << myCar.Color << endl;
    cout << "Price: $" << myCar.Price << endl;

    cout << "Name: " << myCar2.Name << endl;
    cout << "Color: " << myCar2.Color << endl;
    cout << "Price: $" << myCar2.Price << endl;

// 23. Class methods
    Car myCar("Frod", "red", 50000);
    Car myCar2("Volvo", "black", 70000);

    myCar.getInfo();
    myCar2.getInfo();

// 24. Encapsulation
    Car ford("Frod", "red", 50000);
    Car volvo("Volvo", "black", 70000);

    ford.move();
    ford.chashCar();
    ford.move();
    ford.repairCar();
    ford.move();

    return 0;
}

// Functions that return value
float sum(float a, float b){
    return a + b;
}

// Functions that don't return value
void introduceMe(string name, int age){
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old" << endl;
}

// Pointers
void celebrateBirthday(int* age){
    (*age)++;
    cout << "Celebrated " << *age << ". birthday" << endl;
}
