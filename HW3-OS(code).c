#include <pthread.h>
#include <stdio.h>

#define NUM_THREADS 10
#define RANGE 1000

// Structure to pass data to each thread
typedef struct {
    int start;
    int end;
    long sum;
} ThreadData;

// Function that each thread will run
void *calculate_sum(void *arg) {
    ThreadData *data = (ThreadData *)arg;
    data->sum = 0;
    for (int i = data->start; i <= data->end; i++) {
        data->sum += i;
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t threads[NUM_THREADS];
    ThreadData thread_data[NUM_THREADS];
    long total_sum = 0;

    // Create threads to calculate the sum of each range
    for (int i = 0; i < NUM_THREADS; i++) {
        thread_data[i].start = i * RANGE;
        thread_data[i].end = (i + 1) * RANGE - 1;
        pthread_create(&threads[i], NULL, calculate_sum, (void *)&thread_data[i]);
    }

    // Join threads and accumulate the sum
    for (int i = 0; i < NUM_THREADS; i++) {
        pthread_join(threads[i], NULL);
        total_sum += thread_data[i].sum;
    }

    // Print the total sum
    printf("Total sum from 0 to 9999 is: %ld\n", total_sum);
    
    return 0;
}
