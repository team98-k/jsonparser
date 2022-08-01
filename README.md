# jsonparser
C++ Json 라이브러리

## Requirements
* [CMake](https://cmake.org/)
* [spdlog](https://github.com/gabime/spdlog/)

## Example
```json
{
    "number": 10,
    "account": {
        "id": 1
    }
}
```

```cpp
// main.cpp

#include <jsonparer/jsonparser.h>
using namespace jsonparser

int main()
{
    json jsonfile("example.json");
    int i = jsonfile.get("number");
    std::cout << i << std::endl;

    int j = jsonfile.get("account/id");
    std::cout << j;
    return 0;
}
```

## Result
```
10
1
```

## Function List
jsonparser::jsonparser(string a_filename)  
T jsonparser::get()  
void jsonparser::AddPath(string ...)  
void jsonparser::DelPath()  
void jsonparser::Write(string a_filename)  