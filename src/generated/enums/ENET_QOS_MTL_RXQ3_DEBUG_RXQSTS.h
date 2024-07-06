/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS : uint8_t
{
    EMPTY /*!< Rx Queue empty */,
    BLW_THR =
        1 /*!< Rx Queue fill-level below flow-control deactivate threshold */,
    ABV_THR =
        2 /*!< Rx Queue fill-level above flow-control activate threshold */,
    FULL = 3 /*!< Rx Queue full */
};
static_assert(sizeof(ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS) == 1);

/**
 * Converts ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS";

    switch (instance)
    {
    case ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS::EMPTY:
        result = "EMPTY";
        break;
    case ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS::BLW_THR:
        result = "BLW_THR";
        break;
    case ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS::ABV_THR:
        result = "ABV_THR";
        break;
    case ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS::FULL:
        result = "FULL";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "EMPTY", 5)))
    {
        output = ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS::EMPTY;
    }
    else if ((result = !strncmp(data, "BLW_THR", 7)))
    {
        output = ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS::BLW_THR;
    }
    else if ((result = !strncmp(data, "ABV_THR", 7)))
    {
        output = ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS::ABV_THR;
    }
    else if ((result = !strncmp(data, "FULL", 4)))
    {
        output = ENET_QOS_MTL_RXQ3_DEBUG_RXQSTS::FULL;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4