#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <set>
#include <time.h>

using namespace std;

#if defined(__WIN32__) || defined(_WIN32) || defined(WIN32) || defined(__WINDOWS__) || defined(__TOS_WIN__)

  #include <windows.h>

  inline void delay( unsigned long ms )
    {
    Sleep( ms );
    }

#else  /* presume POSIX */

  #include <unistd.h>

  inline void delay( unsigned long ms )
    {
    usleep( ms * 1000 );
    }

#endif 

void vAI (char choice) {
    cout << "Počítač tě porazil, zahrál ";
    if (choice == 'k')
        cout << " papir";
    if (choice == 'n')
        cout << " kamen"; 
    if (choice == 'p')
        cout << " nuzky";
    cout << ". Přiště už to vyjde ;)" << endl;
}

int main() {

    srand (time(NULL));
    
    int AI;
    int player;
    string k;
    char choice;
    
    cout << "Hra kámen, nůžky, papír, teď" << endl; 
    
    cout << "Napiš 'k' pro kámen, 'n' pro nůžky, 'p' pro papír a zmáčnki 'ENTER'" << endl;
    while (true) {

        cin >> choice;
        
        
cout << 
"     .--,-``-.     "  << endl <<
"    /   /     '.   "  << endl <<
"   / ../        ;  "  << endl <<
"   \\ ``\\  .`-    ' "  << endl <<
"    \\___\\/   \\   : "  << endl <<
"         \\   :   | "  << endl <<
"         /  /   /  "  << endl <<
"         \\  \\   \\  "  << endl <<
"     ___ /   :   | "  << endl <<
"    /   /\\   /   : "  << endl <<
"   / ,,/  ',-    . "  << endl <<
"   \\ ''\\        ;  "  << endl <<
"    \\   \\     .'   "  << endl <<
"     `--`-,,-'     "  << endl << endl;

delay (700);           

cout <<
"         ,----,   "  << endl <<
"       .'   .' \\  "  << endl <<
"     ,----,'    | "  << endl <<
"     |    :  .  ; "  << endl <<
"     ;    |.'  /  "  << endl <<
"     `----'/  ;   "  << endl <<
"       /  ;  /    "  << endl <<
"      ;  /  /-,   "  << endl <<
"     /  /  /.`|   "  << endl <<
"   ./__;      :   "  << endl <<
"   |   :    .'    "  << endl <<
"   ;   | .'       "  << endl <<
"   `---'          "  << endl << endl;

delay (700);

cout << 
"        ,---, "  << endl <<
"     ,`--.' | "  << endl <<
"    /    /  : "  << endl <<
"   :    |.' ' "  << endl <<
"   `----':  | "  << endl <<
"      '   ' ; "  << endl <<
"      |   | | "  << endl <<
"      '   : ; "  << endl <<
"      |   | ' "  << endl <<
"      '   : | "  << endl <<
"      ;   |.' "  << endl <<
"      '---'   "  << endl << endl;
           
           
delay (700);
        
        AI = rand()%3;
        
        if (choice == 'k')
            player = 0;        
        if (choice == 'n')
            player = 1;        
        if (choice == 'p')
            player = 2;
        
        if (player == AI)
            cout << "Remíza... " << endl;
        else if (player == 0 and AI == 2)
            vAI(choice);
        else if (player < AI)
            vAI(choice);
        else
            cout << "Porazil jsi počítač!" << endl;
        
            cout << "Pro další hru napiš 'k' pro kámen, 'n' pro nůžky, 'p' pro papír a zmáčnki 'ENTER'" << endl;
    }
    return 0;
}