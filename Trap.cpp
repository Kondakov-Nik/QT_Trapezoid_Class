// Вычисление периметра и площади трапеции
// @author Кондакаков Н.С.

#include "Trap.h"
#include <math.h>

/// Конструктор без параметров
Trap::Trap() {
    ab_1 = 0;  bc_1 = 0;  cd_1 = 0; ad_1 = 0;
}

/// Конструктор с параметрами
Trap::Trap(float ab, float bc, float cd, float ad) { // ab-боковая сторона, bc-верхнее основание, cd-боковая сторона, ad-нижнее основание
    ab_1 = ab; // левая боковая сторона ab
    bc_1 = bc; // верхнее основание bc
    cd_1 = cd; // права боковая сторона cd
    ad_1 = ad; // нижнее основание ad
}

/// Задать трапецию
void Trap::set_trap(float ab, float bc, float cd, float ad) { // ab-боковая сторона, bc-верхнее основание, cd-боковая сторона, ad-нижнее основание
    set_ab(ab); // левая боковая сторона ab
    set_bc(bc); // верхнее основание bc
    set_cd(cd); // права боковая сторона cd
    set_ad(ad); // нижнее основание ad
}

/// Задать ab
void Trap::set_ab(float ab) {
    if (ab <= 0) throw std::invalid_argument("");
    ab_1 = ab;
}

/// Задать ab
void Trap::set_bc(float bc) {
    if (bc <= 0) throw std::invalid_argument("");
    bc_1 = bc;
}

/// Задать  cd
void Trap::set_cd(float cd) {
    if (cd <= 0) throw std::invalid_argument("");
    cd_1 = cd;
}

/// Задать ad
void Trap::set_ad(float ad) {
    if (ad <= 0) throw std::invalid_argument("");
    ad_1 = ad;
}

/// Получить сторону ab
float Trap::get_ab() const { return ab_1; }

/// Получить сторону bc
float Trap::get_bc() const { return bc_1; }

/// Получить сторону cd
float Trap::get_cd() const { return cd_1; }

/// Получить сторону ad
float Trap::get_ad() const { return ad_1; }


/// Получить площадь
float Trap::square() {
    return 0.5 * (bc_1 + ad_1) * sqrt((ab_1 * ab_1) - ((pow((bc_1 - ad_1),2)+ab_1*ab_1-cd_1*cd_1)/(2*(bc_1 - ad_1))));
}

/// Получить периметр
float Trap::perimeter() {
    return ab_1 + bc_1 + cd_1 + ad_1;
}
