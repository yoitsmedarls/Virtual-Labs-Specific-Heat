#ifndef CONTAINER
#define CONTAINER

#include "Substance.hpp"
#include "Liquid.hpp"
#include "Metal.hpp"

class Container
{
protected:
    double m_diameter;
    double m_height;
    double m_volume;
    double m_topSurfaceArea;
    Liquid m_contained_liquid;
    Metal m_contained_metal;

public: // Special methods
    /// @brief Default constructor
    Container();

    /// @brief Constructor with arguments for the class fields
    Container(double diameter, double height, double volume, double topSurfaceArea,
              Liquid contained_liquid, Metal contained_metal);

    /// @brief Copy constructor
    /// @param copy
    Container(const Container &copy);

    /// @brief Destructor
    ~Container();

public: // Operator overloads
    /// @brief Copy assignment operator
    /// @param copy
    /// @return
    Container &operator=(const Container &copy);

public: // Getters and Setters
    double getMass();
    double getTemperature();
    double getSpecificHeatCapacity();

    void setMass(double mass);
    void setTemperature(double temperature);
    void setSpecificHeatCapacity(double specificHeatCapacity);

public: // Other methods
};

#endif