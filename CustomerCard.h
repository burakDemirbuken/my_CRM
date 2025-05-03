#ifndef CUSTOMERCARD_H
#define CUSTOMERCARD_H

#include <QWidget>

namespace Ui {
class CustomerCard;
}

class CustomerCard : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerCard(QWidget *parent = nullptr);
    ~CustomerCard();

private:
    Ui::CustomerCard *ui;
};

#endif // CUSTOMERCARD_H
