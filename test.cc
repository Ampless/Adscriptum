#include <QApplication>
#include <QtWidgets>
#include "test.hh"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    MainWidget w;
    w.show();

    return a.exec();
}

MainWidget::MainWidget(QWidget *parent) : QWidget(parent) {
   button_ = new QPushButton(tr("Push Me!"));
   textBrowser_ = new QTextBrowser();

   QGridLayout *mainLayout = new QGridLayout;
   mainLayout->addWidget(button_,0,0);
   mainLayout->addWidget(textBrowser_,1,0);
   setLayout(mainLayout);
   setWindowTitle(tr("Connecting buttons to processes.."));
}

MainWidget::~MainWidget() {
   delete button_;
   delete textBrowser_;
}
