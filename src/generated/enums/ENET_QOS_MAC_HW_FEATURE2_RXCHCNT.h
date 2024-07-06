/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_QOS_MAC_HW_FEATURE2_RXCHCNT : uint8_t
{
    _1RXCH /*!< 1 MTL Rx Channel */,
    _2RXCH = 1 /*!< 2 MTL Rx Channels */,
    _3RXCH = 2 /*!< 3 MTL Rx Channels */,
    _4RXCH = 3 /*!< 4 MTL Rx Channels */,
    _5RXCH = 4 /*!< 5 MTL Rx Channels */
};
static_assert(sizeof(ENET_QOS_MAC_HW_FEATURE2_RXCHCNT) == 1);

/**
 * Converts ENET_QOS_MAC_HW_FEATURE2_RXCHCNT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_HW_FEATURE2_RXCHCNT instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_HW_FEATURE2_RXCHCNT";

    switch (instance)
    {
    case ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_1RXCH:
        result = "_1RXCH";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_2RXCH:
        result = "_2RXCH";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_3RXCH:
        result = "_3RXCH";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_4RXCH:
        result = "_4RXCH";
        break;
    case ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_5RXCH:
        result = "_5RXCH";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_HW_FEATURE2_RXCHCNT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MAC_HW_FEATURE2_RXCHCNT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1RXCH", 6)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_1RXCH;
    }
    else if ((result = !strncmp(data, "_2RXCH", 6)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_2RXCH;
    }
    else if ((result = !strncmp(data, "_3RXCH", 6)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_3RXCH;
    }
    else if ((result = !strncmp(data, "_4RXCH", 6)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_4RXCH;
    }
    else if ((result = !strncmp(data, "_5RXCH", 6)))
    {
        output = ENET_QOS_MAC_HW_FEATURE2_RXCHCNT::_5RXCH;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
