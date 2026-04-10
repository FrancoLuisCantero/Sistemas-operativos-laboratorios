# 📁 Operaciones con Archivos en C

Pequeño proyecto en C enfocado en demostrar cómo trabajar con archivos mediante operaciones básicas. Ideal para principiantes que quieran entender cómo leer, escribir y manipular datos en archivos desde programas en C.

---

## 🚀 Objetivo

El objetivo principal de este proyecto es mostrar de forma sencilla cómo realizar **4 operaciones básicas con archivos**:

* 📄 Creación de archivos
* ✍️ Lectura/escritura en archivos
* 📦 Movimiento de archivos
* 🗑️ Eliminación de archivos

---

## 🗂️ Estructura del proyecto

```
.
├── archivo generados/
│       ├── carpeta/
│       │      └── archivos-3.txt
│       ├── archivos
│       ├── archivos-1.txt
│       ├── archivos-2.txt
├── archivos.c
└── README.md
```

* `archivos.c` → Código principal con las operaciones
* `archivos-1.txt`, `archivos-2.txt` y `archivos-3.txt` → Archivos de prueba generados por el programa
* `carpeta/` → Directorio creado para almacenar `archivos-3.txt`
* `archivos` → Archivo ejecutable generado con `gcc`

---

## ⚙️ Requisitos

* Compilador de C (por ejemplo `gcc`)
* Sistema operativo tipo Unix/Linux, macOS o Windows con terminal (WSL, WSL2)

---

## 🛠️ Compilación y ejecución

Compilar el programa:

```bash
gcc archivos.c -o archivos
```

Ejecutar:

```bash
./archivos
```

---

## 💡 Uso

Podés modificar el código para:

* Cambiar nombres de archivos
* Probar distintos modos de apertura (`r`, `w`, `a`)
* Adaptar las rutas dentro de `archivo generados/`

---

## 🎯 Propósito educativo

Este proyecto está pensado como práctica para:

* Entender cómo funcionan los archivos en C
* Familiarizarse con la entrada/salida (I/O)
* Practicar operaciones sobre el sistema de archivos (crear, mover y eliminar)

---

## 👨‍💻 Resumen

Proyecto realizado como práctica de aprendizaje en C.
