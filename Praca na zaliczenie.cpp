
#include <iostream>
#include <string>                    //biblioteki//
#include <windows.h>
#include <cstdlib>


using namespace std;                 


void displayWelcomeMessage();
void displayBreadOptions();
void calculateRyeBread();                             //funkcje wlasne odpowiadajace za czytelnosc i porzadek w kodzie//
void calculateFinnishBread();
void calculateCranberryBread();
void calculateSpeltBread();



string login, password;
int continueChoice;
float flour72, flour75, flour72a, flour75a, salt, salt2, sourdough, sourdough2, yeast, yeast2, sunflower, sunflower2, water, water2;          //typy zmiennych uzytych w kodzie//
float breadmixC, breadmixC2, breadQuantity;
float honey, oil, oil2, honey2;
float breadmixF, breadmixF2, linseed, linseed2;
float cranberry, cranberry2;
float improver, improver2, breadmixO, potatoflake, breadmixO2, potatoflake2;


void displayWelcomeMessage() {                             //poczatek rozpisywania co maja wykonywac funkcje uzyte nastepnie w int main//
    system("color E4");
    cout << "Witaj w Pomocniku Piekarskim" << endl;
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> password;

}

void displayBreadOptions() {
    system("color E4");
    cout << "Witaj, w kalkulatorze chleba. Podaj numer chleba jaki wybierasz? " << endl;
    cout << "1 - Chleb rzemieslniczy" << endl;
    cout << "2 - Chleb finski" << endl;
    cout << "3 - Chleb z zurawina" << endl;
    cout << "4 - Chleb orkiszowy" << endl;
    cout << "5 - Wyjscie" << endl;
}

void calculateRyeBread() {
    breadmixC = 1;
    sunflower = 0.21;
    salt = 0.035;            //podanie ilosci surowca na jedna sztuke//
    honey = 0.095;
    water = 0.11;
    oil = 0.09;

    cout << "Wybrales chleb rzemieslniczy! Ile chleba chcesz zrobic?" << endl;

    cin >> breadQuantity;
    while (breadQuantity <= 0) {              //petla while ktora odpowiada za sprawdzenie czy nie zostala wpisana ujemna liczba lub zerowa (byloby to bezsensowne obliczenie)//
        cout << "Zle podana liczba!" << endl;
        cout << "Czy chcesz sprobowac jeszcze raz? Tak - 1, Nie - 0" << endl;
        cin >> continueChoice;

        if (continueChoice == 0) {          //if uzywany do ewentualnego pozegnania uzytkownika//
            system("cls");
            return displayBreadOptions();
        }

        system("cls");

        cout << "Wybrales chleb finski! Ile chleba chcesz zrobic?" << endl;
        cin >> breadQuantity;
    }
 
    

    breadmixC2 = breadQuantity * breadmixC;   
    sunflower2 = breadQuantity * sunflower;
    salt2 = breadQuantity * salt;
    water2 = breadQuantity * water;                  //obliczenia dla wybranego rodzaju//
    oil2 = breadQuantity * oil;
    honey2 = breadQuantity * honey;

    cout << "Mixu jest: " << breadmixC2 << endl;
    cout << "Slonecznika jest: " << sunflower2 << endl;
    cout << "Soli jest: " << salt2 << endl;
    cout << "Wody jest: " << water2 << endl;               //informacja zwrotna po obliczeniach dla uzytkownika//
    cout << "Oleju jest: " << oil2 << endl;
    cout << "Miodu jest: " << honey2 << endl;
    cout << endl;
    cout << endl;

    system("pause");
}

