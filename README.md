## 一、cppStudio
使用nodejs搭建一个简单的c++开发平台，可跨平台用于简单的c++开发，可以使用任意编辑器编辑app.cpp文件，自动编译运行


## 二、cppStudio启动：
1、本项目需要nodejs运行环境。nodejs模块负责cpp main文件的修改监视和编译

2、需要g++命令工具。这个用来编译cpp文件

3、以上环境安装好之后，到项目根目录运行  npm run watch 命令会进入交互式控制台，在app.cpp文件修改保存时，自动运行cpp文件并输出到当前控制台

4、运行npm run watchc 命令会进入交互式控制台，在app.c文件修改保存时，自动运行c文件并输出到当前控制台

5、3和4可使用两个控制台同时运行的

## 三、工作原理
* app           编译后存储的可执行文件
* app.cpp       项目入口文件，也就是main文件
* common.h      工具类，封装常用的功能
* monitor.js    自动编译自动编译功能模块，监视app.cpp文件，一旦该文件改动，自动编译保存为app可执行文件，并执行app
* package.json  nodejs配置文件，封装js脚本启动命令

## 四、添加C语言
 * app.c        c项目入口文件，也就是main文件，为什么要把c和cpp分开呢，因为这两个语言模块封装还是有差别的啊
 * monitor.js 	自动编译自动编译功能模块，监视app.c文件，一旦该文件改动，自动编译保存为app可执行文件，并执行app
