#!/bin/bash

gcc -c -Wall *.c
ar -rcs libmy.a *.o
