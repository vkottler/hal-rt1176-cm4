/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class DMA1_TCD19_ATTR_SSIZE : uint8_t
{
    EIGHT /*!< 8-bit */,
    SIXTEEN_BIT = 1 /*!< 16-bit */,
    THIRTYTWO_BIT = 2 /*!< 32-bit */,
    SIXTYFOUR = 3 /*!< 64-bit */,
    THIRTYTWO_BYTE = 5 /*!< 32-byte burst (4 beats of 64 bits) */
};
static_assert(sizeof(DMA1_TCD19_ATTR_SSIZE) == 1);

/**
 * Converts DMA1_TCD19_ATTR_SSIZE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DMA1_TCD19_ATTR_SSIZE instance)
{
    const char *result = "UNKNOWN DMA1_TCD19_ATTR_SSIZE";

    switch (instance)
    {
    case DMA1_TCD19_ATTR_SSIZE::EIGHT:
        result = "EIGHT";
        break;
    case DMA1_TCD19_ATTR_SSIZE::SIXTEEN_BIT:
        result = "SIXTEEN_BIT";
        break;
    case DMA1_TCD19_ATTR_SSIZE::THIRTYTWO_BIT:
        result = "THIRTYTWO_BIT";
        break;
    case DMA1_TCD19_ATTR_SSIZE::SIXTYFOUR:
        result = "SIXTYFOUR";
        break;
    case DMA1_TCD19_ATTR_SSIZE::THIRTYTWO_BYTE:
        result = "THIRTYTWO_BYTE";
        break;
    }

    return result;
}

/**
 * Converts a C string to DMA1_TCD19_ATTR_SSIZE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DMA1_TCD19_ATTR_SSIZE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "EIGHT", 5)))
    {
        output = DMA1_TCD19_ATTR_SSIZE::EIGHT;
    }
    else if ((result = !strncmp(data, "SIXTEEN_BIT", 11)))
    {
        output = DMA1_TCD19_ATTR_SSIZE::SIXTEEN_BIT;
    }
    else if ((result = !strncmp(data, "THIRTYTWO_BIT", 13)))
    {
        output = DMA1_TCD19_ATTR_SSIZE::THIRTYTWO_BIT;
    }
    else if ((result = !strncmp(data, "SIXTYFOUR", 9)))
    {
        output = DMA1_TCD19_ATTR_SSIZE::SIXTYFOUR;
    }
    else if ((result = !strncmp(data, "THIRTYTWO_BYTE", 14)))
    {
        output = DMA1_TCD19_ATTR_SSIZE::THIRTYTWO_BYTE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
