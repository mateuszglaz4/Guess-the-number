// ConsoleApplication28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdio.h>
using namespace std;
int liczba, strzal, ile_prob = 0;


int main()
{
	cout << "Witaj, pomyslalem liczbe 1...100" << endl;
	srand(time(NULL));
	liczba = rand() % 100 + 1;
	
	while (strzal!=liczba)
	{
		ile_prob++;
		cout << "Zgadnij jaka to liczba (to twoja " << ile_prob << " proba:)";
		cin >> strzal;

		if (strzal == liczba)
			cout << "Gratulacje, wygrywasz w  " << ile_prob << " probie: " << endl;
		else if (strzal < liczba)
			cout << "To za malo" << endl;
		else if (strzal > liczba)
			cout << "To za duzo" << endl;
		
	}
	getchar();
	system("pause");
    return 0;
} 

