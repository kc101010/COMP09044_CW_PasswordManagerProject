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

