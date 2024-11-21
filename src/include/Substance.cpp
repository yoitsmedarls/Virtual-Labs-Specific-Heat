#include "Substance.hpp"
#include "Substance.hpp"

#include <iostream>

/* Special methods */

Substance::Substance()
{
    std::cout << "Substance | Default constructor called..." << std::endl;
}

Substance::Substance(double mass, double temperature, double specificHeatCapacity)
{
    std::cout << "Substance | Constructor called..." << std::endl;

    m_mass = mass;
    m_temperature = temperature;
    m_specificHeatCapacity = specificHeatCapacity;
}

Substance::Substance(const Substance &copy)
{
    std::cout << "Substance | Copy constructor called..." << std::endl;
}

Substance::~Substance()
{
    std::cout << "Substance | Destructor called..." << std::endl;
}

/* Operator overloads */

Substance &Substance::operator=(const Substance &copy)
{
    std::cout << "Substance | Copy assignment operator used..." << std::endl;

    if (&copy == this)
    {
        return *this;
    }
}

/* Getters */

double Substance::getMass()
{
    return m_mass;
}

double Substance::getTemperature()
{
    return m_temperature;
}

double Substance::getSpecificHeatCapacity()
{
    return m_specificHeatCapacity;
}

/* Setters */

void Substance::setMass(double mass)
{
    m_mass = mass;
}

void Substance::setTemperature(double temperature)
{
    m_temperature = temperature;
}

void Substance::setSpecificHeatCapacity(double specificHeatCapacity)
{
    m_specificHeatCapacity = specificHeatCapacity;
}
