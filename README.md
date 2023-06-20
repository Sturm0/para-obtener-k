# para-obtener-k
Programa para mandar un valor de un ángulo en radianes al rango [0,2π) equivalente para poder ser usado cómo argumento de la forma polar de un número complejo.

Ejemplo de utilización:

Supongamos que tenemos el número 5\*π (que es igual a 15,7079632679489661):
el programa lo usariamos así:
```
C:\la_ruta_de_la_carpeta_donde_esta_el_programa> "para obtener k".exe 15.707963267
Entrada: 15.708
Salida: 3.14159
Salida como múltiplo de pi: 1*pi
Valor de k: 2
```
El valor de k al que me refiero es este: ángulo_entrada-2kπ = ángulo_salida para el caso en el que el ángulo de entrada resulte ser mayor a 2π.
Para el caso mostrado en el fragmento de más arriba: 15.708-2\*2\*π=3.14159 (osea π)

Y el valor de k al que me refiero es este: ángulo_entrada+2kπ = ángulo_salida para el caso en el que el ángulo de entrada resulte ser menor a 0.
