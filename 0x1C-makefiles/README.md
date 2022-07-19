# 0x1C. C - Makefiles

## Requirements:

💠 name of the executable: school
💠 rules: all, clean, fclean, oclean, re
all: builds your executable
clean: deletes all Emacs and Vim temporary files along with the executable
oclean: deletes the object files
fclean: deletes all Emacs and Vim temporary files, the executable, and the object files
re: forces recompilation of all source files
💠 variables: CC, SRC, OBJ, NAME, RM, CFLAGS
CC: the compiler to be used
SRC: the .c files
OBJ: the .o files
NAME: the name of the executable
RM: the program to delete files
CFLAGS: your favorite compiler flags: -Wall -Werror -Wextra -pedantic
The all rule should recompile only the updated source files
The clean, oclean, fclean, re rules should never fail

🔸 You are not allowed to have a list of all the .o files

![image](https://user-images.githubusercontent.com/98775024/179637514-a9f301ce-08b4-47bc-aae5-bbba5921202c.png)



