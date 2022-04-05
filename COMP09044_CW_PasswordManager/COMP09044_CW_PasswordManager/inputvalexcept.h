#include <QException>
#include <QDebug>

#ifndef INPUTVALEXCEPT_H
#define INPUTVALEXCEPT_H


class Inputvalexcept : public QException
{
public:
    Inputvalexcept();
    void raise() const override;
    Inputvalexcept *clone() const override;
};

#endif // INPUTVALEXCEPT_H
