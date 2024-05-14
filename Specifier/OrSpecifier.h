//
// Created by ibrahimelsheikh on 5/14/2024.
//

#pragma once

#include "Specifier.h"
#include "../Product/Product.h"
#include "LessWeightSpecifier.h"
#include "ColorSpecifier.h"


class OrSpecifier : public Specifier {
public:
    Specifier *specifier1;
    Specifier *specifier2;

    OrSpecifier(Specifier *s1, Specifier *s2) {
        specifier1 = s1;
        specifier2 = s2;
    }

    bool specify(Product p) {
        return specifier1->specify(p) || specifier2->specify(p);
    }
};