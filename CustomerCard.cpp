#include "CustomerCard.h"
#include "ui_customercard.h"

CustomerCard::CustomerCard(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CustomerCard)
{
    ui->setupUi(this);
}

CustomerCard::~CustomerCard()
{
    delete ui;
}
