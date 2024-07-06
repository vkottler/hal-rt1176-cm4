/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class FLEXIO1_SHIFTCTL_SMOD : uint8_t
{
    disable /*!< Disabled. */,
    receive = 1 /*!< Receive mode. Captures the current Shifter content into
                   the SHIFTBUF on expiration of the Timer. */
        ,
    transmit = 2 /*!< Transmit mode. Load SHIFTBUF contents into the Shifter on
                    expiration of the Timer. */
        ,
    matchstore = 4 /*!< Match Store mode. Shifter data is compared to SHIFTBUF
                      content on expiration of the Timer. */
        ,
    matchcont = 5 /*!< Match Continuous mode. Shifter data is continuously
                     compared to SHIFTBUF contents. */
        ,
    state = 6 /*!< State mode. SHIFTBUF contents are used for storing
                 programmable state attributes. */
        ,
    logic = 7 /*!< Logic mode. SHIFTBUF contents are used for implementing
                 programmable logic look up table. */
};
static_assert(sizeof(FLEXIO1_SHIFTCTL_SMOD) == 1);

/**
 * Converts FLEXIO1_SHIFTCTL_SMOD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLEXIO1_SHIFTCTL_SMOD instance)
{
    const char *result = "UNKNOWN FLEXIO1_SHIFTCTL_SMOD";

    switch (instance)
    {
    case FLEXIO1_SHIFTCTL_SMOD::disable:
        result = "disable";
        break;
    case FLEXIO1_SHIFTCTL_SMOD::receive:
        result = "receive";
        break;
    case FLEXIO1_SHIFTCTL_SMOD::transmit:
        result = "transmit";
        break;
    case FLEXIO1_SHIFTCTL_SMOD::matchstore:
        result = "matchstore";
        break;
    case FLEXIO1_SHIFTCTL_SMOD::matchcont:
        result = "matchcont";
        break;
    case FLEXIO1_SHIFTCTL_SMOD::state:
        result = "state";
        break;
    case FLEXIO1_SHIFTCTL_SMOD::logic:
        result = "logic";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLEXIO1_SHIFTCTL_SMOD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLEXIO1_SHIFTCTL_SMOD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "disable", 7)))
    {
        output = FLEXIO1_SHIFTCTL_SMOD::disable;
    }
    else if ((result = !strncmp(data, "receive", 7)))
    {
        output = FLEXIO1_SHIFTCTL_SMOD::receive;
    }
    else if ((result = !strncmp(data, "transmit", 8)))
    {
        output = FLEXIO1_SHIFTCTL_SMOD::transmit;
    }
    else if ((result = !strncmp(data, "matchstore", 10)))
    {
        output = FLEXIO1_SHIFTCTL_SMOD::matchstore;
    }
    else if ((result = !strncmp(data, "matchcont", 9)))
    {
        output = FLEXIO1_SHIFTCTL_SMOD::matchcont;
    }
    else if ((result = !strncmp(data, "state", 5)))
    {
        output = FLEXIO1_SHIFTCTL_SMOD::state;
    }
    else if ((result = !strncmp(data, "logic", 5)))
    {
        output = FLEXIO1_SHIFTCTL_SMOD::logic;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
