# C Programming

C is a general puropse programming language developed by Dennis Ritchie in Bell labs in year 1972. It is a functional, High-level, imparative programming language.

## C Tokens:
A Token is the smallest unit used in a c program. Each  and every puntuations & words that you come across in a c program is token. A compiler breaks a C program into tokens and then proceeds ahead to the next stage used in a compilation process.

### Use of Tokens in C

For instance, without words, you cannot create any sentence, similarly, you cannot create any program witout using tokens in c language. Thous, we can also say that token are the building blocks or the very basic components used in creating any program in c language.

### Classification and types of token in C:

Here are the categories in which we can divide the token in C lanauge:

1. Identifiers in C.
2. Keywords in C.
3. Operators in C.
4. Strings in C.
5. Special Characters in C.
6. Constant in C.


#### Identifiers in C:
-----------------------
These are used to name the arrays, functions, structures, variables etc. The identifiers are user-defined words in the C lanaguge. These ca consist of lowercase letters, uppercase letters, digits, or underscore, but the starting letter should always be either an alphabet or an underscore. We cannot make use of identifiers in the form of keywords. Here are the rules that we must follow when constructing the identifiers.

***Identifiers Naming Rules***:

- Identifiers must not start with a numerical digit.
- First character of Identifier must be an underscore(_) or alphabet and can contain any special characters and number in between.
- Length of Identifiers has no limit, altough best practice is to keep the identifier, short and meaningful.
- We cannot use an identifier for representing the keywords.
- An idetifier does not specify blank spaces or commans.


#### Keywords in C:
------------------------
A Keyword are the reserved word that hold their own importance, meaning in compiler.
- It means that every keywords has a functionality of their own, thus it cannot be used a identifiers.
- C language provides a support for 32 keywords, below are the list:

|    |    |    |    |
|-----|---|---|---|
| auto | enum | const | goto |
| double | case | float | default |
| struct | register | unsigned | sizeof |
| int | typedef | short | volatile |
|break | extern | continue | if |
| else | char | for | do |
|switch | return | void | static |
| long | union | signed | while |

#### **Operators in C:**
-------------------------
- The **operators** in C are the special symbols that we use for performing various functions.
- **Operands** are those data items on which we apply the operators.
- On the basis of total number of Operands, we can classify operators of three types: 
    1. Unary Operators
    2. Binary Operators
    3. Ternary Operators

1. ***Unary Operators***:
They Unary operator in c is a type of operator that gets applied to one single operand, for example: (-) decrement operator, (+) increment operator, (type)*, sizeof, etc.

2. ***Binary Operators***:
Binary operators are the type of operators that we apply between two of the operands. Some of the binary operators are listed below:
    - Relational Operators
    - Arithmetic Operators
    - Logical Operators
    - Shift Operators
    - Conditional Operators
    - Bitwise Operators
    - Misc Operators
    - Assignment Operators

3. ***Ternary Operators***:
Using this operator would require total of three operands.<br/>
ex: a==b?true:false


#### **String in C:**
------------------------

Strings in C always get represented in the form of array of characters. We have a '\0' null character at the end of any string- thus, this null charater represent the end of that string.
<p>
In C language, double quotes enclosed the string, while the characters get enclosed typically within various single characters. The number of characters in a string decieds the size of that string.
</p>
<p>
Now, there are different ways in which we can describe a string.<br/>
</p>

- char x[9] = "Chocolate"; :- Here, the compiler performs allocation of memory and allocates total of 9bytes to the 'x' arary.
- char x[] = "Chocolate"; :- Here the compiler performs allocation of memory during the runtime
- char x[9] = {'c','h','o','c','o','l','a','t','e'} :- Here, we are representing the string in the form of the individiual characters that it has.


#### Special Characters in C
We also use some of the special characters in the C language, and all of them hold a special meaning that we cannot use for any other purpose.

- () Simple brackets – We use these during function calling as well as during function declaration. For instance, the function printf() is pre-defined.
- [ ] Square brackets – The closing and opening brackets represent the multidimensional and single subscripts.
- (,) Comma – We use the comma for separating more than one statement, separating the function parameters used in a function call, and for separating various variables when we print the value of multiple variables using only one printf statement.
- { } Curly braces – We use it during the closing as well as opening of any code. We also use the curly braces during the closing and opening of the loops.
- (*) Asterisk – We use this symbol for representing the pointers and we also use this symbol as a type of operator for multiplication.
- (#) Hash/preprocessor – We use it for the preprocessor directive. This processor basically denotes that the user is utilizing the header file.
- (.) Period – We use the period symbol for accessing a member of a union or a structure.
- (~) Tilde – We use this special character in the form of a destructor for free memory.