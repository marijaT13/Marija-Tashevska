// Marija Tashevska INKI 808
//- zadaca 24, kodiranje i dekodiranje na vnesen tekst
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string kodiranje(string tekst)
{

    for (int i = 0; i < tekst.length(); i++)
    {
        if ((tekst[i] >= 'Y' && tekst[i] <= 'Z') || (tekst[i] >= 'y' && tekst[i] <= 'z'))
        {

            tekst.replace(tekst.begin(), tekst.end(), 'Y', 'B');
            tekst.replace(tekst.begin(), tekst.end(), 'Z', 'A');
            tekst.replace(tekst.begin(), tekst.end(), 'y', 'b');
            tekst.replace(tekst.begin(), tekst.end(), 'z', 'a');
        }
        else {
            if ((tekst[i] >= 'A' && tekst[i] <= 'X') || (tekst[i] >= 'a' && tekst[i] <= 'x'))
            {
                if (i % 2 == 0)
                {
                    tekst[i] = tekst[i] + 4; git commit - m 'pomestuvanje na bukva za 4 ponapred od nea'
                }
            }
            else
            {

                if (tekst[i] >= '0' && tekst[i] <= '9')
                {


                    if (tekst[i] == '0') git commit - m 'zamena na brojkite so bukvi'
                    {
                        tekst[i] = 'a';
                    }
                    else
                    {
                        if (tekst[i] == '1')
                        {
                            tekst[i] = 'b';
                        }
                        else {
                            if (tekst[i] == '2')
                            {
                                tekst[i] = 'c';
                            }
                            else {
                                if (tekst[i] == '3')
                                {
                                    tekst[i] = 'd';
                                }
                                else
                                {
                                    if (tekst[i] == '4')
                                    {
                                        tekst[i] = 'e';
                                    }
                                    else
                                    {
                                        if (tekst[i] == '5')git commit - m'zamena na brojkite so interpunkciski znaci'
                                        {
                                            tekst[i] = '_';
                                        }
                                        else
                                        {
                                            if (tekst[i] == '6')
                                            {
                                                tekst[i] = '!';
                                            }
                                            else
                                            {
                                                if (tekst[i] == '7')
                                                {
                                                    tekst[i] = '?';
                                                }
                                                else
                                                {
                                                    if (tekst[i] == '8')
                                                    {
                                                        tekst[i] = '@';
                                                    }
                                                    else
                                                    {
                                                        if (tekst[i] == '9')
                                                        {
                                                            tekst[i] = '&';
                                                        }

                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }


        }
    }
    return tekst;
}
string dekodiranje(string tekst)
{
    for (int i = 0; i < tekst.length(); i++)
    {
        if ((tekst[i] >= 'Y' && tekst[i] <= 'Z') || (tekst[i] >= 'y' && tekst[i] <= 'z'))
        {

            tekst.replace(tekst.begin(), tekst.end(), 'Y', 'B');
            tekst.replace(tekst.begin(), tekst.end(), 'Z', 'A');
            tekst.replace(tekst.begin(), tekst.end(), 'y', 'b');
            tekst.replace(tekst.begin(), tekst.end(), 'z', 'a');
        }
        else
        {
            if ((tekst[i] >= 'A' && tekst[i] <= 'X') || (tekst[i] >= 'a' && tekst[i] <= 'x'))
            {
                if (i % 2 == 0)
                {
                    tekst[i] = (char)((int)tekst[i] - 4); git commit - m'za vrakjanje 4 nazad'
                }
            }
            else
            {
                if (tekst[i] >= '0' && tekst[i] <= '9')
                {


                    if (tekst[i] == '9')
                    {
                        tekst[i] = '&';
                    }
                    else
                    {
                        if (tekst[i] == '2')
                        {
                            tekst[i] = 'c';
                        }
                        else {
                            if (tekst[i] == '1')
                            {
                                tekst[i] = 'b';
                            }
                            else {
                                if (tekst[i] == '4')
                                {
                                    tekst[i] = 'e';
                                }
                                else
                                {
                                    if (tekst[i] == '3')
                                    {
                                        tekst[i] = 'd';
                                    }
                                    else
                                    {
                                        if (tekst[i] == '6')
                                        {
                                            tekst[i] = '!';
                                        }
                                        else
                                        {
                                            if (tekst[i] == '5')
                                            {
                                                tekst[i] = '_';
                                            }
                                            else
                                            {
                                                if (tekst[i] == '8')
                                                {
                                                    tekst[i] = '@';
                                                }
                                                else
                                                {
                                                    if (tekst[i] == '7')
                                                    {
                                                        tekst[i] = '?';
                                                    }
                                                    else
                                                    {
                                                        if (tekst[i] == '0')
                                                        {
                                                            tekst[i] = 'a';
                                                        }

                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }

    }
    return tekst;
}



int main(int argc, char* argv[])
{
    string tekst;
    int n;
    cout << "Vnesete tekst/ rechenica koj/a sakate da se kodira ili dekodira, voedno zavrshuvajki ja so '.' :";
    cout << "\n";
    getline(cin, tekst, '.');
    cout << "Vnesete 0 za vneseniot tekst da se kodira  ili 1 za tekstot da se dekodira:";
    cout << "\n";
    cin >> n;
    if (n == 0)
    {
        cout << "Vie izbravte tekstot da se kodira.";
        cout << "\n";
        cout << "Kodiraniot tekst izgleda vaka: \n";
        cout << kodiranje(tekst);
        cout << ".";
    }
    else
    {
        if (n == 1)
        {
            cout << "Vie izbravte tekstot da se dekodira.";
            cout << "\n";
            cout << "Dekodiraniot tekst izgleda vaka: \n";
            cout << dekodiranje(tekst);
            cout << ".";
        }
        else
        {

            cout << "Toa meni ne postoi!";
            cout << "\n";
        }
    }
    cout << "\n";
    system("PAUSE");
    return EXIT_SUCCESS;
}

