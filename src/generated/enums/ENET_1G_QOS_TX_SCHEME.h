/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_1G_QOS_TX_SCHEME : uint8_t
{
    CREDIT /*!< Credit-based scheme */,
    RR = 1 /*!< Round-robin scheme */
};
static_assert(sizeof(ENET_1G_QOS_TX_SCHEME) == 1);

/**
 * Converts ENET_1G_QOS_TX_SCHEME to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_1G_QOS_TX_SCHEME instance)
{
    const char *result = "UNKNOWN ENET_1G_QOS_TX_SCHEME";

    switch (instance)
    {
    case ENET_1G_QOS_TX_SCHEME::CREDIT:
        result = "CREDIT";
        break;
    case ENET_1G_QOS_TX_SCHEME::RR:
        result = "RR";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_1G_QOS_TX_SCHEME.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ENET_1G_QOS_TX_SCHEME &output)
{
    bool result = false;

    if ((result = !strncmp(data, "CREDIT", 6)))
    {
        output = ENET_1G_QOS_TX_SCHEME::CREDIT;
    }
    else if ((result = !strncmp(data, "RR", 2)))
    {
        output = ENET_1G_QOS_TX_SCHEME::RR;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
