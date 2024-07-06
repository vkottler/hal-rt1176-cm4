/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_QOS_MAC_RXQ_CTRL1_MCBCQ : uint8_t
{
    _0 /*!< Receive Queue 0 */,
    _1 = 1 /*!< Receive Queue 1 */,
    _2 = 2 /*!< Receive Queue 2 */,
    _3 = 3 /*!< Receive Queue 3 */,
    _4 = 4 /*!< Receive Queue 4 */
};
static_assert(sizeof(ENET_QOS_MAC_RXQ_CTRL1_MCBCQ) == 1);

/**
 * Converts ENET_QOS_MAC_RXQ_CTRL1_MCBCQ to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MAC_RXQ_CTRL1_MCBCQ instance)
{
    const char *result = "UNKNOWN ENET_QOS_MAC_RXQ_CTRL1_MCBCQ";

    switch (instance)
    {
    case ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_0:
        result = "_0";
        break;
    case ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_1:
        result = "_1";
        break;
    case ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_2:
        result = "_2";
        break;
    case ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_3:
        result = "_3";
        break;
    case ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_4:
        result = "_4";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MAC_RXQ_CTRL1_MCBCQ.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ENET_QOS_MAC_RXQ_CTRL1_MCBCQ &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = ENET_QOS_MAC_RXQ_CTRL1_MCBCQ::_4;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
