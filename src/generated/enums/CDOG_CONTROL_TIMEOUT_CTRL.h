/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class CDOG_CONTROL_TIMEOUT_CTRL : uint8_t
{
    ENABLE_RESET = 1 /*!< Enable reset */,
    ENABLE_INTERRUPT = 2 /*!< Enable interrupt */,
    DISABLE_BOTH = 4 /*!< Disable both reset and interrupt */
};
static_assert(sizeof(CDOG_CONTROL_TIMEOUT_CTRL) == 1);

/**
 * Converts CDOG_CONTROL_TIMEOUT_CTRL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CDOG_CONTROL_TIMEOUT_CTRL instance)
{
    const char *result = "UNKNOWN CDOG_CONTROL_TIMEOUT_CTRL";

    switch (instance)
    {
    case CDOG_CONTROL_TIMEOUT_CTRL::ENABLE_RESET:
        result = "ENABLE_RESET";
        break;
    case CDOG_CONTROL_TIMEOUT_CTRL::ENABLE_INTERRUPT:
        result = "ENABLE_INTERRUPT";
        break;
    case CDOG_CONTROL_TIMEOUT_CTRL::DISABLE_BOTH:
        result = "DISABLE_BOTH";
        break;
    }

    return result;
}

/**
 * Converts a C string to CDOG_CONTROL_TIMEOUT_CTRL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CDOG_CONTROL_TIMEOUT_CTRL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ENABLE_RESET", 12)))
    {
        output = CDOG_CONTROL_TIMEOUT_CTRL::ENABLE_RESET;
    }
    else if ((result = !strncmp(data, "ENABLE_INTERRUPT", 16)))
    {
        output = CDOG_CONTROL_TIMEOUT_CTRL::ENABLE_INTERRUPT;
    }
    else if ((result = !strncmp(data, "DISABLE_BOTH", 12)))
    {
        output = CDOG_CONTROL_TIMEOUT_CTRL::DISABLE_BOTH;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
