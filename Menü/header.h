#ifndef SPIEL_HEADER
#define SPIEL_HEADER

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>

//Main
void main_spiele_einlesen();
void main_spiele_sortieren();
void main_spiele_sortieren_bubblesort();
void main_spiele_sortieren_quicksort();
//Liste
void liste_hinzufuegen();
void liste_hinzufuegen_daten();
void liste_anzeigen();
void liste_loeschen();
void hex();
//Sortieren
void liste_bubblesort();
void liste_quicksort();
void liste_feld_tauschen();
//Einlesen
void daten_einlesen_eingabe();
void daten_einlesen_datei();
//Datei
void datei_daten_lesen();
void datei_daten_schreiben();

typedef struct m_spiel
{
  char name[30];
  char genre[30];
  int preis;
  char datum[20];

  struct m_spiel *davor;
  struct m_spiel *danach;
} t_spiel;

typedef struct
{
  char name[30];
  char genre[30];
  int preis;
  char datum[20];

  t_spiel *mom, *erster, *letzter;
} t_feld;

int anzahl_spiele;

#endif
