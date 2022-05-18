#include <iostream>
#include <cstdlib>
#include <ctime>

#include "fragen.hpp"

int main(int agrc, char* argv[]) {
	// Initialisierung der Zufallszahl
	srand(time(NULL));
	// Anzahl der Fragen bestimmen
	int anzahl = sizeof(fragen) / sizeof(fragen[0]);
	// Zufällige Frage auswählen
	int frage = rand() % anzahl;
	// Frage stellen
	std::cout << fragen[frage][0] << std::endl;
	// Warte auf Eingabe
	std::string eingabe = "";
	std::cout << "Deine Antwort: ";
	std::getline(std::cin, eingabe);
	// Zeige die Antwort
	std::cout << "Richtige Antwort: " << fragen[frage][1] << std::endl;
	return 0;
}
