// anstossende_partygaeste.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//https://www.programmieraufgaben.ch/aufgabe/anstossende-partygaeste/b2jrq8pb

#include <iostream>

using namespace std;
int erwartete_gaeste;

int anstoss(const int& gaeste);

int main()
{
    cout << "Wie viele leute kommen? ";
    cin >> erwartete_gaeste;
    cout << anstoss(2) << " mal Prost";
}

int anstoss(const int& gaeste)
{
    //n*(n-1)/2
    if (gaeste < erwartete_gaeste)
    {
        return (gaeste * (gaeste - 1) / 2) + anstoss(gaeste + 1);
    }
    return gaeste * (gaeste - 1) / 2;
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
