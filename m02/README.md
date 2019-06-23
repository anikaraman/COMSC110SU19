Module 2 Expressions and Interactivities
-------------------------------------------
### Textbook Source Listings
### PR 03 Expressions and Interactivities
### Table of Contents
######	1 The cin Object
######	2 Mathematical Expressions
######	3 When You Mix Apples and Oranges: Type Conversion
######	4 Overflow and Underflow
######	5 Type Casting
######	6 Multiple Assignment and Combined Assignment
######	7 Formatting Output
######	8 Working with Characters and string Objects
######	9 More Mathematical Library Functions
######	10 Application: Hand Tracing a Program
######	11 Application: A Case Study 

### Take home exercises:
###### You are to review section examples on textbook!

## Lecture Source Codes


#### The C/C++ built features inside the library (header)
###### Requred headers: iostream, iomanip, cstdio == stdio.h

#### 3.7 Formatting Output
##### Summary Table 3-12 p.117
###### iostream: fixed, showpoint, noshowpoint, left, right, 
###### iomanip: setw, setprecision

    #include <cstdio> // for getchar
    #include "stdio.h" // C notation

### Regular Expression - Regex
##### To process the text pattern inside your program i.e. search/replace/filter
###### Regex Cheat Sheet [http://tiny.cc/rf977y]
###### Example: to filter out line numbers on source code listing:
```
^ [0-9]*    
^ *[0-9]*
^ *[ 0-9]*
^ *[ 0-9]*$
```
### Cloud9 IDE shortcuts
##### To close all active tabs 
    Alt-Shift-W (Alt Windows!)