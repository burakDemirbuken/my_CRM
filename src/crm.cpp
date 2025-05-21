#include "crm.hpp"
#include "CustomerPage.hpp"
#include "ui_crm.h"

CRM::CRM(QWidget *parent) : QMainWindow(parent)
	, ui(new Ui::CRM)
{
	ui->setupUi(this);

	CustomerPage *customerPage = new CustomerPage(this);

	ui->pageStackedWidget->addWidget(customerPage);

	ui->pageStackedWidget->setCurrentWidget(customerPage);

	connect(ui->customerButton, &QPushButton::clicked, this, [=]() {
		ui->pageStackedWidget->setCurrentWidget(customerPage);
	});
}

CRM::~CRM()
{
	delete ui;
}
