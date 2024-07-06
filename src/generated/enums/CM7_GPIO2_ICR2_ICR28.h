/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class CM7_GPIO2_ICR2_ICR28 : uint8_t
{
    LOW_LEVEL /*!< Interrupt 28 is low-level sensitive. */,
    HIGH_LEVEL = 1 /*!< Interrupt 28 is high-level sensitive. */,
    RISING_EDGE = 2 /*!< Interrupt 28 is rising-edge sensitive. */,
    FALLING_EDGE = 3 /*!< Interrupt 28 is falling-edge sensitive. */
};
static_assert(sizeof(CM7_GPIO2_ICR2_ICR28) == 1);

/**
 * Converts CM7_GPIO2_ICR2_ICR28 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CM7_GPIO2_ICR2_ICR28 instance)
{
    const char *result = "UNKNOWN CM7_GPIO2_ICR2_ICR28";

    switch (instance)
    {
    case CM7_GPIO2_ICR2_ICR28::LOW_LEVEL:
        result = "LOW_LEVEL";
        break;
    case CM7_GPIO2_ICR2_ICR28::HIGH_LEVEL:
        result = "HIGH_LEVEL";
        break;
    case CM7_GPIO2_ICR2_ICR28::RISING_EDGE:
        result = "RISING_EDGE";
        break;
    case CM7_GPIO2_ICR2_ICR28::FALLING_EDGE:
        result = "FALLING_EDGE";
        break;
    }

    return result;
}

/**
 * Converts a C string to CM7_GPIO2_ICR2_ICR28.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CM7_GPIO2_ICR2_ICR28 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "LOW_LEVEL", 9)))
    {
        output = CM7_GPIO2_ICR2_ICR28::LOW_LEVEL;
    }
    else if ((result = !strncmp(data, "HIGH_LEVEL", 10)))
    {
        output = CM7_GPIO2_ICR2_ICR28::HIGH_LEVEL;
    }
    else if ((result = !strncmp(data, "RISING_EDGE", 11)))
    {
        output = CM7_GPIO2_ICR2_ICR28::RISING_EDGE;
    }
    else if ((result = !strncmp(data, "FALLING_EDGE", 12)))
    {
        output = CM7_GPIO2_ICR2_ICR28::FALLING_EDGE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
