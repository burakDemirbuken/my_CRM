#include "CustomerPage.h"
#include "ui_customerpage.h"

CustomerPage::CustomerPage(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CustomerPage)
{
    ui->setupUi(this);
}

CustomerPage::~CustomerPage()
{
    delete ui;
}
