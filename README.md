# Tarea 1 2023-1

Recuerda subir el código de tu tarea en este repositorio a más tardar el día de la entrega a las 23:59 hrs.

El codigo base de esta tarea es un poco más extraño debido a que se incluye un visualizador para la Parte 3. La estructura de la tarea es la siguiente:

```
src/
-----------------------------------------------------------------------
│   ARCHIVOS DE LA TAREA ( Donde escribirás tu código )               │
-----------------------------------------------------------------------
├── bstmate/
│   ├── main.c
│   ... Otros archivos de la parte 1
├── qsortcars/
│   ├── main.c
│   ... Otros archivos de la parte 2
├── kdtree/
│   ├── main.c
│   ├── simulation.c
│   ├── simulation.h
│   ... Otros archivos de la parte 3
-----------------------------------------------------------------------
│   LIBRERIAS PARA EL VISUALIZADOR ( No es necesario modificarlas )   │
-----------------------------------------------------------------------
│── engine/
│   ├── math/
│   ├── vector.c
│   ├── vector.h
│── visualizer/
│   ├── visualizer.c
│   ├── visualizer.h
│── visualizer_core
│   ├── animating/
│   ├── drawing/
│   ├── main.c
│   ├── window.c
│   ├── window.h
```

## Compilar

```
make
```

## Recompilar

```
make clean && make
```

## Ejecutar

### Para la parte 1:
```
./bstmate input.txt output.txt
```

### Para la parte 2:
```
./qsortcars input.txt output.txt
```

### Para la parte 3:

Para esta parte existe un visualizador de las colisiones para hacer la tarea mas dinamica. Si no lo has instalado revisa la guia:
[Guia de instalacion GTK](https://github.com/IIC2133-PUC/2023-1/blob/master/Gu%C3%ADas/Set%20Up/3.0%20(Extra)%20GTK.md)

```
./kdtree input.txt output.txt
```

En caso de problemas con el visualizador puedes utilizar

```
./kdtree input.txt output.txt --novis
```


## Cápsulas
Te recomendamos ver esta [cápsula](https://youtu.be/j9W1qKCvFRE) antes de hacer el BST.
Te recomendamos ver esta [cápsula](https://youtu.be/_mSVK0OaaYw) antes de hacer el KdTree.

## Para revisar servidor

En algunos días se subirán testcases al servidor para que puedas probar tu tarea:

- Para revisar los _test publicos_ en el servidor del curso se tiene que acceder al siguiente enlace:
http://edd.ing.puc.cl/test?repo=T1-2023-1-USERNAME

- Para revisar los _test de evaluacion_ en el servidor del curso se tiene que acceder al siguiente enlace:
http://edd.ing.puc.cl/grade?repo=T1-2023-1-USERNAME
