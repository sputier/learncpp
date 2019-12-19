### Variable initialization

* copy initialization => `int width = 5;`
* direct initialization => `int width(5);`

For simple data types (like integers), copy and direct initialization are essentially the same. But for some advanced types, direct initialization can perform better than copy initialization. Prior to C++11, direct initialization was recommended over copy initialization in most cases because of the performance boost.

* uniform initialization (brace initialization) (C++ 11 +) => `int width{5};` (or `int width{};` for "zeroed" values). 

This kind of initialization does not perform "narrowing" conversions : `int width{4.5};` won't compile due to a type mismatch (dicmal <-> integer), while other initializations perform an implicit conversion from `4.5` to `4`.

### Console I/O

`#include <iostream>`

#### Output

* write text : `std::cout << "Hello world!";`
* write number : `std::cout << 4;`
* write multiple pieces of text : `std::cout << "Hello" << " world!";`

To add a newline character at the end of the outputted string :
* add `std::endl` at the end : `std::cout << "Hello world!" << std:endl;`
* add `\n` char : `std::cout << "Hello world!"` << `\n`;

#### Input

* read a value and store it in a variable : `int x{}; std::cin >> x;`