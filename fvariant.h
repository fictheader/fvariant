#ifndef FVARIANT_H
#define FVARIANT_H

#include <QVariant>

template<class T>
class FVariant : public QVariant {
public:
    FVariant() : QVariant() {}
    FVariant(T val) : QVariant(val) {}
    FVariant(const FVariant&) = default;
    virtual ~FVariant() = default;
};

#endif // FVARIANT_H
