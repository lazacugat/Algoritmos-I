
# Algoritmos y Estructuras de Datos I 💻

Este repositorio contiene las soluciones a los proyectos prácticos de la materia **Algoritmos 1** (FAMAF - Universidad Nacional de Córdoba). El enfoque principal es la transición del paradigma funcional al imperativo, haciendo hincapié en la corrección algorítmica y el uso de tipos de datos.

## 🚀 Resumen del Aprendizaje

A lo largo de estos proyectos, desarrollé habilidades clave para el desarrollo de software:
* **Abstracción y Lógica:** Implementación de algoritmos con base matemática y razonamiento formal.
* **Paradigma Funcional (Haskell):** Tipos de datos algebraicos, recursión avanzada, polimorfismo y funciones de alto orden.
* **Paradigma Imperativo (C):** Gestión de memoria, manejo de punteros, estados y transformación de datos.
* **Calidad de Código:** Verificación de estados mediante `assert.h` y compilación estricta con flags de error.

---

## 📂 Estructura de Proyectos

| Proyecto | Tecnología | Temas Clave |
| :--- | :--- | :--- |
| **Proyecto 1** | ![Haskell](https://img.shields.io/badge/Haskell-5D4F85?style=flat&logo=haskell&logoColor=white) | Pattern matching, recursión, polimorfismo, `map`, `filter`, `fold`. |
| **Proyecto 2** | ![Haskell](https://img.shields.io/badge/Haskell-5D4F85?style=flat&logo=haskell&logoColor=white) | Definición de tipos (ADT), constructores y manipulación de expresiones. |
| **Proyecto 3** | ![C](https://img.shields.io/badge/C-A8B9CC?style=flat&logo=c&logoColor=white) | Modelo imperativo, estados, entrada/salida y ejecución de programas. |
| **Proyecto 4** | ![C](https://img.shields.io/badge/C-A8B9CC?style=flat&logo=c&logoColor=white) | Punteros, arreglos, estructuras (`struct`) y diseño de TADs. |

---

## 🛠️ Instalación y Ejecución

### Requisitos previos
* **Haskell:** [GHC](https://www.haskell.org/ghc/) (Glasgow Haskell Compiler)
* **C:** [GCC](https://gcc.gnu.org/) o Clang

### Cómo correr los proyectos

1. **Clonar el repositorio:**
   ```bash
   git clone [https://github.com/lazacugat/Algoritmos-I.git](https://github.com/lazacugat/Algoritmos-I.git)
   cd Algoritmos-I

2. **Para Haskell (Proyectos 1 y 2):**
   ```bash
   ghci -Wall <nombre_del_archivo>.hs

3. **Para C (Proyectos 3 y 4):**
   ```bash
    gcc -Wall -Wextra -std=c99 -o programa *.c
    ./programa