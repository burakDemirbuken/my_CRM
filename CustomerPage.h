#ifndef CUSTOMERPAGE_H
#define CUSTOMERPAGE_H

#include <QWidget>

namespace Ui {
class CustomerPage;
}

class CustomerPage : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerPage(QWidget *parent = nullptr);
    ~CustomerPage();

private:
    Ui::CustomerPage *ui;
};

#endif // CUSTOMERPAGE_H
