///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file Weight.h
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   15_Apr_2022
///////////////////////////////////////////////////////////////////////////////
#include <string>
#include <ostream>




class Weight {
public:
    //enum
    enum UnitOfWeight{POUND, KILO, SLUG};

    //data type for class
    typedef float t_weight;

private:
    //private member function
    void setMaxWeight(t_weight newMaxWeight);

    //private attributes
    bool  bIsKnown;
    bool  bHasMax;
    enum  UnitOfWeight unitOfWeight;
    t_weight weight {};
    t_weight maxWeight {};

public:
    //static public attributes
    static const t_weight UNKNOWN_WEIGHT;
    static const t_weight KILOS_IN_A_POUND;
    static const t_weight SLUGS_IN_A_POUND;
    static const std::string POUND_LABEL;
    static const std::string KILO_LABEL;
    static const std::string SLUG_LABEL;

    //static public member functions
    static float fromKilogramToPound(t_weight kilogram) noexcept;
    static float fromPoundToKilogram(t_weight pound) noexcept;
    static float fromSlugToPound(t_weight slug) noexcept;
    static float fromPoundToSlug(t_weight pound) noexcept;
    static float convertWeight(t_weight fromWeight, UnitOfWeight fromUnit, UnitOfWeight toUnit) noexcept;

    //Public Member Functions
    Weight() noexcept;
    Weight(t_weight newWeight);
    Weight(const UnitOfWeight newUnitOfWeight) noexcept;
    Weight(t_weight newWeight, const UnitOfWeight newUnitOfWeight);
    Weight(t_weight newWeight, t_weight newMaxWeight);
    Weight(const UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);
    Weight(t_weight newWeight, const UnitOfWeight newUnitOfWeight, t_weight newMaxWeight);

    void setWeight(t_weight newWeight);
    void setWeight(t_weight newWeight, UnitOfWeight weightUnits);
    bool isWeightValid(t_weight checkWeight) const noexcept;

    bool isWeightKnown() const noexcept;
    bool hasMaxWeight () const noexcept;
    t_weight getWeight() const noexcept;
    t_weight getWeight(UnitOfWeight weightUnits) const noexcept;
    t_weight getMaxWeight() const noexcept;
    UnitOfWeight getWeightUnit () const noexcept;

    bool validate() const noexcept;
    void dump() const noexcept;
    bool operator== (const Weight &rhs_Weight) const;
    bool operator< (const Weight &rhs_Weight) const;
    Weight& operator+= (t_weight rhs_addToWeight);
};

