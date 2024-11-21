#ifndef LIQUID
#define LIQUID

#include "Substance.hpp"

class Liquid : public Substance
{
protected: // Class fields
    double m_density;
    double m_volume;
    double m_boilingPoint;
    double m_freezingPoint;

public: // Special methods
    /// @brief Default constructor
    Liquid();

    /// @brief Constructor with arguments for the class fields
    Liquid(double mass, double temperature, double specificHeatCapacity,
           double density, double volume, double boilingPoint, double freezingPoint);

    /// @brief Copy constructor
    /// @param copy
    Liquid(const Liquid &copy);

    /// @brief Destructor
    ~Liquid();

public: // Operator overloads
    /// @brief Copy assignment operator
    /// @param copy
    /// @return
    Liquid &operator=(const Liquid &copy);

public: // Getters and Setters
    double getDensity();
    double getVolume();
    double getBoilingPoint();
    double getFreezingPoint();

    void setDensity(double density);
    void setVolume(double volume);
    void setBoilingPoint(double boilingPoint);
    void setFreezingPoint(double freezingPoint);

public: // Other methods
};

#endif