# Aim: To study and implement C++ Arrays and Strings
# Apparatus Required:
Visual Studio

# Theory:

Arrarys:

An array in C or C++ is a collection of items stored at contiguous memory locations and elements can be accessed randomly using indices of an array. They are used to store similar types of elements as in the data type must be the same for all elements. They can be used to store the collection of primitive data types such as int, float, double, char, etc of any particular type. To add to it, an array in C or C++ can store derived data types such as the structures, pointers, etc. There are two types of arrays:

+ One Dimensional Array
  
+ Multi Dimensional Array

2. <ins>One Dimensional Array</ins>: A one dimensional array is a collection of same data.

<img width="800" height="400" alt="Screenshot 2025-08-06 083128" src="https://github.com/user-attachments/assets/66e5d96f-f8d1-41a0-be93-f260f123d047" />

1. <ins>Multi-Dimensional Array</ins>: A multi-dimensional array is also known as array of arrays. Generally, we use a two-dimensional array. It is also known as the matrix. We use two indices to traverse the rows and columns of the 2D array

Strings:

C++ string class internally uses character array to store character but all memory management, allocation, and null termination are handled by string class itself that is why it is easy to use.

The string data_type in C++ provides various functionality of string manipulation. They are:

+ strcpy(): It is used to copy characters from one string to another string.
+ strcat(): It is used to add the two given strings.
+ strlen(): It is used to find the length of the given string.
+ strcmp(): It is used to compare the two given string.

# Implementation:
The following cases demonstrate the usage of arrays and strings in C++
+ Basic array decleration and printing
+ Array element Search
+ Min and Max Values in Arrays
+ Reverse Array

# Algorithms:

For Arrays :

Algorithm: Linear Search in an Array

1. Start

2. Declare an integer array num of size 10 and initialize with {30, 40, 50, 60}.

3. Declare an integer variable key.

4. Display a message: "Enter the value to search in the array:".

5. Read the value of key from the user.

6. Loop variable j from 0 to 4:

If key == num[j]:

7. Display "Key found at Location:" followed by j.

8. Exit the loop.

9. End


Algorithm: Reverse the Elements of an Array

1. Start

2. Declare an integer variable x.

3. Display the message: "Enter the size of array:".

4. Read the value of x from the user.

5. Declare an integer array num of size x.

6. Display the message: "Enter any x integer values:".

7. For i from 0 to x-1:

8. Read num[i].

9. Display the message: "Reversed Array is:".

10. For j from x-1 down to 0:

11. Display num[j] followed by a space.

12. End


Algorithm: Check if a String is a Palindrome

1. Start

2. Declare a string variable str.

3. Declare integer variables n and x = 0.

4. Display the message: "Enter a String:".

5. Read the string str from the user.

6. Set n = length of str.

7. For i from 0 to n-1:

If str[i] == str[n-1-i], then increment x by 1.

If x == n:

 Display "It is a palindrome".

Else:

Display "It is not a palindrome".

9. End


Algorithm: Reverse a String

1. Start

2. Declare a string variable str.

3. Declare an integer variable n.

4. Display the message: "Enter a String:".

5. Read the string str from the user.

6. Set n = length of str.

7. For i from n-1 down to 0:

8. Display str[i].

9. End


# Conclusion:
The Implentation of Strings and Array was done through various codes in C++
