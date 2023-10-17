# Impledge_OA_question

# Steps to execute the code
1. On any compiler with cpp language selected on it, upload the Compounded.cpp source code file.
2. Upload the input_02.txt file as input. Run the file. Output will be displayed in the desired format in output.txt file

# Overview of program and Approach
1. I have solved this problem using partition DP algorithm.
2. For improving the performance of the program, I have sorted the input in decreasing order of their length.
3. The program starts checking words in decreasing order of their length and stops after getting two words -(longest and second longest words).
4. For checking a word to be compounded or not I have used DP algorithm.

# Time and Space Complexity
1. Time Complexity - O(n * L^2), where n is the number of words in the input list and L is the maximum length of the words.
2. Space Complexity - O(n * L), where n is the number of words in the input list and L is the maximum length of the words.
