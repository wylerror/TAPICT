# Termux:API 便捷工具 (TAPICT)
## 开发者: wylerror
电子邮箱: wylerror@outlook.com
### 应用
[Termux](https://github.com/termux/termux-app)\
[Termux:API](https://github.com/termux/termux-api)
### 包
#### Termux:API
运行：
```bash
pkg i termux-api
```
#### C/C++
如果您需要编译 C/C++ 文件，运行：
```bash
pkg i clang -y
```
然后使用 Clang 编译。
#### Java
如果您需要编译 Java 文件，运行：
```bash
pkg i openjdk-17 -y
```
然后使用 JDK 编译。
#### Python
如果您需要解释 Python 文件，运行：
```bash
pkg i python -y
```
然后使用 Python 解释。
#### 全部包
```bash
pkg i termux-api clang openjdk-17 python -y
```
### 路径
移动 C/C++ 源文件至 **~** (home) 然后编译以确保二进制文件可以执行。
<br><br>
[英文](Runtime.md)