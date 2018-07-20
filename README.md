# CPP-Primer

Exercises and notes from the [C++ Primer Fifth Edition](https://www.amazon.com/Primer-5th-Stanley-B-Lippman/dp/0321714113) textbook.

## Compiling C++ Code from the Unix Command Line

The following command compiles `foobar.cpp` and outputs an executable with
the filename of `foobar` in the `bin` folder located within the current directory.

```
    g++ -o ./bin/foobar foobar.cpp
```

## Running the Executable

Navigate to the directory that contains the executable and type:

```
    ./bin/foobar
```

## Compiling and Running

You can compile and run code with one command:

```
    g++ -o ./bin/foobar foobar.cpp && ./bin/foobar
```
