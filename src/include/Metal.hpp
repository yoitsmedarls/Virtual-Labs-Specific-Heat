#ifndef METAL
#define METAL

#include "Substance.hpp"

class Metal : public Substance
{
protected: // Class fields
    double m_length;
    double m_width;
    double m_height;

public: // Special methods
    /// @brief Default constructor
    Metal();

    /// @brief Constructor with arguments for the class fields
    Metal(double mass, double temperature, double specificHeatCapacity,
          double length, double width, double height);

    /// @brief Copy constructor
    /// @param copy
    Metal(const Metal &copy);

    /// @brief Destructor
    ~Metal();

public: // Operator overloads
    /// @brief Copy assignment operator
    /// @param copy
    /// @return
    Metal &operator=(const Metal &copy);

public: // Getters and Setters
    double getLength();
    double getWidth();
    double getHeight();

    void setLength(double length);
    void setWidth(double width);
    void setHeight(double height);

public: // Other methods
};

#endif