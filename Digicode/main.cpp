#include <iostream>
#include <EasyAssert.h>
#include <Capteur.h>

using namespace std;

void test_methods(void)
{
    cout << "Test des méthodes..." << endl
         << "Test de detecter()..." << endl;
    Capteur ca;
    EASY_ASSERT(ca.detecter() == 0);
}// test_select()

int main(void)
{
    test_methods();
    return 0;
}// main()
