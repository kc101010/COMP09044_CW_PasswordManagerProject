#include <QException>
#include <QDebug>

#ifndef INPUTVALEXCEPT_H
#define INPUTVALEXCEPT_H

//class extends QException, custom exception used for input validation
class Inputvalexcept : public QException
{
public:
    Inputvalexcept();
    void raise() const override;
    Inputvalexcept *clone() const override;
};

#endif // INPUTVALEXCEPT_H
