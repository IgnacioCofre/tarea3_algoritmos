# Caso de Prueba
## Tarea 3
### Algoritmos y Complejidad

El objetivo de estos archivos es que prueben sus soluciones y su tiempo de
ejecución.

## Descarga

```bash
git clone https://bitbucket.org/algoritmos-2017-2/t3-test.git
```

## Actualización

En caso que se detecten errores o se suban más casos de prueba, pueden
actualizarlos con

```bash
git pull
```

En la columna derecha de BitBucket pueden ver cuándo se subió la última
actualización de los casos de prueba.

## Comparar respuestas

Para comparar respuestas, deben guardar su output en un archivo aparte (usando
pipes, **NO** `fprintf`). Luego pueden comparar con `diff` o `git diff`
```bash
# Ejecutar el programa. Guardar output.
./tarea3 < input-ayudante.txt > output-alumno.txt

# Mostrar las diferencias entre outputs con git diff
git diff --no-index --minimal output-ayudante.txt output-alumno.txt
```

## Tiempo de ejecución sugerido: 10\[s\]

Pueden medir el tiempo con `time`
```bash
time ./tarea3 < input.txt > /dev/null
```

Valor referencial para el caso grande (`long-words.txt`)

## Notas adicionales

El archivo `short-words.txt` está pensado en que cada caso pueda ser resuelto a
mano.
