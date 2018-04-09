#include <iostream>
#include <EasyAssert.h>
#include <Capteur.h>
#include <Clavier.h>
#include <Voyant.h>
#include <Alarme.h>
#include <unistd.h>

using namespace std;

void test_methods(void)
{
    cout << "Test des méthodes..." << endl
         << "Test de detecter()..." << endl;
    Capteur ca;
    EASY_ASSERT(ca.detecter() == 0);
    cout << "Veuillez taper un caractère quelconque : " << endl;
    sleep(3);
    EASY_ASSERT(ca.detecter() != 0);

    cout << "Test de saisirChiffre()..." << endl;
    Clavier cl;
    EASY_ASSERT(cl.saisirChiffre() == -1);
    cout << "Veuillez taper la lettre 'a' : " << endl;
    sleep(3);
    EASY_ASSERT(cl.saisirChiffre() == 'a');

    cout << "Test de getStatut()..." << endl;
    Voyant v (rouge, eteint);
    EASY_ASSERT(v.getStatut() == "OFF");
    v.allumer();
    EASY_ASSERT(v.getStatut() == "ON");
    v.eteindre();
    EASY_ASSERT(v.getStatut() == "OFF");

    cout << "Test de declencher() (attention, cette méthode déclenche une boucle sans condition d'arrêt)" << endl;
    Alarme a;
    a.declencher();
}// test_select()

int main(void)
{
    test_methods();
    return 0;
}// main()
