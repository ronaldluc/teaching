# GameMaker: Studio

### 6. hodina
1. 
2. 

### 5. hodina

#### Úkoly
1. sbírání cookies
2. vytvoření objektu `obj_controler`, který bude vykreslovat `score` 
    - Score se vykresluje přes event `Draw GUI`
3. změnit font, velikost a barvu výpisu
3. **Sick animations; much particles**

#### Code
obj_controler: Draw GUI
```c++
col = make_color_hsv(color, 255, 255)
draw_set_colour(col);

color = (color + 1) % 256;
```

### 4. hodina

#### OBJ_PLAYER

##### Step: Step
```cpp
// nastav uhel obrazku podle smeru chuze
image_angle = ???;
```

##### D-key
```cpp
direction -= self.rotation_speed/(abs(speed/10) + 2)
```

##### W-key
```cpp
if (speed < self.max_speed)
    speed += self.a;
```


##### Create
```cpp
var self.a = 1;
var self.max_speed = 20;
var self.rotation_speed = 15;
friction = 0.42;

var scale = 0.3;
self.image_xscale = scale;
self.image_yscale = scale;
```
