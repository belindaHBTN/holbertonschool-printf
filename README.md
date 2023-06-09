# Holberton School _printf() in C language

The requirements of this Holberton School project was to recreate the C library function printf. This function sends formatted output to the standard output stream by formatting the argument(s) passed in into a character string and embedding the arguments(s) into another character string. This version is called `_printf`.

This `_printf` function has been tested on Ubuntu 20.04



## Table of Contents

* [Repository Contents ](#Repository-Contents)
	* [Format specifiers](#Format-specifiers)
* [Installation](#Installation)
* [Compile with Makefile](#Compile-with-Makefile)
* [How to use](#How-to-use)
* [Flowchart](#Flowchart)
* [Authors](#Authors)



## Repository Contents

This repository contains the following files:

| **File**        | **Description**                                              |
| --------------- | ------------------------------------------------------------ |
| main.h          | header file with prototypes                                  |
| \_putchar.c     | a function that writes a single character to the standard output stream |
| helper_func.c   | contains functions that are called upon by get_type_func.c. These functions print characters to the standard output|
| get_type_func.c | a function that selects the correct function to perform the printing |
| \_printf.c      | a function that formats output conversion and prints data.   |
| Makefile        | a file containing a set of commands, used to organise code for compilation|
| man_3_printf    | man page - a user manual for using the _printf function      |
| README.md       | readme page                                                  |

### Format specifiers

| **Specifier** | **Output**                    |
| ------------- | ----------------------------- |
| %c            | prints a single character     |
| %s            | prints a string of characters |
| %%            | prints a single percent sign  |
| %i            | prints an integer             |
| %d            | prints a decimal number       |



## Installation

1. Clone the repository into your directory

```
$ git clone https://github.com/belindaHBTN/holbertonschool-printf
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

![_printf_flowchart](./_printf_flowchart.png)



## Authors

*Angella Lao* - [Github](https://github.com/angellalao) || *Belinda Shan* - [Github](https://github.com/belindaHBTN)



