/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class GPT1_CR_IM2 : uint8_t
{
    DISABLED /*!< Capture disabled */,
    RISING = 1 /*!< Capture on rising edge only */,
    FALLING = 2 /*!< Capture on falling edge only */,
    BOTH = 3 /*!< Capture on both edges */
};
static_assert(sizeof(GPT1_CR_IM2) == 1);

/**
 * Converts GPT1_CR_IM2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPT1_CR_IM2 instance)
{
    const char *result = "UNKNOWN GPT1_CR_IM2";

    switch (instance)
    {
    case GPT1_CR_IM2::DISABLED:
        result = "DISABLED";
        break;
    case GPT1_CR_IM2::RISING:
        result = "RISING";
        break;
    case GPT1_CR_IM2::FALLING:
        result = "FALLING";
        break;
    case GPT1_CR_IM2::BOTH:
        result = "BOTH";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPT1_CR_IM2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPT1_CR_IM2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = GPT1_CR_IM2::DISABLED;
    }
    else if ((result = !strncmp(data, "RISING", 6)))
    {
        output = GPT1_CR_IM2::RISING;
    }
    else if ((result = !strncmp(data, "FALLING", 7)))
    {
        output = GPT1_CR_IM2::FALLING;
    }
    else if ((result = !strncmp(data, "BOTH", 4)))
    {
        output = GPT1_CR_IM2::BOTH;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
