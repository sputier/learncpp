### Variables

#### Name

As a reminder, the name of a variable (or function, type, or other kind of item) is called an identifier.

C++ is case-sensitive.

Conventions :

* name of variables starts with a lowercase letter : `myValue`
* name of functions starts with a lowercase letter : `main()`
* avoid starting names with underscore : typically reserved for OS, library and/or compiler use
* Identifier cannot be a keyword
* Identifier can only be composed of letters, numbers and underscore character
* Identifier cannot start with a number.
* User-defined structs, classes and enumerations typically start with a capital character

#### Initialization

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


### C++ keywords

* alignas (C++11)
* alignof (C++11)
* and
* and_eq
* asm
* auto
* bitand
* bitor
* bool
* break
* case
* catch
* char
* char16_t (C++11)
* char32_t (C++11)
* class
* compl
* const
* constexpr (C++11)
* const_cast
* continue
* decltype (C++11)
* default
* delete
* do
* double
* dynamic_cast
* else
* enum
* explicit
* export
* extern
* false
* float
* for
* friend
* goto
* if
* inline
* int
* long
* mutable
* namespace
* new
* noexcept (C++11)
* not
* not_eq
* nullptr (C++11)
* operator
* or
* or_eq
* private
* protected
* public
* register
* reinterpret_cast
* return
* short
* signed
* sizeof
* static
* static_assert (C++11)
* static_cast
* struct
* switch
* template
* this
* thread_local (C++11)
* throw
* true
* try
* typedef
* typeid
* typename
* union
* unsigned
* using
* virtual
* void
* volatile
* wchar_t
* while
* xor
* xor_eq

### Compilation

### #include

```#include <iostream>```
```##include "io.h"```
```#include "headers/myHeader.h"```
```#include "../moreHeaders/myOtherHeader.h"```

When you #include a file, the content of the included file is inserted at the point of inclusion.

Angled brackets are used to tell the preprocessor that we are including a header file that was included with the compiler, so it should look for that header file in the system directories. The double-quotes tell the preprocessor that this is a user-defined header file we are supplying, so it should look for that header file in the current directory containing our source code first. If it doesn’t find the header file there, it will check any other include paths that you’ve specified as part of your compiler/IDE settings. That failing, it will fall back to checking the system directories.

#### Forward declarations

C++ code is compiled sequentially, which may lead to erors similar to `add.cpp(5) : error C3861: 'add': identifier not found` even though the add function exists later in the file.

To fix this, we can use a **forward declaration** : it allows to tell the compiler about the existence od an identifier before actually defining the identifier.

To write a forward declaration for a function, we use a declaration statement called a function prototype. The function prototype consists of the function’s return type, name, parameters, but no function body, terminated with a semicolon.

```cpp

#include <iostream>

int add(int x, int y); // forward declaration of add();

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}

int add(int x, int y)
{
    return x + y;
}

```

#### Header files

Using forward-declaration all over an application which grows larger may become increasingly tedious. C++ allows to use special files for declarations : header files (.h). These files may be #included where necessary.

Multiple includes of the same header file in a source file results in compilation failing, due to multiple declarations of the same elements.
To avoid this problem, we can use **header guards** :

```cpp
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE
 
// your declarations (and certain types of definitions) here
 
#endif
```

A non-standard but widely supported preprocessor directive designed to solve this problem is ```#pragma once``` -> less code, avoidance of name clashes, and sometimes improvement in compilation speed

### Namespaces

Useful to avoid naming collisions : a namespace provide a scope to the identifiers inside of it.

Use a function located in a specific namespace :

* use an explicit name qualifier -> `std::` for example
* use a **using directive statement** -> `using namespace std;` then call functions without namespace qualifier. But conflicts may occur (local function `cout` and use of `std::cout`, for example)