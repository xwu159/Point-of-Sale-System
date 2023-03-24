#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Movie.h"

int loadMovie(struct Movie* mptr, FILE* fptr) {
    if (fscanf(fptr, "%60[^\t]\t%d\t%3s\t%d\t%60[^\t]\t%f\n", mptr->name, &mptr->year, mptr->rating, &mptr->duration, mptr->genre, &mptr->consumerRating) == 6) {
        return 1;
    }
    return 0;
}


void printInWidth(const char str[], int width) {
    int i;
    for (i = 0; i < width && str[i]!='\0'; i++) {
        putchar(str[i]);
    }
    for (; i < width; i++) {
        putchar(' ');
    }
}



void list(const struct Movie* mptr, int row) {
    printf("|%4d | ", row);
    printInWidth(mptr->name, 20);
    printf(" |%5d |%5s | %d:%02d | ", mptr->year, mptr->rating, mptr->duration / 60, mptr->duration % 60);
    printInWidth(mptr->genre, 25);
    printf(" |%5.1f |\n", mptr->consumerRating);
}




void display(const struct Movie* m) {
    printf("Title: %s\n", m->name);
    printf("Year: %d\n", m->year);
    printf("Rating: %s\n", m->rating);
    printf("Duration: %d:%02d\n", m->duration / 60, m->duration % 60);
    printf("Genres: %s\n", m->genre);
    printf("Consumer Rating: %3.1f\n", m->consumerRating);

}



const char* getMovieTitle(const struct Movie* mptr) {
    return mptr->name;
}


