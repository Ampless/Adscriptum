#pragma once

#include <QWidget>

class QPushButton;
class QTextBrowser;

class MainWidget : public QWidget {
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = 0);
    ~MainWidget();

private:
   QPushButton* button_;
   QTextBrowser* textBrowser_;
};
