# CONTRIBUTION GUIDELINES

## Contribute to Latex
1. Contributions are welcomed that correct warnings or errors during pdfLatex compilation.
2. Contributions are welcomed that adds new chapters detailing new sensor components
3. Contributors should follow the folder structure
```
.
├── abbrevations.tex
. . .
├── ArduinoCodeHouse
├── Chapters
│   ├── DTMF.tex
|   . . .
│   └── <new chapter.tex>
. . .
├── Images
│   ├── DTMF
│   │   ├── decimal_to_binary.png
│   │   . . .
│   │   └── wireless_bot.png
|   . . .
│   ├── <new chapter name>
│   │   ├── image1.png
│   │   └── image2.png
├── LICENSE (no edits)
├── main.tex
. . .
├── tufte-book.cls (no edits)
└── tufte-common.def (no edits)
```
4. Image of chapter is to be loaded in respective folder under Images directory. Chapters can be updated in Chapters directory and also ensure to include your chapter in main.tex to see changes.


## Contribute to Arduino Code
1. Contributions are welcome that update or create new arduino code/project in **ArduinoCodeHouse** directory
2. Readme.md file in **ArduinoCodeHouse** directory must be updated when new programs are added. The name of the program as well as the short description of program should be added. Try to avoid duplicate programs.
3. Contributions should follow the folder structure
```
.
├── abbrevations.tex
. . .
├── ArduinoCodeHouse
│   ├── Readme.md (update)
|   . . .
│   ├── new_prg_name
|   │   ├── Readme.md
|   │   ├── circuit_diagram.png
|   │   ├── program_file1.c
|   │   ├── progrma_file2.h
|   |   . . .
|   . . .
. . .
```
4. New folder with the name of the program has to be created. Link your code directory in ArduinoCodeHouse/Readme.md
5. Your folder should also contain a Readme.md file, giving a detailed info/description of the code. The information must include
  1. Breif description about what the code does
  2. Written connection information
  3. Model number and versions of hardware used
  4. List of dependency library used
  5. Optional : link to an online stimulation of the project. We recommend [TinkerCad](https://www.tinkercad.com/)
  6. Trouble shooting and other miscellaneous information


## Other Contributions
Other contributions that improve the directory structure or workflow are also welcomed.
