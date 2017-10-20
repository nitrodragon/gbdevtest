# Game Boy ROM Development
A repository of me screwing around with the GBDK.

## How to run/install/build
Extract the `zip` file of this directory to `C:\` and rename the folder to `gbdk`. Use `build.bat` to build the ROM, then take the `main.gb` file and fire it up in the emulator of your choice. If you *don't plan on editing the code at all and just want to build the ROM*, then you can just launch `main.gb` in your emulator. Enjoy

## Looking at Source Code
All of the source code for the ROM(s) I built are located in the `src` directory for ease-of-access. Fair warning: there are a LOT of hexadecimal values because the GBDK compiles the C code right into Assembly that the Game Boy can read.

## Looking at the Docs for GBDK
Apparently, I left a good amount of HTML documents here in the repository, and they seems to all be extremely long and detailed. They should be in the `lib` directory under `xxxhash`.
