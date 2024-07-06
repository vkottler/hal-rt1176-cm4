/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class DMA1_TCD28_ATTR_SMOD : uint8_t
{
    DISABLED /*!< Source address modulo feature is disabled */,
    ENABLED = 9 /*!< Value defines address range used to set up circular data
                   queue */
};
static_assert(sizeof(DMA1_TCD28_ATTR_SMOD) == 1);

/**
 * Converts DMA1_TCD28_ATTR_SMOD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(DMA1_TCD28_ATTR_SMOD instance)
{
    const char *result = "UNKNOWN DMA1_TCD28_ATTR_SMOD";

    switch (instance)
    {
    case DMA1_TCD28_ATTR_SMOD::DISABLED:
        result = "DISABLED";
        break;
    case DMA1_TCD28_ATTR_SMOD::ENABLED:
        result = "ENABLED";
        break;
    }

    return result;
}

/**
 * Converts a C string to DMA1_TCD28_ATTR_SMOD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, DMA1_TCD28_ATTR_SMOD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = DMA1_TCD28_ATTR_SMOD::DISABLED;
    }
    else if ((result = !strncmp(data, "ENABLED", 7)))
    {
        output = DMA1_TCD28_ATTR_SMOD::ENABLED;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
