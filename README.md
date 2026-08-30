# COMP/ELEC/MECH 450/550 C++ Primer

Example C++ files used in the primer, one concept per file.

## Compiling a single file

```
g++ -std=c++17 <file>.cpp -o <output_name>
```

Example:

```
g++ -std=c++17 01_hello_world.cpp -o 01_hello_world
./01_hello_world
```

## Compiling everything with make

```
make
```

Builds every `.cpp` file here into `build/`.

```
make clean
```

Removes the `build/` directory.
