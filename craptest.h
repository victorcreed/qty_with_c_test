#ifndef CRAPTEST_H
#define CRAPTEST_H

#include <QMainWindow>

namespace Ui {
class CrapTest;
}

class CrapTest : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CrapTest(QWidget *parent = 0);
    ~CrapTest();
    
private:
    Ui::CrapTest *ui;
};

#endif // CRAPTEST_H
