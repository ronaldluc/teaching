# Code for GMS

#### Úkoly na 4. hodinu
- OBJ_HRAC: Pressed M: Main 2: Save game
- OBJ_RESUME: Left Button: Main 2: Load game

#### OBJ_HRAC: Step
```c++
if (mouse_x < OBJ_HRAC.sprite_width/2) {
    x = OBJ_HRAC.sprite_width/2;
} else if (mouse_x > room_width - OBJ_HRAC.sprite_width/2) {
    x = room_width - OBJ_HRAC.sprite_width/2;
} else {
    x = mouse_x;
}
```
