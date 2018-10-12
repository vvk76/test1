#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include <QWidget>
#include <QFrame>
#include <QLineEdit>
#include <QMouseEvent>
#include <QDebug>

class MyFrame : public QFrame{

    Q_OBJECT
public:
    MyFrame(QWidget *parent = 0){qDebug()<<"constructor..........";}

//protected:
    /*virtual*/ void mousePressEvent(QMouseEvent *event){
        qDebug()<<"x="<<event->x()<<"  y="<<event->y();
        //emit mess("x=" +QString::number(event->x())+"  y="+QString::number(event->y()));
    }

signals:
    void mess(QString);
};

class CentralWidget : public QWidget
{
    Q_OBJECT
public:
    explicit CentralWidget(QWidget *parent = 0);

    MyFrame *frame1;
    QLineEdit *le1;


signals:

public slots:

    void view(QString);

};

#endif // CENTRALWIDGET_H
