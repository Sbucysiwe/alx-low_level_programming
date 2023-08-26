#!/bin/bash

cc -fPIC -shared $(ls *.c) -o liball.so