void calculateFinnishBread() {

    flour75 = 0.442;
    flour72 = 0.621;
    yeast = 0.022;
    salt = 0.018;                          //podanie ilosci surowca na jedna sztuke//
    sunflower = 0.171;
    linseed = 0.089;
    sourdough = 0.017;
    breadmixF = 0.14;
    water = 0.52;

    cout << "Wybrales chleb finski! Ile chleba chcesz zrobic?" << endl;

    cin >> breadQuantity;
    while (breadQuantity <= 0) {                 //petla while ktora odpowiada za sprawdzenie czy nie zostala wpisana ujemna liczba lub zerowa (byloby to bezsensowne obliczenie)//
        cout << "Zle podana liczba!" << endl;
        cout << "Czy chcesz cos jeszcze policzyc? Tak - 1, Nie - 0" << endl;
        cin >> continueChoice;

        if (continueChoice == 0) {      //if uzywany do ewentualnego pozegnania uzytkownika//
            return;
        }
        
        system("cls");

        cout << "Wybrales chleb finski! Ile chleba chcesz zrobic?" << endl;
        cin >> breadQuantity;
    }
   
    

    flour75a = breadQuantity * flour75;
    flour72a = breadQuantity * flour72;
    yeast2 = breadQuantity * yeast;
    salt2 = breadQuantity * salt;
    sunflower2 = breadQuantity * sunflower;                    //obliczenia dla wybranego rodzaju//
    linseed2 = breadQuantity * linseed;
    sourdough2 = breadQuantity * sourdough;
    breadmixF2 = breadQuantity * breadmixF;
    water2 = breadQuantity * water;

    cout << "Maki 750 potrzeba: " << flour75a << endl;
    cout << "Maki 720 potrzeba: " << flour72a << endl;
    cout << "Drozdzy potrzeba: " << yeast2 << endl;
    cout << "Soli potrzeba: " << salt2 << endl;
    cout << "Slonecznika potrzeba: " << sunflower2 << endl;               //informacja zwrotna po obliczeniach dla uzytkownika//
    cout << "Siemia potrzeba: " << linseed2 << endl;
    cout << "Zakwasu potrzeba: " << sourdough2 << endl;
    cout << "Mixu finskiego potrzeba: " << breadmixF2 << endl;
    cout << "Wody potrzeba: " << water2 << endl;
    cout << endl;
    cout << endl;

    system("pause");
}

void calculateCranberryBread() {

    flour75 = 0.2;
    flour72 = 0.24;
    yeast = 0.02;
    salt = 0.015;
    sunflower = 0.153;                 //podanie ilosci surowca na jedna sztuke//
    cranberry = 0.06;
    sourdough = 0.017;
    breadmixF = 0.12;
    water = 0.46;

    cout << "Wybrales chleb z zurawina! Ile chleba chcesz zrobic?" << endl;

    cin >> breadQuantity; 
    while (breadQuantity <= 0) {                //petla while ktora odpowiada za sprawdzenie czy nie zostala wpisana ujemna liczba lub zerowa (byloby to bezsensowne obliczenie)//
        cout << "Zle podana liczba!" << endl;
        cout << "Czy chcesz cos jeszcze policzyc? Tak - 1, Nie - 0" << endl;
        cin >> continueChoice;

        if (continueChoice == 0) {           //if uzywany do ewentualnego pozegnania uzytkownika//
            return;
        }

        system("cls");

        cout << "Wybrales chleb finski! Ile chleba chcesz zrobic?" << endl;
        cin >> breadQuantity;
    }
   
    

    flour75a = breadQuantity * flour75;
    flour72a = breadQuantity * flour72;
    yeast2 = breadQuantity * yeast;
    salt2 = breadQuantity * salt;
    sunflower2 = breadQuantity * sunflower;                   //obliczenia dla wybranego rodzaju//
    cranberry2 = breadQuantity * cranberry;
    sourdough2 = breadQuantity * sourdough;
    breadmixF2 = breadQuantity * breadmixF;
    water2 = breadQuantity * water;

    cout << "Maki 750 potrzeba: " << flour75a << endl;
    cout << "Maki 720 potrzeba: " << flour72a << endl;
    cout << "Drozdzy potrzeba: " << yeast2 << endl;
    cout << "Soli potrzeba: " << salt2 << endl;
    cout << "Slonecznika potrzeba: " << sunflower2 << endl;                  //informacja zwrotna po obliczeniach dla uzytkownika//
    cout << "Zurawiny potrzeba: " << cranberry2 << endl;
    cout << "Zakwasu potrzeba: " << sourdough2 << endl;
    cout << "Mixu finskiego potrzeba: " << breadmixF2 << endl;
    cout << "Wody potrzeba: " << water2 << endl;
    cout << endl;
    cout << endl;

    system("pause");
}

