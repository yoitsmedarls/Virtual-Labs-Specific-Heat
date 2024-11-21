#include "Liquid.hpp"

#include <iostream>

/* Special methods */

Liquid::Liquid()
{
    std::cout << "Liquid | Default constructor called..." << std::endl;
}

Liquid::Liquid(double mass, double temperature, double specificHeatCapacity,
               double density, double volume, double boilingPoint, double freezingPoint)
    : Substance(mass, temperature, specificHeatCapacity)
{
    std::cout << "Liquid | Constructor called..." << std::endl;

    m_density = density;
    m_volume = mass / density;
    m_boilingPoint = boilingPoint;
    m_freezingPoint = freezingPoint;
}

Liquid::Liquid(const Liquid &copy)
{
    std::cout << "Liquid | Copy constructor called..." << std::endl;
}

Liquid::~Liquid()
{
    std::cout << "Liquid | Destructor called..." << std::endl;
}

/* Operator overloads */

Liquid &Liquid::operator=(const Liquid &copy)
{
    std::cout << "Liquid | Copy assignment operator used..." << std::endl;

    if (&copy == this)
    {
        return *this;
    }
}

/* Getters */

double Liquid::getDensity()
{
    return m_density;
}

double Liquid::getVolume()
{
    return m_volume;
}

double Liquid::getBoilingPoint()
{
    return m_boilingPoint;
}

double Liquid::getFreezingPoint()
{
    return m_freezingPoint;
}

/* Setters */

void Liquid::setDensity(double density)
{
    m_density = density;
}
void Liquid::setVolume(double volume)
{
    m_volume = volume;
}
void Liquid::setBoilingPoint(double boilingPoint)
{
    m_boilingPoint = boilingPoint;
}
void Liquid::setFreezingPoint(double freezingPoint)
{
    m_freezingPoint = freezingPoint;
}
