#ifndef FINDCRAP_H
#define FINDCRAP_H

#include <QWidget>

namespace Ui {
class FindCrap;
}

class FindCrap : public QWidget
{
    Q_OBJECT

public:
    explicit FindCrap(QWidget *parent = 0);
    ~FindCrap();

private slots:
    void on_goButton_clicked();

private:
    Ui::FindCrap *ui;
    void getTextFile();
};

#endif // FINDCRAP_H
