# HW3-OS

Description
This project was part of my Homework 3 for the Operating Systems course. The task was to create a multithreaded C program that calculates the sum of numbers from 0 to 9999 using the Pthreads library. The program is structured so that 10 separate threads are created, each responsible for summing a block of 1000 numbers. After the threads complete their tasks, the main program combines their results and prints the total sum.

Files
The project includes the following files:

HW3-OS(code).c: This is the C program that implements the multithreaded sum calculator.
Intro to OS HW 3.pdf: A PDF file that contains all the questions and answers from my Homework 3 assignment, including this programming task.
README.md: The file you are currently reading, which explains the purpose of the project and provides an overview of how it works.
How I Compiled and Ran the Program
I worked on the project using Visual Studio Code on my machine. I had set up the environment by installing the necessary C/C++ extensions to ensure smooth code editing and compiling within VS Code. After writing the program, I compiled it using gcc with support for Pthreads, the library that allows multithreading in C.

Once the program was compiled, I ran it directly in the integrated terminal within VS Code. The program executed successfully, with all 10 threads computing their respective ranges of numbers. The final result was the sum of all numbers from 0 to 9999, which was correctly calculated and displayed.

How the Code Works
The core of the program is a multithreaded approach to summing numbers from 0 to 9999. The task is divided among 10 threads, each responsible for calculating the sum of a range of 1000 numbers. For example, the first thread sums the numbers from 0 to 999, the second thread sums the numbers from 1000 to 1999, and so on. Each thread performs its calculation independently.

Once all threads have completed their work, the main thread waits for them to finish and then gathers the results. This is done through a process called "joining" threads, which ensures that the main thread does not proceed until all worker threads have completed their tasks. After gathering the partial sums from each thread, the main thread adds them together to compute the total sum.

The expected output of the program is the sum of all numbers from 0 to 9999, which is 49,995,000. The program successfully demonstrates the use of multithreading to parallelize the calculation, making it more efficient by distributing the workload across multiple threads.

Conclusion
This project showcases a practical application of multithreading in C using the Pthreads library. By breaking down a simple sum calculation into parallel tasks, the program efficiently distributes the workload among 10 threads. The project was compiled and executed within VS Code, and the results were as expected, demonstrating the effectiveness of the multithreading approach.
