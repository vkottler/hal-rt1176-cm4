/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_QOS_MAC_CONFIGURATION_BL : uint8_t
{
    _10 /*!< k = min(n,10) */,
    _8 = 1 /*!< k = min(n,8) */,
    _4 = 2 /*!< k = min(n,4) */,
    _1 = 3 /*!< k = min(n,1) */
};
static_assert(sizeof(ENET_QOS_MAC_CONFIGURATION_BL) == 1);

/**
 * Converts ENET_QOS_MAC_CONFIGURATION_BL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_CONFIGURATION_BL instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_CONFIGURATION_BL";

    switch (instance)
    {
    case ENET_QOS_MAC_CONFIGURATION_BL::_10:
        result = "_10";
        break;
    case ENET_QOS_MAC_CONFIGURATION_BL::_8:
        result = "_8";
        break;
    case ENET_QOS_MAC_CONFIGURATION_BL::_4:
        result = "_4";
        break;
    case ENET_QOS_MAC_CONFIGURATION_BL::_1:
        result = "_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_CONFIGURATION_BL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MAC_CONFIGURATION_BL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_10", 3)))
    {
        output = ENET_QOS_MAC_CONFIGURATION_BL::_10;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = ENET_QOS_MAC_CONFIGURATION_BL::_8;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = ENET_QOS_MAC_CONFIGURATION_BL::_4;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = ENET_QOS_MAC_CONFIGURATION_BL::_1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
