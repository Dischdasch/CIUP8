# CIUP8 y CIUP9
Dasha Blehm

Marco Nehuen Hernández Abba

### Contenido
- Trabajo realizado (CIUP8)
- Herramientas y Referencias (CIUP8)

## Trabajo realizado (CIUP8)

![image](https://user-images.githubusercontent.com/47418876/161600696-97426475-7c3b-4eca-a78b-892a955fff67.png)

Para hacer el trabajo, creamos una senoidal en función de la frecuencia del arduino, por cada interaccion del Arduino,
para poder ver el parpadeo, hicimos que cada 100000 interacciones llegará desde freqmax hasta freqmin.
```
sum += 3.14/pasos; //pasos = 50000
```

Usamos un map() para verificar cual es la frecuencia de parpadeo, y si llega a esa frecuencia si esta apagado lo encendemos,
evitando usar delays.

```
frec = map(sumA,-100,100,freqmin,freqmax);
if (currentMillis - previousMillis >= frec)
```

### Herramientas y referencias (CIUP8)

[BlinkWithoutDelay](https://docs.arduino.cc/built-in-examples/digital/BlinkWithoutDelay)

[Referencia Practica 8](https://github.com/otsedom/otsedom.github.io/blob/main/CIU/P8/README.md)
