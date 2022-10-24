#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int zakresRand(int minimum, int maksimum)
{return rand ()% (maksimum - minimum +1) + minimum;}

enum rodzaj_karty {KARTA0 = 0, PIK_As = 1, PIK9 = 2, PIK10 = 3, PIK_J = 4, PIK_Q = 5, PIK_K = 6,
TREFL_A = 7, TREFL9 = 8, TREFL10 = 9, TREFL_J = 10, TREFL_Q = 11, TREFL_K = 12,
KARO_A = 13, KARO9 = 14, KARO10 = 15, KARO_J = 16, KARO_Q = 17, KARO_K = 18,
KIER_A = 19, KIER9 = 20, KIER10 = 21, KIER_J = 22, KIER_Q = 23, KIER_K = 24};

int karta1;
int karta2;
int karta3;
int karta4;
int karta5;
int ustaw1;
int ustaw2;
int ustaw3;
int ustaw4;
int ustaw5;


void nazwa_karty1()
{
    switch(karta1)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_karty2()
{
    switch(karta2)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_karty3()
{
    switch(karta3)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_karty4()
{
    switch(karta4)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_karty5()
{
    switch(karta5)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_ustaw1()
{
    switch(ustaw1)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_ustaw2()
{
    switch(ustaw2)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_ustaw3()
{
    switch(ustaw3)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_ustaw4()
{
    switch(ustaw4)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void nazwa_ustaw5()
{
    switch(ustaw5)
    {
        case PIK_As: cout << "PIK_AS" << '\t'; break;
        case PIK9: cout << "PIK_9" << '\t'; break;
        case PIK10: cout << "PIK_10" << '\t'; break;
        case PIK_J: cout << "PIK_J" << '\t'; break;
        case PIK_Q: cout << "PIK_Q" << '\t'; break;
        case PIK_K: cout << "PIK_K" << '\t'; break;
        case TREFL_A: cout << "TREFL_AS" << '\t'; break;
        case TREFL9: cout << "TREFL_9" << '\t'; break;
        case TREFL10: cout << "TREFL_10" << '\t'; break;
        case TREFL_J: cout << "TREFL_J" << '\t'; break;
        case TREFL_Q: cout << "TREFL_Q" << '\t'; break;
        case TREFL_K: cout << "TREFL_K" << '\t'; break;
        case KARO_A: cout << "KARO_AS" << '\t'; break;
        case KARO9: cout << "KARO_9" << '\t'; break;
        case KARO10: cout << "KARO_10" << '\t'; break;
        case KARO_J: cout << "KARO_J" << '\t'; break;
        case KARO_Q: cout << "KARO_Q" << '\t'; break;
        case KARO_K: cout << "KARO_K" << '\t'; break;
        case KIER_A: cout << "KIER_AS" << '\t'; break;
        case KIER9: cout << "KIER_9" << '\t'; break;
        case KIER10: cout << "KIER_10" << '\t'; break;
        case KIER_J: cout << "KIER_J" << '\t'; break;
        case KIER_Q: cout << "KIER_Q" << '\t'; break;
        case KIER_K: cout << "KIER_K" << '\t'; break;
    }
}

void rozdanie_karta1() //losowanie karty1
{karta1 = zakresRand(PIK_As,KIER_K);}

void rozdanie_karta2() // losowanie karty2
{karta2 = zakresRand(PIK_As, KIER_K);}

void rozdanie_karta3() // losowanie karty3
{karta3 = zakresRand(PIK_As, KIER_K);}

void rozdanie_karta4() // losowanie karty4
{karta4 = zakresRand(PIK_As, KIER_K);}

void rozdanie_karta5() // losowanie karty5
{karta5 = zakresRand(PIK_As, KIER_K);}


void rozdanie_kart() //rozdanie wszystkich kart tak, by si© nie powtarzaˆy w ukˆadzie
{
    rozdanie_karta1();
    rozdanie_karta2();
    rozdanie_karta3();
    rozdanie_karta4();
    rozdanie_karta5();

    while(true)
    {
        if(karta1 == karta2)
        {rozdanie_karta2();}
        else if (karta1 == karta3)
        {rozdanie_karta3();}
        else if (karta1 == karta4)
        {rozdanie_karta4();}
        else if (karta1 == karta5)
        {rozdanie_karta5();}
        else if (karta2 == karta3)
        {rozdanie_karta3();}
        else if (karta2 == karta4)
        {rozdanie_karta4();}
        else if (karta2 == karta5)
        {rozdanie_karta5();}
        else if (karta3 == karta4)
        {rozdanie_karta4();}
        else if (karta3 == karta5)
        {rozdanie_karta5();}
        else if (karta4 == karta5)
        {rozdanie_karta5();}
        else
        {break;}
    }
}

void jedna_karta() // rozdanie jednej karty tak, by si© nie powtarzaˆa w ukˆadzie
{
    int wskazanie_karty;

    cout << "Wska¾ kart©, kt¢r¥ chcesz wymieni†." << endl;
    cout << "Chc© wymieni† kart©: ";
    cin >> wskazanie_karty;

    switch(wskazanie_karty)
    {
        case 1:
            do
            {rozdanie_karta1();}
            while ((karta1 == karta2) || (karta1 == karta3) || (karta1 == karta4) || (karta1 == karta5));
            break;
        case 2:
            do
            {rozdanie_karta2();}
            while ((karta2 == karta1) || (karta2 == karta3) || (karta2 == karta4) || (karta2 == karta5));
            break;
        case 3:
            do
            {rozdanie_karta3();}
            while ((karta3 == karta1) || (karta3 == karta2) || (karta3 == karta4) || (karta3 == karta5));
            break;
        case 4:
            do
            {rozdanie_karta4();}
            while ((karta4 == karta1) || (karta4 == karta2) || (karta4 == karta3) || (karta4 == karta5));
            break;
        case 5:
            do
            {rozdanie_karta1();}
            while ((karta5 == karta1) || (karta5 == karta2) || (karta5 == karta3) || (karta5 == karta4));
            break;
    }
}

void dwie_karty() //rozdanie dw¢ch kart tak, by si© nie powtarzaˆy w ukˆadzie
{
    for (int i=1; i < 3; i++)
    {
        int wskazanie_karty;
        cout << "Wska¾ " << i << " kart©, kt¢r¥ chcesz wymieni†." << endl;
        cout << "Chc© wymieni† kart©: ";
        cin >> wskazanie_karty;
        cout << endl;

        switch(wskazanie_karty)
        {
            case 1:
            do
            {rozdanie_karta1();}
            while ((karta1 == karta2) || (karta1 == karta3) || (karta1 == karta4) || (karta1 == karta5));
            break;
        case 2:
            do
            {rozdanie_karta2();}
            while ((karta2 == karta1) || (karta2 == karta3) || (karta2 == karta4) || (karta2 == karta5));
            break;
        case 3:
            do
            {rozdanie_karta3();}
            while ((karta3 == karta1) || (karta3 == karta2) || (karta3 == karta4) || (karta3 == karta5));
            break;
        case 4:
            do
            {rozdanie_karta4();}
            while ((karta4 == karta1) || (karta4 == karta2) || (karta4 == karta3) || (karta4 == karta5));
            break;
        case 5:
            do
            {rozdanie_karta1();}
            while ((karta5 == karta1) || (karta5 == karta2) || (karta5 == karta3) || (karta5 == karta4));
            break;
        }
    }
}

void trzy_karty() // rozdanie trzech kart tak, by si© nie powtarzaˆy w ukˆadzie
{
    for (int i=1; i < 4; i++)
    {
        int wskazanie_karty;
        cout << "Wska¾ " << i << " kart©, kt¢r¥ chcesz wymieni†." << endl;
        cout << "Chc© wymieni† kart©: ";
        cin >> wskazanie_karty;
        cout << endl;

        switch(wskazanie_karty)
        {
            case 1:
            do
            {rozdanie_karta1();}
            while ((karta1 == karta2) || (karta1 == karta3) || (karta1 == karta4) || (karta1 == karta5));
            break;
        case 2:
            do
            {rozdanie_karta2();}
            while ((karta2 == karta1) || (karta2 == karta3) || (karta2 == karta4) || (karta2 == karta5));
            break;
        case 3:
            do
            {rozdanie_karta3();}
            while ((karta3 == karta1) || (karta3 == karta2) || (karta3 == karta4) || (karta3 == karta5));
            break;
        case 4:
            do
            {rozdanie_karta4();}
            while ((karta4 == karta1) || (karta4 == karta2) || (karta4 == karta3) || (karta4 == karta5));
            break;
        case 5:
            do
            {rozdanie_karta1();}
            while ((karta5 == karta1) || (karta5 == karta2) || (karta5 == karta3) || (karta5 == karta4));
            break;
        }
    }

}

void cztery_karty() // rozdanie czterech kart tak, by si© nie powtarzaˆy w ukˆadzie
{
    for (int i=1; i < 5; i++)
    {
        int wskazanie_karty;
        cout << "Wska¾ " << i << " kart©, kt¢r¥ chcesz wymieni†." << endl;
        cout << "Chc© wymieni† kart©: ";
        cin >> wskazanie_karty;
        cout << endl;

        switch(wskazanie_karty)
        {
            case 1:
            do
            {rozdanie_karta1();}
            while ((karta1 == karta2) || (karta1 == karta3) || (karta1 == karta4) || (karta1 == karta5));
            break;
        case 2:
            do
            {rozdanie_karta2();}
            while ((karta2 == karta1) || (karta2 == karta3) || (karta2 == karta4) || (karta2 == karta5));
            break;
        case 3:
            do
            {rozdanie_karta3();}
            while ((karta3 == karta1) || (karta3 == karta2) || (karta3 == karta4) || (karta3 == karta5));
            break;
        case 4:
            do
            {rozdanie_karta4();}
            while ((karta4 == karta1) || (karta4 == karta2) || (karta4 == karta3) || (karta4 == karta5));
            break;
        case 5:
            do
            {rozdanie_karta1();}
            while ((karta5 == karta1) || (karta5 == karta2) || (karta5 == karta3) || (karta5 == karta4));
            break;
        }
    }
}

void ocena_ukladu() // ocena ukˆadu / nazwanie wyˆo¾onego przez u¾ytkownika ukˆadu
{
    while (true)
    {
    //poker kr¢lewski
        if((ustaw1 == PIK10) && (ustaw2 == PIK_J) && (ustaw3 == PIK_Q) && (ustaw4 == PIK_K) && (ustaw5 == PIK_As))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker Kr¢lewski" << endl; break;}
        else if ((ustaw1 == TREFL10) && (ustaw2 == TREFL_J) && (ustaw3 == TREFL_Q) && (ustaw4 == TREFL_K) && (ustaw5 == TREFL_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker Kr¢lewski" << endl; break;}
        else if ((ustaw1 == KARO10) && (ustaw2 == KARO_J) && (ustaw3 == KARO_Q) && (ustaw4 == KARO_K) && (ustaw5 == KARO_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker Kr¢lewski" << endl; break;}
        else if ((ustaw1 == KIER10) && (ustaw2 == KIER_J) && (ustaw3 == KIER_Q) && (ustaw4 == KIER_K) && (ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker Kr¢lewski" << endl; break;}
        else if ((ustaw1 == PIK_As) && (ustaw2 == PIK_K) && (ustaw3 == PIK_Q) && (ustaw4 == PIK_J) && (ustaw5 == PIK10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker Kr¢lewski" << endl; break;}
        else if ((ustaw1 == TREFL_A) && (ustaw2 == TREFL_K) && (ustaw3 == TREFL_Q) && (ustaw4 == TREFL_J) && (ustaw5 == TREFL10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker Kr¢lewski" << endl; break;}
        else if ((ustaw1 == KARO_A) && (ustaw2 == KARO_K) && (ustaw3 == KARO_Q) && (ustaw4 == KARO_J) && (ustaw5 == KARO10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker Kr¢lewski" << endl; break;}
        else if ((ustaw1 == KIER_A) && (ustaw2 == KIER_K) && (ustaw3 == KIER_Q) && (ustaw4 == KIER_J) && (ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker Kr¢lewski" << endl; break;}

    //poker
        else if ((ustaw1 == PIK9) && (ustaw2 == PIK10) && (ustaw3 == PIK_J) && (ustaw4 == PIK_Q) && (ustaw5 == PIK_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker" << endl; break;}
        else if ((ustaw1 == TREFL9) && (ustaw2 == TREFL10) && (ustaw3 == TREFL_J) && (ustaw4 == TREFL_Q) && (ustaw5 == TREFL_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker" << endl; break;}
        else if ((ustaw1 == KARO9) && (ustaw2 == KARO10) && (ustaw3 == KARO_J) && (ustaw4 == KARO_Q) && (ustaw5 == KARO_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker" << endl; break;}
        else if ((ustaw1 == KIER9) && (ustaw2 == KIER10) && (ustaw3 == KIER_J) && (ustaw4 == KIER_Q) && (ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker" << endl; break;}
        else if ((ustaw1 == PIK_K) && (ustaw2 == PIK_Q) && (ustaw3 == PIK_J) && (ustaw4 == PIK10) && (ustaw5 == PIK9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker" << endl; break;}
        else if ((ustaw1 == TREFL_K) && (ustaw2 == TREFL_Q) && (ustaw3 == TREFL_J) && (ustaw4 == TREFL10) && (ustaw5 == TREFL9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker" << endl; break;}
        else if ((ustaw1 == KARO_K) && (ustaw2 == KARO_Q) && (ustaw3 == KARO_J) && (ustaw4 == KARO10) && (ustaw5 == KARO9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker" << endl; break;}
        else if ((ustaw1 == KIER_K) && (ustaw2 == KIER_Q) && (ustaw3 == KIER_J) && (ustaw4 == KIER10) && (ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Poker" << endl; break;}

    //kareta
        else if ((ustaw1 == PIK9 || ustaw2 == PIK9 || ustaw3 == PIK9 || ustaw4 == PIK9) &&
                 (ustaw1 == TREFL9 || ustaw2 == TREFL9 || ustaw3 == TREFL9 || ustaw4 == TREFL9) &&
                 (ustaw1 == KARO9|| ustaw2 == KARO9|| ustaw3 == KARO9|| ustaw4 == KARO9) &&
                 (ustaw1 == KIER9 || ustaw2 == KIER9 || ustaw3 == KIER9 || ustaw4 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw1 == PIK10|| ustaw2 == PIK10 || ustaw3 == PIK10 || ustaw4 == PIK10) &&
                 (ustaw1 == TREFL10 || ustaw2 == TREFL10 || ustaw3 == TREFL10 || ustaw4 == TREFL10) &&
                 (ustaw1 == KARO10 || ustaw2 == KARO10 || ustaw3 == KARO10 || ustaw4 == KARO10) &&
                 (ustaw1 == KIER10 || ustaw2 == KIER10 || ustaw3 == KIER10 || ustaw4 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw2 == PIK_J || ustaw3 == PIK_J || ustaw4 == PIK_J) &&
                 (ustaw1 == TREFL_J || ustaw2 == TREFL_J || ustaw3 == TREFL_J || ustaw4 == TREFL_J) &&
                 (ustaw1 == KARO_J || ustaw2 == KARO_J || ustaw3 == KARO_J || ustaw4 == KARO_J) &&
                 (ustaw1 == KIER_J || ustaw2 == KIER_J || ustaw3 == KIER_J || ustaw4 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw2 == PIK_Q || ustaw3 == PIK_Q|| ustaw4 == PIK_Q) &&
                 (ustaw1 == TREFL_Q || ustaw2 == TREFL_Q || ustaw3 == TREFL_Q || ustaw4 == TREFL_Q) &&
                 (ustaw1 == KARO_Q || ustaw2 == KARO_Q || ustaw3 == KARO_Q || ustaw4 == KARO_Q) &&
                 (ustaw1 == KIER_Q || ustaw2 == KIER_Q || ustaw3 == KIER_Q || ustaw4 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw2 == PIK_K || ustaw3 == PIK_K || ustaw4 == PIK_K) &&
                 (ustaw1 == TREFL_K || ustaw2 == TREFL_K || ustaw3 == TREFL_K || ustaw4 == TREFL_K) &&
                 (ustaw1 == KARO_K || ustaw2 == KARO_K || ustaw3 == KARO_K || ustaw4 == KARO_K) &&
                 (ustaw1 == KIER_K || ustaw2 == KIER_K || ustaw3 == KIER_K || ustaw4 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw2 == PIK_As || ustaw3 == PIK_As || ustaw4 == PIK_As) &&
                 (ustaw1 == PIK_As || ustaw2 == PIK_As || ustaw3 == PIK_As || ustaw4 == TREFL_A) &&
                 (ustaw1 == KARO_A || ustaw2 == KARO_A || ustaw3 == KARO_A || ustaw4 == KARO_A) &&
                 (ustaw1 == KIER_A || ustaw2 == KIER_A || ustaw3 == KIER_A || ustaw4 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw2 == PIK9 || ustaw3 == PIK9 || ustaw4 == PIK9 || ustaw5== PIK9) &&
                 (ustaw2 == TREFL9 || ustaw3 == TREFL9 || ustaw4 == TREFL9 || ustaw5 == TREFL9) &&
                 (ustaw2 == KARO9 || ustaw3 == KARO9 || ustaw4 == KARO9 || ustaw5 == KARO9) &&
                 (ustaw2 == KIER9 || ustaw3 == KIER9 || ustaw4 == KIER9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw2 == PIK10 || ustaw3 == PIK10 || ustaw4 == PIK10 || ustaw5 == PIK10) &&
                 (ustaw2 == TREFL10 || ustaw3 == TREFL10 || ustaw4 == TREFL10 || ustaw5 == TREFL10) &&
                 (ustaw2 == KARO10 || ustaw3 == KARO10 || ustaw4 == KARO10 || ustaw5 == KARO10) &&
                 (ustaw2 == KIER10 || ustaw3 == KIER10 || ustaw4 == KIER10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw2 == PIK_J || ustaw3 == PIK_J || ustaw4 == PIK_J || ustaw5 == PIK_J) &&
                 (ustaw2 == TREFL_J || ustaw3 == TREFL_J || ustaw4 == TREFL_J || ustaw5 == TREFL_J) &&
                 (ustaw2 == KARO_J || ustaw3 == KARO_J || ustaw4 == KARO_J || ustaw5 == KARO_J) &&
                 (ustaw2 == KIER_J || ustaw3 == KIER_J || ustaw4 == KIER_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw2 == PIK_Q || ustaw3 == PIK_Q || ustaw4 == PIK_Q || ustaw5 == PIK_Q) &&
                 (ustaw2 == TREFL_Q || ustaw3 == TREFL_Q || ustaw4 == TREFL_Q || ustaw5 == TREFL_Q) &&
                 (ustaw2 == KARO_Q || ustaw3 == KARO_Q || ustaw4 == KARO_Q || ustaw5 == KARO_Q) &&
                 (ustaw2 == KIER_Q || ustaw3 == KIER_Q || ustaw4 == KIER_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw2 == PIK_K || ustaw3 == PIK_K || ustaw4 == PIK_K || ustaw5 == PIK_K) &&
                 (ustaw2 == TREFL_K || ustaw3 == TREFL_K || ustaw4 == TREFL_K || ustaw5 == TREFL_K) &&
                 (ustaw2 == KARO_K || ustaw3 == KARO_K || ustaw4 == KARO_K || ustaw5 == KARO_K) &&
                 (ustaw2 == KIER_K || ustaw3 == KIER_K || ustaw4 == KIER_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}
        else if ((ustaw2 == PIK_As || ustaw3 == PIK_As || ustaw4 == PIK_As || ustaw5 == PIK_As) &&
                 (ustaw2 == TREFL_A || ustaw3 == TREFL_A || ustaw4 == TREFL_A || ustaw5 == TREFL_A) &&
                 (ustaw2 == KARO_A || ustaw3 == KARO_A || ustaw4 == KARO_A || ustaw5 == KARO_A) &&
                 (ustaw2 == KIER_A || ustaw3 == KIER_A || ustaw4 == KIER_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Kareta" << endl; break;}

    //ful
        if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
            (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
            (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
            (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
            (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 ==  TREFL_A || ustaw1 ==  KARO_A || ustaw1 == KIER_A) &&
                (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 ==  TREFL_A || ustaw1 ==  KARO_A || ustaw1 == KIER_A) &&
                (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                (ustaw4 == PIK10 || ustaw4 ==  TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                (ustaw5 == PIK10|| ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 ==  TREFL_A || ustaw1 ==  KARO_A || ustaw1 == KIER_A) &&
                (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                (ustaw4 == PIK_As || ustaw4 == TREFL_A|| ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                (ustaw4 == PIK10 || ustaw4 ==  TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                (ustaw5 == PIK10|| ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
       else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                (ustaw4 == PIK_As || ustaw4 == TREFL_A|| ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                (ustaw4 == PIK10 || ustaw4 ==  TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                (ustaw5 == PIK10|| ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As|| ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                (ustaw2 == PIK10 || ustaw2 ==  TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                (ustaw2 == PIK10 || ustaw2 ==  TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                (ustaw2 == PIK10 || ustaw2 ==  TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                (ustaw2 == PIK10 || ustaw2 ==  TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to Ful" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10|| ustaw4 == KIER10) &&
                (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A|| ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A|| ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K|| ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K|| ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K|| ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K|| ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K|| ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K|| ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to FUL" << endl; break;}

    //kolor
         else if ((ustaw1 == PIK_As || ustaw1 == PIK_K || ustaw1 == PIK_Q || ustaw1 == PIK_J || ustaw1 == PIK10 || ustaw1 == PIK9) &&
                  (ustaw2 == PIK_As || ustaw2 == PIK_K || ustaw2 == PIK_Q || ustaw2 == PIK_J || ustaw2 == PIK10 || ustaw2 == PIK9) &&
                  (ustaw3 == PIK_As || ustaw3 == PIK_K || ustaw3 == PIK_Q || ustaw3 == PIK_J || ustaw3 == PIK10 || ustaw3 == PIK9)&&
                  (ustaw4 == PIK_As || ustaw4 == PIK_K || ustaw4 == PIK_Q || ustaw4 == PIK_J || ustaw4 == PIK10 || ustaw4 == PIK9) &&
                  (ustaw5 == PIK_As || ustaw5 == PIK_K || ustaw5 == PIK_Q || ustaw5 == PIK_J || ustaw5 == PIK10 || ustaw5 == PIK9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to KOLOR" << endl; break;}
        else if ((ustaw1 == TREFL_A || ustaw1 == TREFL_K || ustaw1 == TREFL_Q || ustaw1 == TREFL_J || ustaw1 == TREFL10 || ustaw1 == TREFL9) &&
                 (ustaw2 == TREFL_A || ustaw2 == TREFL_K || ustaw2 == TREFL_Q || ustaw2 == TREFL_J || ustaw2 == TREFL10 || ustaw2 == TREFL9) &&
                 (ustaw3 == TREFL_A || ustaw3 == TREFL_K || ustaw3 == TREFL_Q || ustaw3 == TREFL_J || ustaw3 == TREFL10 || ustaw3 == TREFL9) &&
                 (ustaw4 == TREFL_A || ustaw4 == TREFL_K || ustaw4 == TREFL_Q || ustaw4 == TREFL_J || ustaw4 == TREFL10 || ustaw4 == TREFL9) &&
                 (ustaw5 == TREFL_A || ustaw5 == TREFL_K || ustaw5 == TREFL_Q || ustaw5 == TREFL_J || ustaw5 == TREFL10 || ustaw5 == TREFL9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to KOLOR" << endl; break;}
        else if ((ustaw1 == KARO_A || ustaw1 == KARO_K || ustaw1 == KARO_Q || ustaw1 == KARO_J || ustaw1 == KARO10 || ustaw1 == KARO9) &&
                 (ustaw2 == KARO_A || ustaw2 == KARO_K || ustaw2 == KARO_Q || ustaw2 == KARO_J || ustaw2 == KARO10 || ustaw2 == KARO9) &&
                 (ustaw3 == KARO_A || ustaw3 == KARO_K || ustaw3 == KARO_Q || ustaw3 == KARO_J || ustaw3 == KARO10 || ustaw3 == KARO9) &&
                 (ustaw4 == KARO_A || ustaw4 == KARO_K || ustaw4 == KARO_Q || ustaw4 == KARO_J || ustaw4 == KARO10 || ustaw4 == KARO9) &&
                 (ustaw5 == KARO_A || ustaw5 == KARO_K || ustaw5 == KARO_Q || ustaw5 == KARO_J || ustaw5 == KARO10 || ustaw5 == KARO9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to KOLOR" << endl; break;}
        else if ((ustaw1 == KIER_A || ustaw1 == KIER_K || ustaw1 == KIER_Q || ustaw1 == KIER_J || ustaw1 == KIER10 || ustaw1 == KIER9) &&
                 (ustaw2 == KIER_A || ustaw2 == KIER_K || ustaw2 == KIER_Q || ustaw2 == KIER_J || ustaw2 == KIER10 || ustaw2 == KIER9) &&
                 (ustaw3 == KIER_A || ustaw3 == KIER_K || ustaw3 == KIER_Q || ustaw3 == KIER_J || ustaw3 == KIER10 || ustaw3 == KIER9) &&
                 (ustaw4 == KIER_A || ustaw4 == KIER_K || ustaw4 == KIER_Q || ustaw4 == KIER_J || ustaw4 == KIER10 || ustaw4 == KIER9) &&
                 (ustaw5 == KIER_A || ustaw5 == KIER_K || ustaw5 == KIER_Q || ustaw5 == KIER_J || ustaw5 == KIER10 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to KOLOR" << endl; break;}

    //strit
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to STRIT" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to STRIT" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to STRIT" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to STRIT" << endl; break;}

    //tr¢jka
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}
        else if ((ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to TRàJKA" << endl; break;}

    //dwie pary
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q|| ustaw4 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_J || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
         else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                  (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                  (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                  (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || TREFL_K || KARO_K || KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_J || ustaw2 == KIER_A) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
         else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                  (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                  (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                  (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || TREFL10 || KARO10 || KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_J || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
         else if ((ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                  (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                  (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                  (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}
        else if ((ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to DWIE PARY" << endl; break;}

    //para
        else if ((ustaw1 == PIK_As || ustaw1 == TREFL_A || ustaw1 == KARO_A || ustaw1 == KIER_A) &&
                 (ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw1 == PIK_K || ustaw1 == TREFL_K || ustaw1 == KARO_K || ustaw1 == KIER_K) &&
                 (ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw1 == PIK_Q || ustaw1 == TREFL_Q || ustaw1 == KARO_Q || ustaw1 == KIER_Q) &&
                 (ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw1 == PIK_J || ustaw1 == TREFL_J || ustaw1 == KARO_J || ustaw1 == KIER_J) &&
                 (ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw1 == PIK10 || ustaw1 == TREFL10 || ustaw1 == KARO10 || ustaw1 == KIER10) &&
                 (ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw1 == PIK9 || ustaw1 == TREFL9 || ustaw1 == KARO9 || ustaw1 == KIER9) &&
                 (ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw2 == PIK_As || ustaw2 == TREFL_A || ustaw2 == KARO_A || ustaw2 == KIER_A) &&
                 (ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw2 == PIK_K || ustaw2 == TREFL_K || ustaw2 == KARO_K || ustaw2 == KIER_K) &&
                 (ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw2 == PIK_Q || ustaw2 == TREFL_Q || ustaw2 == KARO_Q || ustaw2 == KIER_Q) &&
                 (ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw2 == PIK_J || ustaw2 == TREFL_J || ustaw2 == KARO_J || ustaw2 == KIER_J) &&
                 (ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw2 == PIK10 || ustaw2 == TREFL10 || ustaw2 == KARO10 || ustaw2 == KIER10) &&
                 (ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw2 == PIK9 || ustaw2 == TREFL9 || ustaw2 == KARO9 || ustaw2 == KIER9) &&
                 (ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw3 == PIK_As || ustaw3 == TREFL_A || ustaw3 == KARO_A || ustaw3 == KIER_A) &&
                 (ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw3 == PIK_K || ustaw3 == TREFL_K || ustaw3 == KARO_K || ustaw3 == KIER_K) &&
                 (ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw3 == PIK_Q || ustaw3 == TREFL_Q || ustaw3 == KARO_Q || ustaw3 == KIER_Q) &&
                 (ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw3 == PIK_J || ustaw3 == TREFL_J || ustaw3 == KARO_J || ustaw3 == KIER_J) &&
                 (ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw3 == PIK10 || ustaw3 == TREFL10 || ustaw3 == KARO10 || ustaw3 == KIER10) &&
                 (ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw3 == PIK9 || ustaw3 == TREFL9 || ustaw3 == KARO9 || ustaw3 == KIER9) &&
                 (ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw4 == PIK_As || ustaw4 == TREFL_A || ustaw4 == KARO_A || ustaw4 == KIER_A) &&
                 (ustaw5 == PIK_As || ustaw5 == TREFL_A || ustaw5 == KARO_A || ustaw5 == KIER_A))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw4 == PIK_K || ustaw4 == TREFL_K || ustaw4 == KARO_K || ustaw4 == KIER_K) &&
                 (ustaw5 == PIK_K || ustaw5 == TREFL_K || ustaw5 == KARO_K || ustaw5 == KIER_K))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw4 == PIK_Q || ustaw4 == TREFL_Q || ustaw4 == KARO_Q || ustaw4 == KIER_Q) &&
                 (ustaw5 == PIK_Q || ustaw5 == TREFL_Q || ustaw5 == KARO_Q || ustaw5 == KIER_Q))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw4 == PIK_J || ustaw4 == TREFL_J || ustaw4 == KARO_J || ustaw4 == KIER_J) &&
                 (ustaw5 == PIK_J || ustaw5 == TREFL_J || ustaw5 == KARO_J || ustaw5 == KIER_J))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw4 == PIK10 || ustaw4 == TREFL10 || ustaw4 == KARO10 || ustaw4 == KIER10) &&
                 (ustaw5 == PIK10 || ustaw5 == TREFL10 || ustaw5 == KARO10 || ustaw5 == KIER10))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else if ((ustaw4 == PIK9 || ustaw4 == TREFL9 || ustaw4 == KARO9 || ustaw4 == KIER9) &&
                 (ustaw5 == PIK9 || ustaw5 == TREFL9 || ustaw5 == KARO9 || ustaw5 == KIER9))
        {cout << "Ukˆad, kt¢ry trzymasz w r©ce to PARA" << endl; break;}
        else
        {cout << "Pojedyncza karta" << endl; break;}
}
}

void wymiana_kart() //mo¾liwo˜† wymiany kart + ilo˜ci wymian oraz wskazanie konkretnych kart. Wylosowane nie powtarzaj¥ si©
{
   int wymiana_karty;
   int ilosc_kart;

   cout << endl;

   while (true)
   {
       cout << "Czy chcesz wymieni† karty?" << endl;
       cout << "Wybierz 1, je˜li chcesz wymieni† karty." << endl;
       cout << "Wybierz 2, je˜li nie chcesz wymienia† kart." << endl;
       cout << "Wybieram opcj©: ";
       cin >> wymiana_karty;


       if (wymiana_karty == 1)
        {
            cout << endl;
            cout << "Ile kart chcesz wymieni†?" << endl;
            cout << "Chc© wymieni† nast©puj¥c¥ ilo˜† kart: ";
            cin >> ilosc_kart;
            cout << endl;

            switch(ilosc_kart)
            {
            case 1: jedna_karta(); break;
            case 2: dwie_karty(); break;
            case 3: trzy_karty(); break;
            case 4: cztery_karty(); break;
            case 5: rozdanie_kart(); break;
            }
            break;
        }
        else if (wymiana_karty == 2)
        {break;}
        else
        {cout << "½¥dana opcja nie istnieje." << endl;}
   }
}

void ustawienie_kart() // ustawienie / wyˆo¾enie kart na st¢ˆ - u¾ytkownik samodzielnie wykˆada je w odpowiedniej kolejno˜ci
{
    int kkarta;
    cout << "Ustaw karty w odpowiedniej kolejno˜ci: " << endl;
    cout << endl;

    do
    {
        cout << "Karta na miejscu pierwszym: ";
        cin >> kkarta;

        switch (kkarta)
        {
            case 1: ustaw1 = karta1; cout << "Wybran¥ kart© przypisano do miejsca pierwszego" << endl; break;
            case 2: ustaw1 = karta2; cout << "Wybran¥ kart© przypisano do miejsca pierwszego" << endl; break;
            case 3: ustaw1 = karta3; cout << "Wybran¥ kart© przypisano do miejsca pierwszego" << endl; break;
            case 4: ustaw1 = karta4; cout << "Wybran¥ kart© przypisano do miejsca pierwszego" << endl; break;
            case 5: ustaw1 = karta5; cout << "Wybran¥ kart© przypisano do miejsca pierwszego" << endl; break;
            default: cout << "Karta nie istnieje" << endl; break;
        }

    }
    while (ustaw1 == 0);

    cout << endl;
    nazwa_ustaw1();
    cout << "___ ___ ___ ___" << endl;

    do
    {
        cout << "Karta na miejscu drugim: ";
        cin >> kkarta;

        switch (kkarta)
        {
            case 1: ustaw2 = karta1; break;
            case 2: ustaw2 = karta2; break;
            case 3: ustaw2 = karta3; break;
            case 4: ustaw2 = karta4; break;
            case 5: ustaw2 = karta5; break;
            default: cout << "Karta nie istnieje" << endl; break;
        }

        if (ustaw2 == ustaw1)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu pierwszym. Wybierz inn¥ kart©." << endl;}
        else
        {cout << "Wybran¥ kart© przypisano do miejsca drugiego" << endl;}
    }
    while ((ustaw2 == 0) || (ustaw2 == ustaw1));

    cout << endl;
    nazwa_ustaw1();
    nazwa_ustaw2();
    cout << "___ ___ ___" << endl;

    do
    {
        cout << "Karta na miejscu trzecim: ";
        cin >> kkarta;

        switch (kkarta)
        {
            case 1: ustaw3 = karta1; break;
            case 2: ustaw3 = karta2; break;
            case 3: ustaw3 = karta3; break;
            case 4: ustaw3 = karta4; break;
            case 5: ustaw3 = karta5; break;
            default: cout << "Karta nie istnieje" << endl; break;
        }

        if (ustaw3 == ustaw1)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu pierwszym. Wybierz inn¥ kart©." << endl;}
        else if (ustaw3 == ustaw2)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu drugim. Wybierz inn¥ kart©." << endl;}
        else
        {cout << "Wybran¥ kart© przypisano do miejsca trzeciego." << endl;}
    }
    while ((ustaw3 == 0) || (ustaw3 == ustaw1) || (ustaw3 == ustaw2));

    cout << endl;
    nazwa_ustaw1();
    nazwa_ustaw2();
    nazwa_ustaw3();
    cout << "___ ___" << endl;

    do
    {
        cout << "Karta na miejscu czwartym: ";
        cin >> kkarta;

        switch (kkarta)
        {
            case 1: ustaw4 = karta1; break;
            case 2: ustaw4 = karta2; break;
            case 3: ustaw4 = karta3; break;
            case 4: ustaw4 = karta4; break;
            case 5: ustaw4 = karta5; break;
            default: cout << "Karta nie istnieje" << endl; break;
        }

        if (ustaw4 == ustaw1)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu pierwszym. Wybierz inn¥ kart©." << endl;}
        else if (ustaw4 == ustaw2)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu drugim. Wybierz inn¥ kart©." << endl;}
        else if (ustaw4 == ustaw3)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu trzecim. Wybierz inn¥ kart©." << endl;}
        else
        {cout << "Wybran¥ kart© przypisano do miejsca czwartego." << endl;}
    }
    while ((ustaw4 == 0) || (ustaw4 == ustaw1) || (ustaw4 == ustaw2) || (ustaw4 == ustaw3));

    cout << endl;
    nazwa_ustaw1();
    nazwa_ustaw2();
    nazwa_ustaw3();
    nazwa_ustaw4();
    cout << "___" << endl;

    do
    {
        cout << "Karta na miejscu pi¥tym: ";
        cin >> kkarta;

        switch (kkarta)
        {
            case 1: ustaw5 = karta1; break;
            case 2: ustaw5 = karta2; break;
            case 3: ustaw5 = karta3; break;
            case 4: ustaw5 = karta4; break;
            case 5: ustaw5 = karta5; break;
            default: cout << "Karta nie istnieje" << endl; break;
        }

        if (ustaw5 == ustaw1)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu pierwszym. Wybierz inn¥ kart©." << endl;}
        else if (ustaw5 == ustaw2)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu drugim. Wybierz inn¥ kart©." << endl;}
        else if (ustaw5 == ustaw3)
        {cout << "Wybrana karta znajduje si© ju¾ na miejscu trzecim. Wybierz inn¥ kart©." << endl;}
        else
        {cout << "Wybran¥ kart© przypisano do miejsca pi¥tego." << endl;}
    }
    while ((ustaw5 == 0) || (ustaw5 == ustaw1) || (ustaw5 == ustaw2) || (ustaw5 == ustaw3) || (ustaw5 == ustaw4));
}

int main()
{
    srand(time(NULL));
    int los_koniec;

    cout << "P O K E R" << endl;
    cout << "Witamy w grze pokera!" << endl;
    cout << endl;

    while(true)
    {
        cout << "Wybierz 1, by wylosowa† karty." << endl;
        cout << "Wybierz 2, by zakoäczy† program." << endl;
        cout << "Wybieram: ";
        cin >> los_koniec;

        if (los_koniec == 1)
        {
            rozdanie_kart();
            cout << endl;
            cout << "Wylosowano nast©puj¥ce karty:" << endl;
            nazwa_karty1(); nazwa_karty2(); nazwa_karty3(); nazwa_karty4(); nazwa_karty5();

            cout << endl;

            wymiana_kart();

            cout << endl;
            cout << "Posiadasz teraz nast©puj¥cy ukˆad: " << endl;
            nazwa_karty1();
            nazwa_karty2();
            nazwa_karty3();
            nazwa_karty4();
            nazwa_karty5();
            cout << endl;
            cout << endl;

            ustawienie_kart();

            cout << endl;
            cout << endl;
            cout << "Sprawdzam nast©puj¥cy ukˆad: " << endl;
            nazwa_ustaw1();
            nazwa_ustaw2();
            nazwa_ustaw3();
            nazwa_ustaw4();
            nazwa_ustaw5();
            cout << endl;
            cout << endl;
            ocena_ukladu();
        }
        else if (los_koniec == 2)
        {cout << "Wybrano wyj˜cie z programu. Dzi©kujemy i zapraszamy ponownie" << endl; break;}
        else
        {cout << "Opcja nie istnieje" << endl;}
        cin.sync();
        cin.get();
    }
}
