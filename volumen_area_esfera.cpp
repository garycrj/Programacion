// volumen_area_esfera.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "conio.h"

using namespace std;

int main()
{
	float d,volumen,r,area;

	cout << "Ingrese diametro de esfera: ";
	     cin >> d;

	r = (d/2);
	volumen = (4*3.1416*r*r*r)/3;
	area = (4*3.1416*r*r);

	cout << "El volumen de la esfera es: " << volumen << endl;
	cout << "El area de la esfera es: " << area << endl;


	getch();
	return 0;
}

