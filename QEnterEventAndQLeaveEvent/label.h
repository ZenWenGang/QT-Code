#ifndef LABEL_H
#define LABEL_H

#include <QLabel>
#include <QWidget>

class label : public QLabel
{
    Q_OBJECT
public:
    label(QWidget* parent);

    void enterEvent(QEvent* event);
    void leaveEvent(QEvent* event);
};

#endif // LABEL_H
