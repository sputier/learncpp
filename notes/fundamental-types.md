### Data type sizes

C++ only guarantees that each fundamental data types will have a minimum size:

|     Category    |     Type    | Min. Size |             Note             |
|-----------------|-------------|-----------|------------------------------|
| boolean         | bool        | 1 byte    |                              |
| character       | char        | 1 byte    | Always exactly 1 byte        |
|                 | wchar_t     | 1 byte    |                              |
|                 | char16_t    | 2 bytes   | C++11 type                   |
|                 | char32_t    | 4 bytes   | C++11 type                   |
| integer         | short       | 2 bytes   |                              |
|                 | int         | 2 bytes   |                              |
|                 | long        | 4 bytes   |                              |
|                 | long long   | 8 bytes   | C99/C++11 type               |
| floating point  | float       | 4 bytes   |                              |
|                 | double      | 8 bytes   |                              |
|                 | long double | 8 bytes   |                              |

However, on the current machine, sizes are (differences are in bold): 

|     Category    |     Type        |      Size     |
|-----------------|-----------------|---------------|
| boolean         | bool            | 1 byte        |
| character       | char            | 1 byte        |
|                 | **wchar_t**     | **2 bytes**   |
|                 | char16_t        | 2 bytes       |
|                 | char32_t        | 4 bytes       |
| integer         | short           | 2 bytes       |
|                 | **int**         | **4 bytes**   |
|                 | long            | 4 bytes       |
|                 | long long       | 8 bytes       |
| floating point  | float           | 4 bytes       |
|                 | double          | 8 bytes       |
|                 | long double     | 8 bytes       |

