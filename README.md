# Game Boy ROM Development
Probably one of my favorite weekend projects and an all-time bucket list item since I was 12. I can finally say I've built my own Game Boy ROM.

## How to run/install/build
Extract the `zip` file of this directory to `C:\` and rename the folder to `gbdk`. Run `build.bat` to build the ROM, then take the `main.gb` file and fire it up in the emulator of your choice. If you *don't plan on editing the code at all and just want to build the ROM*, then you can just launch `main.gb` in your emulator. Enjoy

## Looking at Source Code
All of the source code for the ROM(s) I built are located in the `src` directory for ease-of-access. Fair warning: there are a LOT of hexadecimal values because the GBDK compiles the C code right into the ASM that the Game Boy can read.

## Looking at the Docs for GBDK
Apparently, I left a good amount of HTML documents here in the repository, and they seems to all be extremely long and detailed. They should be in the `lib` directory under `small\asxxxx` and `medium\asxxxx`.
