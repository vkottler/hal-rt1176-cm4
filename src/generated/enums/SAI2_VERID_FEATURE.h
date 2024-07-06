/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SAI2_VERID_FEATURE : uint16_t
{
    STD /*!< Standard feature set. */
};
static_assert(sizeof(SAI2_VERID_FEATURE) == 2);

/**
 * Converts SAI2_VERID_FEATURE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SAI2_VERID_FEATURE instance)
{
    const char *result = "UNKNOWN SAI2_VERID_FEATURE";

    switch (instance)
    {
    case SAI2_VERID_FEATURE::STD:
        result = "STD";
        break;
    }

    return result;
}

/**
 * Converts a C string to SAI2_VERID_FEATURE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SAI2_VERID_FEATURE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "STD", 3)))
    {
        output = SAI2_VERID_FEATURE::STD;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4