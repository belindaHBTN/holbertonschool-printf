# Holberton School _printf() in C language

This project is about recreating the C library function printf. The function printf sends formatted output to `stdout` (standard output stream) by formatting the argument(s) passed in and converting the arguments(s) into a character string. This version will be used as `_printf`.

This printf has been tested on Ubuntu 20.04



## Table of Contents

* [Repository Contents ](#Repository Contents)
	* [Format specifiers](#Format specifiers)
* [Installation](#Installation)
* [Compile with Makefile](#Compile with Makefile)
* [How to use](#How to use)
* [Flowchart](#Flowchart)
* [Authors](#Authors)



## Repository Contents

Once cloned over, the repository will contain the following files:

| **File**        | **Decription**                                               |
| --------------- | ------------------------------------------------------------ |
| main.h          | header file with prototypes                                  |
| \_putchar.c     | a function that writes a single character to the standard output stream |
| helper_func.c   | a file that contains some functions that perform part of the computation of another function |
| get_type_func.c | a function that selects the correct function to perform the printing |
| \_printf.c      | a function that formats output conversion and prints data.   |
| Makefile        | a file that manages and maintains computer programs consisting many component files |
| man_3_printf    | man page                                                     |
| README.md       | readme page                                                  |

### Format specifiers

| **specifier** | **output**             |
| ------------- | ---------------------- |
| %c            | a single character     |
| %s            | a string of characters |
| %%            | a single percent sign  |
| %i            | an integer             |
| %d            | a decimal number       |



## Installation

1. Clone the repository into your directory

```
$ git clone https://github.com/nikolasribeiro/printf.git
```
2. Change to the holbertonschool-printf repository

```
cd holbertonschool-printf
```

3. Once the main.c file has been created, move on to the next step - Compile



## Compile with Makefile

If the main function is not in a file named main.c, open Makefile and replace ‘main.c’ with name of your file.

Run Makefile to compile:

```
make 0
```



## How to use

Please see the following example when _printf is implemented in your code:

```c
To print "This is a string." and the number of characters printed:

#include "main.h"

int main(void)
{
	int len;

	len = _printf("This is a string.\n");
	_printf("The last string contains %d characters.\n", len);

	return (0);
}
```
Example output:
```
$ This is a string.
$ The last string contains 18 characters.
```



## Flowchart

![_printf_flowchart](Flowchart/_printf_flowchart.png)



## Authors

*Angella Lao* - [Github](https://github.com/angellalao) || *Belinda Shan* - [Github](https://github.com/belindaHBTN)



