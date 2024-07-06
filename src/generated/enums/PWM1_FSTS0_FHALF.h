/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PWM1_FSTS0_FHALF : uint8_t
{
    NOT_REENABLED /*!< PWM outputs are not re-enabled at the start of a half
                     cycle. */
        ,
    REENABLED = 1 /*!< PWM outputs are re-enabled at the start of a half cycle
                     (as defined by VAL0). */
};
static_assert(sizeof(PWM1_FSTS0_FHALF) == 1);

/**
 * Converts PWM1_FSTS0_FHALF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM1_FSTS0_FHALF instance)
{
    const char *result = "UNKNOWN PWM1_FSTS0_FHALF";

    switch (instance)
    {
    case PWM1_FSTS0_FHALF::NOT_REENABLED:
        result = "NOT_REENABLED";
        break;
    case PWM1_FSTS0_FHALF::REENABLED:
        result = "REENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM1_FSTS0_FHALF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM1_FSTS0_FHALF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NOT_REENABLED", 13)))
    {
        output = PWM1_FSTS0_FHALF::NOT_REENABLED;
    }
    else if ((result = !strncmp(data, "REENABLED", 9)))
    {
        output = PWM1_FSTS0_FHALF::REENABLED;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4