#include <iostream>
#include <random>
#include <time.h>

using namespace std;
int proby = 6;

int main() {


        clock_t start, stop;
        double czas;

        random_device liczbaw;  
        mt19937 gen(liczbaw());  
        uniform_int_distribution<> dist(-100,100);

        random_device liczbad;  
        mt19937 sgen(liczbad());          
        uniform_int_distribution<> sdist(-100,100);
    
        int liczba1 = dist(gen);
        int liczba2 = sdist(sgen);
        int odp_gracza;
        char op = "+-"[uniform_int_distribution<int>(0, 1)(gen)];
    
        start=clock();

        cout<<"oblicz: "<<liczba1<<" "<< op <<" "<<liczba2<<" ";
        cin>>odp_gracza;

        if(op=='+') {
            if(odp_gracza==liczba1+liczba2){
                cout<<"Poprawna odpowiedz"<<endl;
            } else {
                cout<<"Niestety poprawna odpowiedz to: "<<liczba1+liczba2<<endl;
        }
        } else if (op=='-') {
            if (odp_gracza==liczba1-liczba2) {
                cout<<"Poprawna odpowiedz"<<endl;
            } else {
                cout<<"Niestety poprawna odpowiedz to: "<<liczba1-liczba2<<endl;
        }
    }

        stop=clock();
        czas=(double)(stop-start) / CLOCKS_PER_SEC;
        cout<<"twoj czas: "<<czas<<"s"<<endl;


    return 0;
}
