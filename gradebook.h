#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <QMainWindow>
#include <QObject>

namespace Ui {
class gradebook;
}

class gradebook : public QMainWindow
{
    Q_OBJECT

public:
    explicit gradebook(QWidget *parent = 0);
    ~gradebook();

private:
    Ui::gradebook *ui;
};

#endif // GRADEBOOK_H
