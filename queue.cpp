#include "queue.h"

void CreteQueue (Queue &Q)
{
    int i;
    for (i=0; i<MAKS; i++)
    {
        Q.info[i].nHalaman=0;
        Q.info[i].namaDoc="";
    }
    head(Q)=-1;
    tail(Q)=-1;
}
bool isEmptyQueue (Queue Q)
{

    bool p = false;
    if(head(Q)==-1)
    {
        p=true;
    }
    return p;
}

bool isFullQueue (Queue Q)
{

    bool p = false;
    if(tail(Q)+1 == head(Q))
    {
        p = true;
    }
    if(head(Q)==0 && tail(Q)== MAKS){
        p=true;
    }
    return p;
}
void enqueue (Queue &Q, infotype x)
{
    if(isEmptyQueue(Q)==true){
        head(Q)=0;
        tail(Q)=0;
        Q.info[tail(Q)]=x;
    }
    else if(isEmptyQueue(Q)==false && isFullQueue(Q)==false){
        tail(Q)++;
        Q.info[tail(Q)]=x;
    }
    else{
        cout<<"data penuh";
    }

}

infotype dequeue (Queue &Q)
{
    infotype x;

    x= Q.info[head(Q)];
    if(head(Q)== tail(Q))
    {
        head(Q)=0;
        tail(Q)=0;
    }
    if (head(Q)!= -1)
    {
        if(head(Q)== MAKS)
        {
            head(Q)=1;
        }
        else
        {
            head(Q)++;
        }
    }
    return x;
}
void printInfo (Queue Q)
{

    bool p,q;
    int i;
    p = isEmptyQueue(Q);
    q = isFullQueue(Q);

    if(p == true)
    {
        cout<<""<<head(Q)<<"-"<<tail(Q)<<"|"<<"empty queue"<<endl;
    }
    else
    {
        //cout<<""<<head(Q)<<"-"<<tail(Q)<<"         |";
        for (i = head(Q); i<=tail(Q); i++)
        {
            cout<<Q.info[i].namaDoc<<","<<Q.info[i].nHalaman<<" halaman "<<endl;
        }
    }
    cout<<endl;
}


void addDoc (Queue &Q)
{

    infotype Doc;
    cout<<"Nama Dokumen : ";
    cin>>Doc.namaDoc;
    cout<<"Halaman  : ";
    cin>>Doc.nHalaman;

    enqueue(Q,Doc);

}
void printDoc(Queue &Q)
{
    infotype Doc;
    bool p;
    int i;
    p = isEmptyQueue(Q);
    Doc = Q.info[head(Q)];

    if(p == true)
    {
        cout<<""<<head(Q)<<"-"<<tail(Q)<<"|"<<"empty queue"<<endl;
    }
    cout<<"Printing "<<Doc.namaDoc<<endl;
    for (i=1; i<=Doc.nHalaman; i++)
    {
        cout<<"Print page "<<i<<" of "<<Doc.nHalaman<<endl;
    }
    dequeue(Q);
}
