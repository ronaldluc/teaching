#Code for GMS

```
if (mouse_x < obj_codebar.sprite_width/2) {
    x = obj_codebar.sprite_width/2;
} else if (mouse_x > room_width - obj_codebar.sprite_width/2) {
    x = room_width - obj_codebar.sprite_width/2;
} else {
    x = mouse_x;
}
```
