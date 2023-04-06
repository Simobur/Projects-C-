#include <iostream>
#include <windows.h>
#include <cstdlib>


using namespace std;
char liczba1;
int ile_liczb;
float suma;

int main()
{
    cout<<"Witaj w programie! Nacisnij ENTER aby kontynuowac";
    getchar();
    system("cls");
    cout<<"Program rozpocznie sie za:...";
    Sleep(3000);
    system("cls");
    cout<<"Program rozpocznie sie za: 3";
    Sleep(1000);
    system("cls");
    cout<<"Program rozpocznie sie za: 2";
    Sleep(1000);
    system("cls");
    cout<<"Program rozpocznie sie za: 1";
    Sleep(1000);
    system("cls");

    cout<<"Ile liczb chcesz podac? ";
    cin >> ile_liczb;
    system("cls");

    int *proby;
    proby=new int[ile_liczb];

        for (int i=0; i<ile_liczb;i++)
        {

            cout<< "Podaj "<<i+1<<" liczbe calkowita: ";
            cin>>proby[i];
            system("cls");
        }

    for (int i=0; i<ile_liczb;i++)
    {
        suma+=proby[i];
    }
    for (;;)
    {


        cout<<"Suma podanych liczb to: "<<suma<<endl<<endl;

        cout<<"Wybierz jaka liczbe mam pokazac:"<<endl;
        cout<<"1. Najwieksza"                   <<endl;
        cout<<"2. Najmniejsza"                  <<endl;
        cout<<"3. Wyjscie z programu"                  <<endl;
        cout<<"Podaj numer funkcji: ";

        int opcja;
        cin>>opcja;
        int *w;
        w=proby;
        float m = 0;

        switch (opcja)
        {
            case 1:
                {
                    for (int i=0;i<ile_liczb;i++)
                    {
                        if (m<*w+i) m=*w;
                        w++;
                    }
                    cout<<"Najwieksza podana liczba to: "<<m;
                    cout<<endl<<"Nacisnij ENTER aby kontynuowac";
                    getchar(); getchar();
                }
            break;

            case 2:
                {
                    for (int i=0;i<ile_liczb;i++)
                    {
                        if (m>*w+i) m=*w;
                        w++;
                    }
                    cout<<"Najmniejsza podana liczba to: "<<m;
                    cout<<endl<<"Nacisnij ENTER aby kontynuowac";
                     getchar(); getchar();
                }
            break;
            case 3:
                {
                    cout <<"Zegnaj!";
                    Sleep (2000);
                    exit(0);
                }
            break;
            default: cout<<"Nie ma takiej opcji, wybierz ponownie: ";
                    cout<<endl<<"Nacisnij ENTER aby kontynuowac";
             getchar(); getchar();
        }

        system("cls");
    }


    delete [] proby;





    return 0;
}
