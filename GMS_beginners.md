# Code for GMS

## 7. hodina
1. Přičítání score při chytnutí enemáka
    - vytvořit proměnnou `value` v Create: 
    OBJ_ENEMY: Create: Set value 
    
    - přičíst toto score po zničení: 
    OBJ_ENEMY: Destroy: Set score to score + value
    
    - zničit enemáka po kontaktu s OBJ_PLAYER
    OBJ_ENEMY: Collision: Destroy self
    
2. Přecházení do další místnosti
    - podmínka, pokud je score větší než *xyz*
    OBJ_CONTROLER: Step Step: Test Variable score
    
    - do trojúhelníkových závorek co se má stát (třeba přejít do další místnosti a změnit obrázek hráče)

## 5. hodina
Změna cursoru: `window_set_cursor(NÁZEV);` Možnosti:
- `cr_none` nic
- `cr_arrow` šipka
- `cr_handpoint` výběr

## Úkoly na 4. hodinu
- OBJ_HRAC: Pressed M: Main 2: Save game
- OBJ_RESUME: Left Button: Main 2: Load game

### OBJ_HRAC: Step
```c++
if (mouse_x < OBJ_HRAC.sprite_width/2) {
    x = OBJ_HRAC.sprite_width/2;
} else if (mouse_x > room_width - OBJ_HRAC.sprite_width/2) {
    x = room_width - OBJ_HRAC.sprite_width/2;
} else {
    x = mouse_x;
}
```
