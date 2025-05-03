#include "crm.hpp"
#include "ui_crm.h"
#include "stockPage.h"
#include "customerPage.h"

CRM::CRM(QWidget *parent) : QMainWindow(parent)
	, ui(new Ui::CRM)
{
	ui->setupUi(this);

}

CRM::~CRM()
{
	delete ui;
}
