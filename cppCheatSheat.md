## C++ Cheatsheet 

#### Proměnné
Vytvoření **proměnných** `celeCislo`, `desCislo`, `vDesCislo`, `znak` a `retezec`:

```cpp
int celeCislo = 5;		    // datovy typ int znaci cele cislo
float desCislo = 3.141592;	// datovy typ float znaci desetinne cislo
double vDesCislo = 2.718281;  // dat. typ double pojme velmi male i velmi velka cisla
char znak = 'r';
string retezec = "Klidne cela veta."; // dat. typ na mnoho znaku, potreba #include <string>

```
#### Podmínky
Slouží k větvení kódu ‒ když chci, aby se kus kódu spustil v závislosti na proměnných | obecně:
```cpp
if (podmínka1) {
	když *platí* podmína1 ‒> proveď tento blok
} else if (podmínka2) {
	když *platí* podmínka2 ‒> proveď tento blok
} else {
	když *neplatí* ani jedna podmínla ‒> proveď tento blok
}

```

Konkrétní příkaz 'if' pro rozhodnutí, jestli je číslo kladné, nebo záporné: 
```cpp
if (a > 0) {
	cout << "Číslo je kladné." << endl;
} else if (a < 0) {
	cout << "Číslo je záporné." << endl;
} else {
	cout << "Číslo je nula." << endl;
}
```

#### Cykly
Když chci něco **dělat opakovaně** (a dokonce s různými čísly), použiji `for` | obecně:

```cpp
for (ridici promenna; podminka; zmena) {
	co se ma delat;
}

```

Konkrétní příklad `for` pro vypsání `i` začínající na hodnotě `zacatek` a končící před hodnotou `konec`:

```cpp
for (int i = zacatek; i < konec; i++) {
	cout << i << endl;
}

```
#### Funkce
**Funkce** slouží k osamostatnění kódu. Je to krabička, která dostane 0 až mnoho proměnných jako vstup a nevrátí nic, nebo jednu proměnnou (výstup). 

Musime předem říct, jakého datového typu co bude. Obecně:

```cpp
typ_co_fce_vraci jmenoFce (typProm1 vstupniPromenna1, typProm2 vstupniPromenna...)
{
	co se ma delat;
	return vysledekFce;
}

```

Konkrétní příklad funkce `soucin` co na vstupu dostane 2 celá čísla (typ `int`) a vrátí na výstupu jejich součin (typ `int`):

```cpp
int soucin (int cislo1, cislo2)
{
	int vysledek = cislo1 * cislo2;
	return vysledek;
}

```

#### Čtení a výpis z konzole

Slouží pro primitivní načítání vstupu od uživatele a výpis dat skrze konzoli | obecně:
```cpp
cin >> prměnná; // načtení hodnoty z konzole do proměnné

cout << co vypsat << co dál vypsat << ... << vypiš si toho kolik chceš; // výpis textu, i proměnných
```

Konkrétně příklad načtení čísla a písmena a jehich následné vypsání:
```cpp
int cislo;
char znak;
cin >> cislo;
cin >> znak;
cout << "Načten znak " << znak << " a číslo " << cislo << endl; // endl odřádkuje ("ENTER")
```

<div style="text-align: right; color: grey"> ® Ronald Luc</div>
