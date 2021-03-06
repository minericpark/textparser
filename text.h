/*  Eric Minseo Park
    1001018
    epark03@uoguelph.ca   */

#include <stdio.h>
#include <stdlib.h>

struct node_struct {
    void *data;
    struct node_struct *next;
};

struct node_struct *txt2words (FILE *fp);
struct node_struct *search (struct node_struct *list, char *target, int (*compar)(const void *, const void *));
struct node_struct *copy (struct node_struct *start, struct node_struct *end);
void ftext (FILE *fp, struct node_struct *list);
struct node_struct *sort (struct node_struct *list, int (*compar)(const void *, const void *));
void remove_repeats (struct node_struct *list, int (*compar)(const void *, const void *));
int length (struct node_struct *list);
void free_list (struct node_struct *list, int free_data);

int isTypeOne (char checkSymbol);
int isTypeTwo (char checkSymbol);
void print_list (struct node_struct *head, int type);
int strcmpvoid (const void *a, const void *b);
int strcmpsort (const void *a, const void *b);

void merge (char** listArray, int first, int middle, int last, int (*compar)(const void *, const void *));
void mergeSort (char** listArray, int first, int last, int (*compar)(const void *, const void *));