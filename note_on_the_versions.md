**4-mario-5-feb-2020.c**
Updated version to submit for `CS50x 2020`

**6-mario-final-6-feb-2020**
Fix bug which meant that program failed test below.
The workaround was to create a while loop and a new variable which stored the result as 0 or 1. 0 means that the program was run successfully (i.e. the user gave an integer between 1 and 8 and the program subsequently returned a triangle). 1 means that the program ran unsuccessfully and would have to be re-run until it achieved a status of 0.

**Test which was failed in version 5**
`:( rejects a height of 9, and then accepts a height of 2`
timed out while waiting for program to exit
Log
running ./mario...
sending input 9...
checking that input was rejected...
sending input 2..

**Storing cs50.c and cs50.h in the project folder**
You need to store both these files in the project folder so that the program can have access to the CS50 library
cs50.c
cs50.h