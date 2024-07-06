/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LPSPI1_VERID_FEATURE : uint16_t
{
    STANDARD =
        4 /*!< Standard feature set supporting a 32-bit shift register. */
};
static_assert(sizeof(LPSPI1_VERID_FEATURE) == 2);

/**
 * Converts LPSPI1_VERID_FEATURE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPSPI1_VERID_FEATURE instance)
{
    const char *result = "UNKNOWN LPSPI1_VERID_FEATURE";

    switch (instance)
    {
    case LPSPI1_VERID_FEATURE::STANDARD:
        result = "STANDARD";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPSPI1_VERID_FEATURE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPSPI1_VERID_FEATURE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "STANDARD", 8)))
    {
        output = LPSPI1_VERID_FEATURE::STANDARD;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
