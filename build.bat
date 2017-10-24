:: C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o src\main.o src\main.c
:: C:\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o main.gb src\main.o
:: pause
if not exist "C:\gbdk\out" mkdir C:\gbdk\out
C:\gbdk\bin\lcc -c -o out\main.o src\main.c
C:\gbdk\bin\lcc -o main.gb out\main.o
@rd /S /Q "C:\gbdk\out"
pause