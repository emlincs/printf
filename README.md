0x11. C - printf team project

Concepts
For this project, look at these concepts:
•	Group Projects
•	Pair Programming - How To
•	Flowcharts
•	Technical Writing  
Resources
Read or watch:
•	Secrets of printf
•	Group Projects concept page (Don’t forget to read this)
•	Flowcharts concept page
man or help:
•	printf (3)

GitHub
There should be one project repository per group. The other members do not fork or clone the project to ensure only one of the team has the repository in their github account otherwise you risk scoring 0%

More Info
Authorized functions and macros
•	write (man 2 write)
•	malloc (man 3 malloc)
•	free (man 3 free)
•	va_start (man 3 va_start)
•	va_end (man 3 va_end)
•	va_copy (man 3 va_copy)
•	va_arg (man 3 va_arg)

Compilation
•	Your code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
•	As a consequence, be careful not to push any c file containing a main function in the root directory of your project (you could have a test folder containing all your tests files including main functions)
•	Our main files will include your main header file (main.h): #include main.h
•	You might want to look at the gcc flag -Wno-format when testing with your _printf and the standard printf. Example of test file that you could use:

Tasks
                                                                                   
Task 0. -  I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life; 
•	Write a function that produces output according to a format: You need to handle the following conversion specifiers: c, s, %
Task 1. - Education is when you read the fine print. Experience is what you grab if you don’t; 
•	Handle the following conversion specifiers: d & i

Task 2. - With a face like mine, I do better in print;
•	Handle the following custom conversion specifiers:  b: the unsigned int argument is converted to binary
                                                                                        
Task 3. - What one has not experienced, one will never understand in print;
•	Handle the following conversion specifiers:  u, o, x, X

Task 4. -  Nothing in fine print is ever good news;
•	Use a local buffer of 1024 chars in order to call write as little as possible.      
                                                                                    
Task 5. - My weakness is wearing too much leopard print;
•	Handle the following custom conversion specifier: S : prints the string.
•	Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters)
Task 6. - How is the world ruled and led to war? Diplomats lie to journalist and believe these lies when they see them in print;
•	Handle the following conversion specifier: p.                                       
                                                                                    
Task 7. - The big print gives and the small print takes away                               
•	Handle the following flag characters for non-custom conversion specifiers:   +, space, #
       
Task 8. -  Sarcasm is lost in print;                                                      
Handle the following length modifiers for non-custom conversion specifiers:         
•	L
•	h                                                                                   
•	Conversion specifiers to handle: d, i, u, o, x, X                                   
                                                                                    
Task 9. -  Print some money and give it to us for the rain forests;                       
•	Handle the field width for non-custom conversion specifiers.                        
                                                                                    
Task 10. -  The negative is the equivalent of the composer's score, and the print the performance;  
•	Handle the precision for non-custom conversion specifiers.                          
                                                                                    
Task 11. -  It's depressing when you're still around and your albums are out of print;       
•	Handle the 0 flag character for non-custom conversion specifiers.                   
                                                                                    
Task 12. -  Every time that I wanted to give up, if I saw an interesting textile, print whatever, suddenly I would see a collection;
•	Handle the - flag character for non-custom conversion specifiers.
                                                                                    
Task 13. -  Print is the sharpest and the strongest weapon of our party;                  
•	Handle the following custom conversion specifier:                                   
                                                                                    
Task 14. -  The flood of print has turned reading into a process of gulping rather than savoring; 
•	Handle the following custom conversion specifier:  R: prints the rot13'ed string
Task 15. -  *
•	All the above options work well together. 

