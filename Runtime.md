# Termux:API Convenient Tool (TAPICT) Runtime
## Author: wylerror
Email: wylerror@outlook.com
### Application
[Termux](https://github.com/termux/termux-app)\  
[Termux:API](https://github.com/termux/termux-api)
### Package
#### Termux:API
Run:
```sh
pkg i termux-api
```
#### C/C++
If you need to compile C/C++ file, run:
```sh
pkg i clang -y
```
Then use Clang to compile.
#### Java
If you need to compile Java file, run:
```sh
pkg i openjdk-17 -y
```
Then use JDK to compile.
#### Python
If you need to interpret Python file, run:
```sh
pkg i python -y
```
Then use Python to interpret.
#### All Packages
```sh
pkg i termux-api clang openjdk-17 python -y
```
### Path
Move the C/C++ sources to **~** (home) then compile them to ensure the binaries can be executed.
