/*
 * B00415210 COMP09044 CW2
 * Password Manager Project - Input Validation Exception class
 * Class used for Input Validation errors
*/

#include "inputvalexcept.h"

Inputvalexcept::Inputvalexcept()
{
    qDebug() << this->what();
}

void Inputvalexcept::raise() const{
    throw *this;
}

Inputvalexcept *Inputvalexcept::clone() const {
    return new Inputvalexcept(*this);
}

