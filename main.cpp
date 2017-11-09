//
//  main.cpp
//  Primfaktorzerlegung
//
//  Created by Alexandr Padalko on 09.11.2017.
//  Copyright © 2017 Alexandr Padalko. All rights reserved.
//

#include <iostream>
using namespace std;


bool isPrim(int);


int main(int argc, const char * argv[]) {
    
    
    int zahl;
    int x = 2;

    cout << "Geben mir Zahl ein: ";
    cin >> zahl;
    
    if(isPrim(zahl))
    {
        cout << "Es ist Primzahl! Rechnung beendet." << endl;
    }
    else
    {
        do {
            if (!isPrim(zahl)&&((zahl%x)==0)) {
                zahl = zahl/x;
                cout << x << endl;
                x=2;
            }
            else if (isPrim(zahl)){
                //ist schon Prim? Bum! Rauhs!))
                cout << zahl << endl;
                cout << "Rechnung Ende!" << endl;
                zahl = 0;
                
            }
            else {
                x++;
            }
        } while (zahl!=0);
    }
    
    
    
}




bool isPrim(int a)
{
    int x = a;
    int erg = true;
    if((x%2)==0)
    {
        erg = false;
    }
    else
    {
        for(int i = 2; i<x;i++ )
        {
            if((x%i) == 0)
            {
                erg = false;
                i = x -1;
            }
        }
    }
    return (erg);
    
}


