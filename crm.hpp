#ifndef CRM_HPP
#define CRM_HPP

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class CRM;
}
QT_END_NAMESPACE

class CRM : public QMainWindow
{
    Q_OBJECT

public:
    CRM(QWidget *parent = nullptr);
    ~CRM();

private:
    Ui::CRM *ui;
};
#endif // CRM_HPP
