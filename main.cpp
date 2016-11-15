#include <iostream>
#include "queue.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    Queue Q;
    CreteQueue(Q);
    addDoc(Q);
    addDoc(Q);
    addDoc(Q);

    cout<<endl<<"isi queue : "<<endl;
    printInfo(Q);

    cout<<endl<<"print queue : "<<endl;
    printDoc(Q);

    cout<<endl<<"isi queue : "<<endl;
    printInfo(Q);
    return 0;
}
