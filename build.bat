@echo off
cd /d "%~dp0"

gcc -I./src -o silk_ldr silk_ldr.c src/helper.c