void calculateSpeltBread() {

    flour75 = 0.14;
    flour72 = 0.156;
    yeast = 0.016;
    salt = 0.010;
    improver = 0.004;                      //podanie ilosci surowca na jedna sztuke//
    sunflower = 0.054;
    potatoflake = 0.015;
    sourdough = 0.010;
    breadmixO = 0.285;
    water = 0.56;

    cout << "Wybrales chleb orkiszowy! Ile chleba chcesz zrobic?" << endl;

    cin >> breadQuantity;
    while (breadQuantity <= 0) {              //petla while ktora odpowiada za sprawdzenie czy nie zostala wpisana ujemna liczba lub zerowa (byloby to bezsensowne obliczenie)//
        cout << "Zle podana liczba!" << endl;
        cout << "Czy chcesz cos jeszcze policzyc? Tak - 1, Nie - 0" << endl;
        cin >> continueChoice;

        if (continueChoice == 0) {             //if uzywany do ewentualnego pozegnania uzytkownika//
            return;
        }

        system("cls");

        cout << "Wybrales chleb finski! Ile chleba chcesz zrobic?" << endl;
        cin >> breadQuantity;
    }

    flour75a = breadQuantity * flour75;
    flour72a = breadQuantity * flour72;
    yeast2 = breadQuantity * yeast;
    salt2 = breadQuantity * salt;
    improver2 = breadQuantity * improver;
    sunflower2 = breadQuantity * sunflower;                          //obliczenia dla wybranego rodzaju//
    potatoflake = breadQuantity * potatoflake;
    sourdough2 = breadQuantity * sourdough;
    breadmixO2 = breadQuantity * breadmixO;
    water2 = breadQuantity * water;

    cout << "Maki 750 potrzeba: " << flour75a << endl;
    cout << "Maki 720 potrzeba: " << flour72a << endl;
    cout << "Drozdzy potrzeba: " << yeast2 << endl;
    cout << "Soli potrzeba: " << salt2 << endl;
    cout << "Zaciemniacza potrzeba: " << improver2 << endl;
    cout << "Slonecznika potrzeba: " << sunflower2 << endl;                     
    cout << "Platkow ziemniaczanych potrzeba: " << potatoflake2 << endl;                //informacja zwrotna po obliczeniach dla uzytkownika//
    cout << "Zakwasu potrzeba: " << sourdough2 << endl;
    cout << "Mixu orkiszowego potrzeba: " << breadmixF2 << endl;
    cout << "Wody potrzeba: " << water2 << endl;
    cout << endl;
    cout << endl;

    system("pause");
}                              //koniec rozpisywania funkcji//

using namespace std;


int main()
{
    displayWelcomeMessage();
   
        while ((login == "piekarz") && (password == "piekarnia")) {         //petla odpowiadajaca za niewylacznie programu gdy uzytkownik chce liczyc dalej//
            do {  //podobnie jak wyzej - odpowiada to wyborom w konkretnych case//

                system("cls");
                displayBreadOptions();

                int userChoice;          //zmienna odpowiadajaca za wybor uzytkownika//

                cin >> userChoice;
                system("cls");

                switch (userChoice) {                 //uzycie switch/case jako menu glownego//
                case 1:
                    calculateRyeBread();
                    cout << "Czy chcesz cos jeszcze policzyc? Tak - 1, Nie - 0" << endl;
                    cin >> continueChoice;
                    break;

                case 2:
                    calculateFinnishBread();
                    cout << "Czy chcesz cos jeszcze policzyc? Tak - 1, Nie - 0" << endl;
                    cin >> continueChoice;
                    break;

                case 3:
                    calculateCranberryBread();
                    cout << "Czy chcesz cos jeszcze policzyc? Tak - 1, Nie - 0" << endl;
                    cin >> continueChoice;
                    break;

                case 4:
                    calculateSpeltBread();
                    cout << "Czy chcesz cos jeszcze policzyc? Tak - 1, Nie - 0" << endl;
                    cin >> continueChoice;
                    break;

                case 5:
                    cout << "Do widzenia!" << endl;
                    return 0;

                default:
                    cout << "Niepoprawny wybor!" << endl;
                    cout << "Czy chcesz cos jeszcze policzyc? Tak - 1, Nie - 0" << endl;
                    cin >> continueChoice;
                    system("pause");

                }
                
                

            } while (continueChoice == 1);

            cout << "Do widzenia!" << endl;
                break;
            }
        if ((login != "piekarz") && (password != "piekarnia")) {        //if uzyty w celu wyswietlenia ostrzezenia przy podaniu blednych danych//
            cout << "Niepoprawne dane!" << endl;
        }
        system("pause");

        return 0;
}
    




               