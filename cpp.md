# Céé plus plus

## 10. hodina
### Opakování
1. funkce `int divide3(int a, int b, int c)`:
```cpp
cout << divide3(25, 5, 5);
```

```bash
> 1
```

2. funkce `int sumAll(int arr[], int len)`, sečte všechny prvky pole:
```cpp
int len = 5;
int a[len] = {2, 4, 6, 1, 4};
cout << sumAll(a, len);
```

```bash
> 17
```

3. funkce `int multiplyAll(int arr[], int len)`, snásobí všechny prvky pole:
```cpp
int len = 5;
int a[len] = {2, 4, 6, 1, 4};
cout << multiplyAll(a, len);
```

```bash
> 192
```

## 9. hodina
### CPU, RAM & friends

#### + opakování základů: 
1. funkce `int sumup3(int a, int b, int c)`:
```cpp
cout << sumup3(4, 5, 10);
```

```bash
> 19
```

2. funkce `int multiply(int a, int b, int c)`:
```cpp
cout << multiply(4, 5, 10);
```

```bash
> 200
```

## 8. hodina
### Rekurze 2

#### Úlohy
1. funkce, co vypíše **n-té** číslo z pole `int`ů: `void printVal(int arr[], int index, int arrLen)`
```cpp
int arr[5] = {2, 4, 12, -1, 5};

printVal(arr, 2, 5);
printVal(arr, 0, 5);
```

```bash
> 12
> 2
```


2. uprav funkci `printVal()`, co vypíše celé pole **OD** **n-tého** čísla po konec: `void printVal(int arr[], int index, int arrLen)`
```cpp
int arr[5] = {2, 4, 12, -1, 5};

printVal(arr, 2, 5);
printVal(arr, 0, 5);
```

```bash
> 12 -1 5
> 2 4 12 -1 5
```

3. uprav fci `printVal()`, aby vypisovala pole v opačném pořadí

## 7. hodina
### Rekurze
![Rekurze](https://i.stack.imgur.com/PdORg.png "Rekurze neprogramátorská")

Skutečnější příklad rekurze: zeptám se na malinko jednodušší problém někoho jiného a pak dám dohromady odpověď

![Rekurze2](https://i.stack.imgur.com/6hD41.png "Rekurze neprogramátorská")

#### Úlohy
1. Násobení čísel přičítáním: `int multiply(int multiplicand , int base)`
	- Myšlenka: 4 × 6 = 6 + 6 + 6 + 6 (tzn. čtyřikrát sečteno číslo 6)
	- Obecně: **5 × 13** = 13 + **4 × 13** = 13 + 13 + **3 × 13** = ... = 13 + 13 + 13 + 13 + 13
	- Příklad:

```cpp
multiply(3, 6);
```

```bash
> 18
```
2. Sčítání přičítáním jedničky: `int addBy1(int amount, int base)`
	- Myšlenka: **4 + 6** = 1 + **(3 + 6)** = 1 + 1 + **(2 + 6)** = 12 (tzn. čtyřikrát přičtena jednička)

```cpp
addBy1(3, 6);
```

```bash
> 9
```
	
3. Faktoriál: `int factorial(int base)`
	- Faktorál _n_ je **součin** _n_ a všech přirozených čísel menších než _n_:
	- Faktoriál 7 = 7 × 6 × 5 × 4 × 3 × 2 × 1 = 7!
	- Faktoriál 10 = 10 × 9 × 8 × 7 × 6 × 5 × 4 × 3 × 2 × 1 = 10!

4. Najít maximum v poli: `int maxArray(int arr[])`
	- Zamyslet se nad rychlostí vyhledávání (kolikrát musím porovnávat?)

## 6. hodina
1. vytvořit fci na vypsání pole `void printArr(int arr[])`

## 5. hodina
1. dodělat fce z minulé hodiny alespoň po 4. (`void drawTriangle(int smallSide)`)
2. ??? MYSTERY ???


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
using namespace std;

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
