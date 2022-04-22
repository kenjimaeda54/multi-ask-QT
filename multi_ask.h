#ifndef MULTI_ASK_H
#define MULTI_ASK_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Multi_Ask; }
QT_END_NAMESPACE

class Multi_Ask : public QMainWindow
{
    Q_OBJECT

public:
    Multi_Ask(QWidget *parent = nullptr);
    ~Multi_Ask();

private:
    Ui::Multi_Ask *ui;
};
#endif // MULTI_ASK_H
