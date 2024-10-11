# HW3-OS

Abstract
This document presents a multithreaded program developed in C to compute the sum of integers from 0 to 9999. The program utilizes the Pthreads library to distribute the workload across 10 threads, each responsible for calculating a block of 1000 numbers. The result demonstrates the efficiency of parallel computing for large-scale summations.

Introduction
Multithreading is an essential technique in parallel computing, improving the performance of CPU-bound applications. This project involves a CPU-intensive task that computes the sum of integers from 0 to 9999 by creating 10 threads, each tasked with summing a range of 1000 numbers. The Pthreads library is used to implement multithreading in C. The goal is to explore the benefits of parallel computation by dividing the task among multiple threads and joining the results to compute the final sum.

Methodology
The program divides the summation task into 10 parts. Each thread computes the sum for a range of 1000 numbers, from 0–999, 1000–1999, up to 9000–9999. Once each thread completes its task, the main thread joins all threads, ensuring synchronization, and then aggregates the results to produce the final sum.

The program was developed and tested using Visual Studio Code with appropriate extensions for C/C++ and multithreading. The environment was set up to support the Pthreads library for thread management, compilation, and execution of the multithreaded program.

Results
The program successfully created 10 threads, each calculating a sum of its assigned range. After the threads were joined, the total sum of numbers from 0 to 9999 was correctly computed as 49,995,000. This demonstrates the effectiveness of multithreading in dividing and conquering computational tasks.

Discussion
The use of multithreading in this project highlights its potential to improve performance in CPU-bound applications. By parallelizing the task of summing numbers, the workload is evenly distributed, allowing for faster execution in comparison to a single-threaded approach. The thread synchronization method ensures that the final result is accurate and consistent.

Conclusion
This project showcases the application of multithreading in C using the Pthreads library. By dividing the summation of numbers into smaller tasks and parallelizing them across multiple threads, the overall performance of the application is improved. The project was successfully developed and tested in Visual Studio Code, demonstrating the correct calculation of the sum of numbers from 0 to 9999.
