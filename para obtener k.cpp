#include <iostream>
#include <math.h>
#ifdef _WIN32 || _WIN64
const char os_name = 'W';
#include <windows.h>
#endif
/*
Programa para mandar un valor de un ángulo en radianes al rango [0,2π)
equivalente para poder ser usado cómo argumento de la forma polar de
un número complejo.
*/
int main(int argc, char **argv)
{
	if (os_name == 'W') SetConsoleOutputCP(65001); //sin esto en Windows los tildes se muestran mal
	double entrada;
	if (argc > 1)
	{
		entrada = std::atof(argv[1]);
		
	} else {
		std::cerr << "Error: No ingresaste ningún valor al programa" << std::endl;
		return 1;
	}
	std::cout << "Entrada: " << entrada << std::endl;
	int C = 0; //contador
	while (entrada >= 2*M_PI)
	{
		entrada -= 2*M_PI;
		C++; // B)
	}
	while (entrada < 0)
	{
		entrada += 2*M_PI;
		C++;
	}
	std::cout << "Salida: " << entrada << std::endl;
	std::cout << "Salida como múltiplo de pi: " << entrada/M_PI << "*pi" << std::endl;
	std::cout << "Valor de k: " << C << std::endl;
	return 0;
}
