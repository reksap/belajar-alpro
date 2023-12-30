# Program Structure


## Sebuah program yang dituliskan dalam bahasa C, biasanya terdiri dari

 - Preprocessor Commands
 - Functions
 - Variables
 - Statements & Expressions
 - Comments

```c
#include <stdio.h>

int main() {
   /* my first program in C */
   printf("Hello, World! \n");
   
   return 0;
}
```

 - The first line of the program #include <stdio.h> is a preprocessor command, which tells a C compiler (translator) to include stdio.h file before going to actual compilation.

 #include <stdio.h> -> kegiatan men-import library yang berisi sekumpulan perintah yang sudah standard

 - The next line int main() is the main function where the program execution begins.

 - The next line /*...*/ will be ignored by the compiler and it has been put to add additional comments in the program. So such lines are called comments in the program.

 - The next line printf(...) is another function available in C which causes the message "Hello, World!" to be displayed on the screen.

 - The next line return 0; terminates the main() function and returns the value 0.

1. Pada umumnya, seluruh bahasa pemrograman, punya satu fungsi/ metod utama. Dan biasanya diberi nama `main`
2. fungsi utama ini, berfungsi untuk entry point. Atau pintu masuk utama computer untuk menjalankan instruksi yang telah kita tulis

### untuk mengcompile bahasa C ke bahasa yang dimengerti komputer digunakan compiler. di UNIX os, menggunakan compiler gcc

- perintah compile c file ke bahasa yang dimengerti komputer
UNIX
```bash
gcc nama-file.c -o nama-program
```
WINDOWS
```bash
gcc nama-file.c -o nama-program.exe
```

untuk menjalankan programmnya bisa melalui commandline/ terminal dengan memberikan perintah

UNIX
```bash
./nama-file
```

WINDOWS
```bash
nama-file.exe
```


## type data struct
