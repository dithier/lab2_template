// Modify this file
// compile with: gcc -Wall linkedlist.c -o linkedlist

#include <stdio.h>
#include <stdlib.h> // contains the functions free/malloc

// do not add any additional libraries

// use the following struct verbatim for your linked list

typedef struct node {
    int years;
    int numWins;
    struct node* next;
} node_t;

// TODO: Complete the functions below.
// You may create as many helper functions as you like.
// Don't edit main for this assignment.

node_t* create_list(int* scores, int* years, int length) {

    //TODO complete me!
    return NULL; // this line is here so the code compiles; remove it
}

// use the iterator pattern!
void print_list(node_t* list) {

    //TODO complete me!
}

// use the iterator pattern here too!
void free_list(node_t* list) {

    //TODO complete me!
}

int main() {

    // we're using statically allocated arrays here
    // in the bonus activity, you can work on importing data from a file
    //      using a bash script
    // do not change any code in main in your submitted lab

    int wins[] = {83, 93, 89, 76, 73, 67, 32, 91, 92};
    int years[] = {2014, 2015, 2016, 2017, 2018, 2019, 2020, 2021, 2022};
    node_t* blueJays_stats = create_list(wins, years, 9);
    print_list(blueJays_stats);
    free_list(blueJays_stats);

    return 0;
}
