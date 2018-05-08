#include <iostream>
#include "Information/PrintInfo.h"
#include "Testing/Testing.h"
using namespace std;

int main() {

    TestingClass* testing = new TestingClass;
    testing->InformationTesting();
    cout << testing->FactoryMethodTesting() << endl;
    cout << testing->CompositeTesting() << endl;
    cout << testing->DecoratorTesting() << endl;
    testing->ProxyTesting();

}
