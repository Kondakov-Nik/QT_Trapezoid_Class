// Вычисление периметра и площади трапеции
// @author Кондакаков Н.С.

#ifndef CALC_H
#define CALC_H

#include <stdexcept>

///  класс трапеция
class Trap{

private:
    float ab_1;   // левая боковая сторона ab
    float bc_1;	// верхнее основание bc
    float cd_1;   // права боковая сторона cd
    float ad_1;   // нижнее основание ad

public:

    Trap();
    Trap(float ab, float bc, float cd, float ad); // ab-боковая сторона, bc-верхнее основание, cd-боковая сторона, ad-нижнее основание

    /// Задать трапецию ....
    void set_trap(float ab, float bc, float cd, float ad); // ab-боковая сторона, bc-верхнее основание, cd-боковая сторона, ad-нижнее основание

    /// Задать боковую сторону ab
    void set_ab(float ab);

    /// Задать верхнее основание bc
    void set_bc(float bc);

    /// Задать бокову сторону cd
    void set_cd(float cd);

    /// Задать нижнее основание ad
    void set_ad(float ad);

    /// Получить сторону ab
    float get_ab() const;

    /// Получить сторону bc
    float get_bc() const;

    /// Получить сторону cd
    float get_cd() const;

    /// Получить сторону ad
    float get_ad() const;

    /// Получить площадь
    float square();

    /// Получить периметр
    float perimeter();
};

#endif
