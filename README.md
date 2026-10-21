# CPP-08 — Containers, iterators, and algorithms

Templated utilities built around standard containers, algorithms, and iterators. Part of my 42 C++ coursework.

## Exercises

Each directory is a separate program with its own Makefile and entry point.

| Directory | Focus | Executable |
| --- | --- | --- |
| [ex00](ex00/) | easyfind: finding an integer in a container | `easyfind` |
| [ex01](ex01/) | Span: storing integers and computing shortest/longest spans | `easyfind` |
| [ex02](ex02/) | MutantStack: exposing iterator access for a stack | `mutantstack` |

Executable names above follow the current Makefiles, including names reused between exercises.

## Build and run

Requirements: Make and a C++ compiler supporting C++98. The Makefiles use `c++` with `-Wall -Wextra -Werror -std=c++98`.

From the repository root, build the first exercise:

```sh
make -C ex00
cd ex00
./easyfind
```

Return to the repository root to build another exercise by replacing `ex00` with its directory. Run it from that directory when it uses relative data files. Inspect its `main.cpp` (or `tests.cpp` / `src/main.cpp`) for the included examples and expected arguments.

```sh
make -C ex00 clean   # Remove object files
make -C ex00 fclean  # Remove object files and executable
make -C ex00 re      # Rebuild
```

## Study notes

These are learning exercises, not a general-purpose library. Read the class headers alongside the implementations, then use the supplied entry points to explore the behavior. This README documents the repository contents and build commands; it does not claim an official evaluation result.
