/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PWM1_OUTEN_PWMA_EN : uint8_t
{
    DISABLED /*!< PWM_A output disabled. */,
    ENABLED = 1 /*!< PWM_A output enabled. */
};
static_assert(sizeof(PWM1_OUTEN_PWMA_EN) == 1);

/**
 * Converts PWM1_OUTEN_PWMA_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM1_OUTEN_PWMA_EN instance)
{
    const char *result = "UNKNOWN PWM1_OUTEN_PWMA_EN";

    switch (instance)
    {
    case PWM1_OUTEN_PWMA_EN::DISABLED:
        result = "DISABLED";
        break;
    case PWM1_OUTEN_PWMA_EN::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM1_OUTEN_PWMA_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM1_OUTEN_PWMA_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = PWM1_OUTEN_PWMA_EN::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = PWM1_OUTEN_PWMA_EN::ENABLED;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
