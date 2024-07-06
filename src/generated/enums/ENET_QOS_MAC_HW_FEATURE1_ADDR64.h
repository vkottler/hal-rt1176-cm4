/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_QOS_MAC_HW_FEATURE1_ADDR64 : uint8_t
{
    _32 /*!< 32 */,
    _40 = 1 /*!< 40 */,
    _48 = 2 /*!< 48 */
};
static_assert(sizeof(ENET_QOS_MAC_HW_FEATURE1_ADDR64) == 1);

/**
 * Converts ENET_QOS_MAC_HW_FEATURE1_ADDR64 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_HW_FEATURE1_ADDR64 instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_HW_FEATURE1_ADDR64";

    switch (instance)
    {
    case ENET_QOS_MAC_HW_FEATURE1_ADDR64::_32:
        result = "_32";
        break;
    case ENET_QOS_MAC_HW_FEATURE1_ADDR64::_40:
        result = "_40";
        break;
    case ENET_QOS_MAC_HW_FEATURE1_ADDR64::_48:
        result = "_48";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_HW_FEATURE1_ADDR64.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MAC_HW_FEATURE1_ADDR64 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_32", 3)))
    {
        output = ENET_QOS_MAC_HW_FEATURE1_ADDR64::_32;
    }
    else if ((result = !strncmp(data, "_40", 3)))
    {
        output = ENET_QOS_MAC_HW_FEATURE1_ADDR64::_40;
    }
    else if ((result = !strncmp(data, "_48", 3)))
    {
        output = ENET_QOS_MAC_HW_FEATURE1_ADDR64::_48;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
