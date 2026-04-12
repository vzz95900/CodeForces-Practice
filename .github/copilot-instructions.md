# Copilot Instructions for `forces` Codebase

## Overview
This codebase is a large collection of single-file C++ solutions, each named with a number (e.g., `1.cpp`, `270.cpp`). Each file is a self-contained program, typically for competitive programming problems.

## Key Patterns & Conventions
- **File Structure:** Each `.cpp` file is independent, with its own `main()` function. There is no cross-file dependency.
- **Headers:** Most files use `#include <bits/stdc++.h>` for convenience and speed.
- **Namespace:** `using namespace std;` is used globally in almost all files.
- **Type Aliases & Macros:** Common patterns include:
  - `typedef long long ll;`
  - Macros for input/output and fast I/O, e.g., `fastio()`, `noch`, `yes`, `no`.
- **Author Tag:** Many files start with a comment like `/* ViJzZz Ka CoDe h ❤️ */`.

## Build & Run
- **Compilation:** Each file is compiled individually. Example (for file `270.cpp`):
  ```sh
  g++ 270.cpp -o 270.exe
  ```
- **Execution:**
  ```sh
  ./270.exe
  ```
  On Windows, use `270.exe` directly.
- **No Central Build System:** There are no Makefiles or CMake files. Each file is managed separately.

## Project-Specific Advice
- **No Shared State:** Do not introduce cross-file includes or dependencies.
- **Competitive Programming Style:** Prioritize speed and brevity over modularity or reusability.
- **I/O:** Use `fastio()` for fast input/output. Macros like `noch` are used for reading test cases.
- **Testing:** There are no automated tests; manual input is expected.

## Example File Skeleton
```cpp
/* ViJzZz Ka CoDe h ❤️ */
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define noch int t;cin>>t;
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;
void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}
int main() {
    fastio();
    noch
    while(t--) {
        // ...problem logic...
    }
    return 0;
}
```

## When Adding New Files
- Follow the naming convention: `<number>.cpp`.
- Use the provided skeleton and macros for consistency.
- Keep each file self-contained.

---
If any conventions or workflows are unclear, please ask for clarification or provide feedback for improvement.
