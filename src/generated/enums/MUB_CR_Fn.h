/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class MUB_CR_Fn : uint8_t
{
    clear /*!< Clears the Fn bit in the MUA.SR register. */,
    set = 1 /*!< Sets the Fn bit in the MUA.SR register. */
};
static_assert(sizeof(MUB_CR_Fn) == 1);

/**
 * Converts MUB_CR_Fn to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(MUB_CR_Fn instance)
{
    const char *result = "UNKNOWN MUB_CR_Fn";

    switch (instance)
    {
    case MUB_CR_Fn::clear:
        result = "clear";
        break;
    case MUB_CR_Fn::set:
        result = "set";
        break;
    }

    return result;
}

/**
 * Converts a C string to MUB_CR_Fn.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, MUB_CR_Fn &output)
{
    bool result = false;

    if ((result = !strncmp(data, "clear", 5)))
    {
        output = MUB_CR_Fn::clear;
    }
    else if ((result = !strncmp(data, "set", 3)))
    {
        output = MUB_CR_Fn::set;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
