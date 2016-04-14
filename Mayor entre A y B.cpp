/* Mayor entre A y B
* Gustavo Estrella
* 10/04/2016
*/

#include <iostream>

int main() {

int a,b;

//Ingresos del Usuario:
std::cout << "-------Quien es mayor? A o B ?------\n\n\nIngrese A: ";
std::cin >> a;

std::cout << "Ingrese B: "; 
std::cin >> b;


//Procesos del Programa:
if (a>b) { std::cout << "A es mayor que B "; }

else if (b>a)  { std::cout << "B es mayor que A "; }

else { std::cout << "A y B, son iguales "; }


}
