/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SEMA4_Gate_GTFSM : uint8_t
{
    _0 /*!< The gate is unlocked (free). */,
    _1 = 1 /*!< The gate has been locked by processor 0. */,
    _2 = 2 /*!< The gate has been locked by processor 1. */,
    _3 = 3 /*!< This state encoding is never used and therefore reserved.
              Attempted writes of 0x03 are treated as "no operation" and do not
              affect the gate state machine. */
};
static_assert(sizeof(SEMA4_Gate_GTFSM) == 1);

/**
 * Converts SEMA4_Gate_GTFSM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SEMA4_Gate_GTFSM instance)
{
    const char *result = "UNKNOWN SEMA4_Gate_GTFSM";

    switch (instance)
    {
    case SEMA4_Gate_GTFSM::_0:
        result = "_0";
        break;
    case SEMA4_Gate_GTFSM::_1:
        result = "_1";
        break;
    case SEMA4_Gate_GTFSM::_2:
        result = "_2";
        break;
    case SEMA4_Gate_GTFSM::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to SEMA4_Gate_GTFSM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SEMA4_Gate_GTFSM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = SEMA4_Gate_GTFSM::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = SEMA4_Gate_GTFSM::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SEMA4_Gate_GTFSM::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = SEMA4_Gate_GTFSM::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4