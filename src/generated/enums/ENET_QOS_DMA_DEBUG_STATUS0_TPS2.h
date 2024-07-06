/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_QOS_DMA_DEBUG_STATUS0_TPS2 : uint8_t
{
    STOP /*!< Stopped (Reset or Stop Transmit Command issued) */,
    RUN_FTTD = 1 /*!< Running (Fetching Tx Transfer Descriptor) */,
    RUN_WS = 2 /*!< Running (Waiting for status) */,
    RUN_RDS = 3 /*!< Running (Reading Data from system memory buffer and
                   queuing it to the Tx buffer (Tx FIFO)) */
        ,
    TSTMP_WS = 4 /*!< Timestamp write state */,
    SUSPND =
        6 /*!< Suspended (Tx Descriptor Unavailable or Tx Buffer Underflow) */,
    RUN_CTD = 7 /*!< Running (Closing Tx Descriptor) */
};
static_assert(sizeof(ENET_QOS_DMA_DEBUG_STATUS0_TPS2) == 1);

/**
 * Converts ENET_QOS_DMA_DEBUG_STATUS0_TPS2 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_DMA_DEBUG_STATUS0_TPS2 instance)
{
    const char *result = "UNKNOWN ENET_QOS_DMA_DEBUG_STATUS0_TPS2";

    switch (instance)
    {
    case ENET_QOS_DMA_DEBUG_STATUS0_TPS2::STOP:
        result = "STOP";
        break;
    case ENET_QOS_DMA_DEBUG_STATUS0_TPS2::RUN_FTTD:
        result = "RUN_FTTD";
        break;
    case ENET_QOS_DMA_DEBUG_STATUS0_TPS2::RUN_WS:
        result = "RUN_WS";
        break;
    case ENET_QOS_DMA_DEBUG_STATUS0_TPS2::RUN_RDS:
        result = "RUN_RDS";
        break;
    case ENET_QOS_DMA_DEBUG_STATUS0_TPS2::TSTMP_WS:
        result = "TSTMP_WS";
        break;
    case ENET_QOS_DMA_DEBUG_STATUS0_TPS2::SUSPND:
        result = "SUSPND";
        break;
    case ENET_QOS_DMA_DEBUG_STATUS0_TPS2::RUN_CTD:
        result = "RUN_CTD";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_DMA_DEBUG_STATUS0_TPS2.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_DMA_DEBUG_STATUS0_TPS2 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "STOP", 4)))
    {
        output = ENET_QOS_DMA_DEBUG_STATUS0_TPS2::STOP;
    }
    else if ((result = !strncmp(data, "RUN_FTTD", 8)))
    {
        output = ENET_QOS_DMA_DEBUG_STATUS0_TPS2::RUN_FTTD;
    }
    else if ((result = !strncmp(data, "RUN_WS", 6)))
    {
        output = ENET_QOS_DMA_DEBUG_STATUS0_TPS2::RUN_WS;
    }
    else if ((result = !strncmp(data, "RUN_RDS", 7)))
    {
        output = ENET_QOS_DMA_DEBUG_STATUS0_TPS2::RUN_RDS;
    }
    else if ((result = !strncmp(data, "TSTMP_WS", 8)))
    {
        output = ENET_QOS_DMA_DEBUG_STATUS0_TPS2::TSTMP_WS;
    }
    else if ((result = !strncmp(data, "SUSPND", 6)))
    {
        output = ENET_QOS_DMA_DEBUG_STATUS0_TPS2::SUSPND;
    }
    else if ((result = !strncmp(data, "RUN_CTD", 7)))
    {
        output = ENET_QOS_DMA_DEBUG_STATUS0_TPS2::RUN_CTD;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
