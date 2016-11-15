#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
#define head(Q) Q.head
#define tail(Q) Q.tail
#define info(Q) Q.info

using namespace std;
const int MAKS = 5;

struct infotype {

    string namaDoc;
    int nHalaman;
};

struct Queue {

    infotype info[5];
    int head,tail;
};

void CreteQueue (Queue &Q);
bool isEmptyQueue (Queue Q);
bool isFullQueue (Queue Q);
void enqueue (Queue &Q, infotype x);
infotype dequeue (Queue &Q);
void printInfo (Queue Q);
void addDoc (Queue &Q);
void printDoc(Queue &Q);

#endif // QUEUE_H_INCLUDED
