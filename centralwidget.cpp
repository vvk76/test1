#include "centralwidget.h"
#include <QVBoxLayout>

CentralWidget::CentralWidget(QWidget *parent) :
    QWidget(parent)
{
    QVBoxLayout *vlay = new QVBoxLayout(this);

    frame1 = new MyFrame(this);
    frame1->setFrameStyle(QFrame::Box | QFrame::Sunken);
    vlay->addWidget(frame1);

    connect(frame1, SIGNAL(mess(QString)), this, SLOT(view(QString)));


    le1 = new QLineEdit(this);
    vlay->addWidget(le1);

}

void CentralWidget::view(QString s){
    le1->setText(s);
}

