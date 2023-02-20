// Taschen_Rechner2_c++.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>

using namespace std;

int main()
{
	float zahl1, zahl2;
	char op;
	cout << "2 Zahlen mit Operator dazwischen [+-*/]: ";
	cin >> zahl1 >> op >> zahl2;
	cout << zahl1 << op << zahl1 << "=";
	switch (op)
	{
	case '+':
		cout << zahl1 + zahl1 << '\n';
		break;

	case '-':
		cout << zahl1 - zahl1 << '\n';
		break;
	case '*':
		cout << zahl1 * zahl1 << '\n';
		break;
	
	case '/':
		if (zahl2 == 0)
			cout << "Div durch 0 geht nicht\n";
		else
			cout << zahl1 / zahl2 << '\n';
		break;
	default:
		cout << "Den Opereator kenne ich nicht\n";

	}
}

// Programm ausführen: STRG+F5 oder Menüeintrag "Debuggen" > "Starten ohne Debuggen starten"
// Programm debuggen: F5 oder "Debuggen" > Menü "Debuggen starten"

// Tipps für den Einstieg: 
//   1. Verwenden Sie das Projektmappen-Explorer-Fenster zum Hinzufügen/Verwalten von Dateien.
//   2. Verwenden Sie das Team Explorer-Fenster zum Herstellen einer Verbindung mit der Quellcodeverwaltung.
//   3. Verwenden Sie das Ausgabefenster, um die Buildausgabe und andere Nachrichten anzuzeigen.
//   4. Verwenden Sie das Fenster "Fehlerliste", um Fehler anzuzeigen.
//   5. Wechseln Sie zu "Projekt" > "Neues Element hinzufügen", um neue Codedateien zu erstellen, bzw. zu "Projekt" > "Vorhandenes Element hinzufügen", um dem Projekt vorhandene Codedateien hinzuzufügen.
//   6. Um dieses Projekt später erneut zu öffnen, wechseln Sie zu "Datei" > "Öffnen" > "Projekt", und wählen Sie die SLN-Datei aus.
