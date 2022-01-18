#ifndef DIGITALUHR_H
#define DIGITALUHR_H

#include <QMainWindow>
#include <QLCDNumber>
#include <QTimer>
#include <QMouseEvent>

class Digitaluhr : public  QLCDNumber
{
Q_OBJECT
public:
   Digitaluhr();
protected:
void mousePressEvent(QMouseEvent *event);

//die Methoden und Attribute
private:
void zeigeUhrzeit();
void zeigeDatum();
void stopDatum();

//private:
//void zeigeUhrzeit();
bool doppelpunkt;
QTimer* timerZeit;
//der zweite Timer
QTimer* timerDatum;
private slots:
void timerZeitSlot();
private slots:
//die Methode für den zweiten Timer
void timerDatumSlot();
};

#endif // DIGITALUHR_H
