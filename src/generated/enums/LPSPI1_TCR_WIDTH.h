/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LPSPI1_TCR_WIDTH : uint8_t
{
    ONEBIT /*!< 1 bit transfer */,
    TWOBIT = 1 /*!< 2 bit transfer */,
    FOURBIT = 2 /*!< 4 bit transfer */
};
static_assert(sizeof(LPSPI1_TCR_WIDTH) == 1);

/**
 * Converts LPSPI1_TCR_WIDTH to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPSPI1_TCR_WIDTH instance)
{
    const char *result = "UNKNOWN LPSPI1_TCR_WIDTH";

    switch (instance)
    {
    case LPSPI1_TCR_WIDTH::ONEBIT:
        result = "ONEBIT";
        break;
    case LPSPI1_TCR_WIDTH::TWOBIT:
        result = "TWOBIT";
        break;
    case LPSPI1_TCR_WIDTH::FOURBIT:
        result = "FOURBIT";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPSPI1_TCR_WIDTH.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPSPI1_TCR_WIDTH &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ONEBIT", 6)))
    {
        output = LPSPI1_TCR_WIDTH::ONEBIT;
    }
    else if ((result = !strncmp(data, "TWOBIT", 6)))
    {
        output = LPSPI1_TCR_WIDTH::TWOBIT;
    }
    else if ((result = !strncmp(data, "FOURBIT", 7)))
    {
        output = LPSPI1_TCR_WIDTH::FOURBIT;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4