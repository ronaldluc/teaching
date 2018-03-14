# GameMaker: Studio



#### OBJ_PLAYER

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
