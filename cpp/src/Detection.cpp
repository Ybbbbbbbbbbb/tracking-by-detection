#include "Detection.h"

// Constructors

Detection::Detection(const std::string &className, const BoundingBox &bb)
        : className(className), bb(bb) {}

Detection::Detection(const Detection &rhs)
        : className(rhs.className), bb(rhs.bb) {}

Detection::Detection(Detection &&rhs)
        : className(std::move(rhs.className)), bb(std::move(rhs.bb)) {}

// Functions

double Detection::iou(const Detection &a, const Detection &b) {
    return BoundingBox::iou(a.bb, b.bb);
}

std::ostream &operator<<(std::ostream &os, const Detection &d) {
    os << d.className << " " << d.bb;
    return os;
}