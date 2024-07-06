/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS : uint8_t
{
    IDLE /*!< Idle state */,
    READ = 1 /*!< Read state (transferring data to the MAC transmitter) */,
    WAIT = 2 /*!< Waiting for pending Tx Status from the MAC transmitter */,
    FLUSH = 3 /*!< Flushing the Tx queue because of the Packet Abort request
                 from the MAC */
};
static_assert(sizeof(ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS) == 1);

/**
 * Converts ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS";

    switch (instance)
    {
    case ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS::IDLE:
        result = "IDLE";
        break;
    case ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS::READ:
        result = "READ";
        break;
    case ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS::WAIT:
        result = "WAIT";
        break;
    case ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS::FLUSH:
        result = "FLUSH";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "IDLE", 4)))
    {
        output = ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS::IDLE;
    }
    else if ((result = !strncmp(data, "READ", 4)))
    {
        output = ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS::READ;
    }
    else if ((result = !strncmp(data, "WAIT", 4)))
    {
        output = ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS::WAIT;
    }
    else if ((result = !strncmp(data, "FLUSH", 5)))
    {
        output = ENET_QOS_MTL_TXQ1_DEBUG_TRCSTS::FLUSH;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
