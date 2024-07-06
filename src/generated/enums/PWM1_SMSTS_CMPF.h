/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PWM1_SMSTS_CMPF : uint8_t
{
    NO_EVENT /*!< No compare event has occurred for a particular VALx value. */
        ,
    EVENT = 1 /*!< A compare event has occurred for a particular VALx value. */
};
static_assert(sizeof(PWM1_SMSTS_CMPF) == 1);

/**
 * Converts PWM1_SMSTS_CMPF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM1_SMSTS_CMPF instance)
{
    const char *result = "UNKNOWN PWM1_SMSTS_CMPF";

    switch (instance)
    {
    case PWM1_SMSTS_CMPF::NO_EVENT:
        result = "NO_EVENT";
        break;
    case PWM1_SMSTS_CMPF::EVENT:
        result = "EVENT";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM1_SMSTS_CMPF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM1_SMSTS_CMPF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO_EVENT", 8)))
    {
        output = PWM1_SMSTS_CMPF::NO_EVENT;
    }
    else if ((result = !strncmp(data, "EVENT", 5)))
    {
        output = PWM1_SMSTS_CMPF::EVENT;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4