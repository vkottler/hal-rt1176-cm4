/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class GPT1_CR_OM1 : uint8_t
{
    DISABLED /*!< Output disabled. No response on pin. */,
    TOGGLE = 1 /*!< Toggle output pin */,
    CLEAR = 2 /*!< Clear output pin */,
    SET = 3 /*!< Set output pin */,
    PULSE = 7 /*!< Generate a low pulse that is one input clock cycle wide on
                 the output pin. When OMn is first programmed as 1xx, the
                 output pin is set to one immediately on the next input clock
                 (if it was not one already). "Input clock" here refers to the
                 clock selected by the CLKSRC field of this register. */
};
static_assert(sizeof(GPT1_CR_OM1) == 1);

/**
 * Converts GPT1_CR_OM1 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPT1_CR_OM1 instance)
{
    const char *result = "UNKNOWN GPT1_CR_OM1";

    switch (instance)
    {
    case GPT1_CR_OM1::DISABLED:
        result = "DISABLED";
        break;
    case GPT1_CR_OM1::TOGGLE:
        result = "TOGGLE";
        break;
    case GPT1_CR_OM1::CLEAR:
        result = "CLEAR";
        break;
    case GPT1_CR_OM1::SET:
        result = "SET";
        break;
    case GPT1_CR_OM1::PULSE:
        result = "PULSE";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPT1_CR_OM1.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPT1_CR_OM1 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = GPT1_CR_OM1::DISABLED;
    }
    else if ((result = !strncmp(data, "TOGGLE", 6)))
    {
        output = GPT1_CR_OM1::TOGGLE;
    }
    else if ((result = !strncmp(data, "CLEAR", 5)))
    {
        output = GPT1_CR_OM1::CLEAR;
    }
    else if ((result = !strncmp(data, "SET", 3)))
    {
        output = GPT1_CR_OM1::SET;
    }
    else if ((result = !strncmp(data, "PULSE", 5)))
    {
        output = GPT1_CR_OM1::PULSE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
