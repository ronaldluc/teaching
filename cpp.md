# Céé plus plus

## 4. hodina

1. naprogramovat `void drawLine(int length)`
```cpp
drawLine(5);
```

```bash
> #####
```
2. naprogramovat `void drawSquare(int side)`

```cpp
drawSquare(3);
```

```bash
> ###
> ###
> ###
```
3. naprogramovat `void drawRectangle(int a, int b)`

```cpp
drawRectangle(2, 4);
```

```bash
> ##
> ##
> ##
> ##
```

4. naprogramovat `void drawTriangle(int smallSide)`

```cpp
drawTriangle(4);
```

```bash
> #
> ##
> ###
> ####
```

5. naprogramovat `void drawTriangle2(int smallSide)`

```cpp
drawTriangle2(4);
```

```bash
> ####
>  ###
>   ##
>    #
```


6. naprogramovat `void drawCross(int size)`

```cpp
drawCross(5);
```

```bash
> #   #
>  # #
>   #
>  # #
> #   #
```

7. naprogramovat `void drawCircle(int radius)`

```cpp
drawRadius(5);
```

```bash
>   ##
> ######
> ######
>   ##
```

## 3. hodina

### C++ Cheatsheet

#### Proměnné
Vytvoření **proměnných** `celeCislo`, `desCislo`, `vDesCislo`, `znak` a `retezec`:

```c++
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
#include <stdio>

std::cin >> prměnná; // načtení hodnoty z konzole do proměnné

std::cout << co vypsat << co dál vypsat << ... << vypiš si toho kolik chceš; // výpis textu, i proměnných
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
