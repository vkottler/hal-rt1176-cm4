/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PWM1_MCTRL_LDOK : uint8_t
{
    DISABLED /*!< Do not load new values. */,
    ENABLED = 1 /*!< Load prescaler, modulus, and PWM values of the
                   corresponding submodule. */
};
static_assert(sizeof(PWM1_MCTRL_LDOK) == 1);

/**
 * Converts PWM1_MCTRL_LDOK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM1_MCTRL_LDOK instance)
{
    const char *result = "UNKNOWN PWM1_MCTRL_LDOK";

    switch (instance)
    {
    case PWM1_MCTRL_LDOK::DISABLED:
        result = "DISABLED";
        break;
    case PWM1_MCTRL_LDOK::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM1_MCTRL_LDOK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM1_MCTRL_LDOK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = PWM1_MCTRL_LDOK::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = PWM1_MCTRL_LDOK::ENABLED;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
