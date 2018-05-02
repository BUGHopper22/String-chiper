#ifndef TESTO_H
#define TESTO_H
#include<Qvector>
#include<Qstring>
#include<QChar>
using namespace std;

class testo{
private:
    QString text;
public:
    static const ushort alphSize;  //probabilmente nella parte privata?

    testo(QString text="");
    //virtual ~testo();     DA DEFINIRE PIU TARDI

    //___SETTER___
    void setText(QString);

    //___GETTER___
    QString getText() const;
    QChar getLetter(int) const;
    int getSize() const ;

    //___METODI___
    virtual void converti() =0;
    virtual void encrypt() =0;
    virtual void decrypt() =0;
    virtual void reset();
};







#endif // TESTO_H
