#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H

struct Movie {
    char name[61];
    int year;
    char rating[4];
    int duration;
    char genre[61];
    float consumerRating;
};

int loadMovie(struct Movie* mptr, FILE* fptr);
void printInWidth(const char str[], int width);
void list(const struct Movie* mptr, int row);
void display(const struct Movie* m);
const char* getMovieTitle(const struct Movie* mptr);

#endif

