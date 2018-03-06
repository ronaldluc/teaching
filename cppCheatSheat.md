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
#### Cykly
Když chci něco **dělat opakovaně** (a dokonce s různými čísly), použiji `for` | obecně:

```cpp
for (ridici promenna; podminka; zmena) {
	co se ma delat;
}

```
#### 
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

<div style="text-align: right; color: grey"> ® Ronald Luc</div>