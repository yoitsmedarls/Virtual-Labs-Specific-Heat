#ifndef SUBSTANCE
#define SUBSTANCE

/** @author @yoitsmedarls
 * @brief The base class for all objects designed to be 'placed' or 'put inside'
 * objects from (or derived from) the Container class.
 */
class Substance
{
protected: // Class fields
    double m_mass;
    double m_temperature;
    double m_specificHeatCapacity;

public: // Special methods
    /// @brief Default constructor
    Substance();

    /// @brief Constructor with arguments for the class fields
    Substance(double mass, double temperature, double specificHeatCapacity);

    /// @brief Copy constructor
    /// @param copy
    Substance(const Substance &copy);

    /// @brief Destructor
    ~Substance();

public: // Operator overloads
    /// @brief Copy assignment operator
    /// @param copy
    /// @return
    Substance &operator=(const Substance &copy);

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