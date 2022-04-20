/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - Input Validation Exception header/definition
 * Class used for Input Validation errors
*/


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
