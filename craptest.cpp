#include "craptest.h"
#include "ui_craptest.h"

CrapTest::CrapTest(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CrapTest)
{
    ui->setupUi(this);
}

CrapTest::~CrapTest()
{
    delete ui;
}
