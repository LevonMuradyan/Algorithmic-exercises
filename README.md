# Algorithmic-exercises

**1. Calculating arithmetic operations**

Write a program which will allow user to input a valid arithmetic expression 
(number operation number) and will print out the result.

_E.g. Input  5 + 6 Output "5 + 6 = 11"_

**1.1** Enhance the program to print the result of division as a floating point number.

_E.g. Input 10 / 3 Output "10 / 3 = 3.333"_

**1.2** Enhance the program to use "switch" operator instead of if/else


**2. Grades to letters**

Write a program that allows the user to enter the grade scored in a class: 0-100. Notify 
the user of their letter grade: 0-59 F 60-69 D 70-79 C 80-89 B 90-100 A

_E.g. Input 88 - Output "Your grade is B"_

**2.1** Enhance the program to work in "interactive" mode: let the user to continue 
requests and receive output, until -1 is not entered.

**3. Calculate the sum**

Write a program which will input number N in range of [1-1000] and print the sum of all
multiples of 3 and 5 below N.

_E.g. If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 
3, 5, 6 and 9. The sum of these multiples is 23._

**4. Calculate sum of the digits**
Write a program which will input an integer number and will print the sum of the digits of the
number.

_E.g. Input 123 - Output 6 (which is 1 + 2 + 3)_

**5. Inverse the number**
Write a program which will input an integer number and calculate the inverse of the number.
Print the output.

_E.g. Input 163 - Output 361_

**6. Prime numbers**
Input a number and check if it is a prime number. Print the answer.

**6.1** Input number N and print all prime numbers in the range 1-N

**7. Palindrome numbers**

Input a number and check if it is a palindrome number. Print the answer.

_E.g 1789871 is a palindrome_

**8. Concatenate numbers**

Input 2 numbers and concatenate them together.

_E.g. for 35 and 47 the output number should be 3547_

**9. Power of 2**

Input a number and check if it is a power of 2.

**10. Draw rectangle**

Write a program which will input two integer - N and M. The program should "draw" a
rectangle of NxM size using "*" and spaces.

_E.g. Input 6 4_

**10.1** Enhance the program to input the character to be use for "drawing"

_E.g. Input 6 4 $_

**11. Draw triangle**

Write a program which will input an integer number - N, and "draw" two types of right-angled
triangle of height N.

_E.g Input 5_

**12. Draw triangle-2**

Write a program which will input an integer number - N, and "draw" isosceles triangle with
base N.

_E.g. input 5_

**12.1** Enhance the program to print a triangle of height N.

**13. Guess a number**

Write a program that calculates a random number 1 through 100. The program then asks the
user to guess the number. If the user guesses too high or too low then the program should
output "too high" or "too low" accordingly.

The program must let the user continue to guess until the user correctly guesses the number.
Output how many guesses it took the user to correctly guess the right number.

Tip: use standard library functionality to generate the random number:

http://en.cppreference.com/w/cpp/numeric/random/rand

**14. Guess a number (roles changed)**

Write a program which asks the user to think a of random number from 1 to 100 and try to
guess the number. The user must tell the computer whether the guessed number is too high
or too low.

Modify the program so that no matter what number the user thinks of (1-100) the computer
can guess it in 7 or less guesses.

**15. Minimum and maximum**

Write a program to input 10 numbers and find the minimal and maximal numbers in the
sequence. Print the results.

**16. Occurence of numbers**

Write a program which will allow user to input numbers in range 1-10 (as much as the user
would like to, till -1 is entered). Calculate and print how many times each of the numbers have
been entered.

**17. Decimal to binary**

Write a program to input a number and convert it to binary (e.g in 4 bits)

_E.g Input 5 , Output 0101_

**17.1** Enhance the program to support also negative numbers (calculate 2's complement)

**18. Binary to decimal**

Write a program to input a binary number (a sequence of 0-1s) and convert it to decimal. Print
the results.

**19. Remove a number**

Write a program that asks the user to type 10 integers of an array and an integer value N. The
program must search if the value N exists in the array and must remove the first occurrence
of N, shifting each following element left and adding a zero at the end of the array. The
program must then print the final array.

**20.** Input a sequence of N numbers and print it in reverse order.

**21.** Print the sum of all numbers in the given sequence of N whole numbers.

**22.** Input a sequence of N whole numbers and print Yes if the numbers in the sequence are
sorted in ascending/descending order.

**23.** Input a sequence of N numbers and sort the sequence in ascending/descending order.

**24.** Delete the M-th element in the sequence of N numbers (e.g. delete the 3rd element from
the [1,4,5,6,3] sequence and end up with [1,4,6,3] sequence).

**25.** Insert the number K into sequence of N numbers in the beginning/end. Do the same but
insert the element into M-th place.

**26.** Input a word/string (sequence of symbols) and make all of the letters capital/small.

**27.** Input two words/strings and check if they are anagram (e.g. “mary” and “army” are anagram, 
i.e.have the same symbols but in different order).

**28.** Given two strings, check if one is a substring of the other (e.g. “cat” is a substring
“complicated”.
