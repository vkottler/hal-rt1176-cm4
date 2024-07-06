/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class RDC_SEMAPHORE1_GATE_LDOM : uint8_t
{
    _0 /*!< The gate is locked by domain 0. (True if the field GTFSM does not
          equal to 0000.) */
        ,
    _1 = 1 /*!< The gate has been locked by domain 1. */
};
static_assert(sizeof(RDC_SEMAPHORE1_GATE_LDOM) == 1);

/**
 * Converts RDC_SEMAPHORE1_GATE_LDOM to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(RDC_SEMAPHORE1_GATE_LDOM instance)
{
    const char *result = "UNKNOWN RDC_SEMAPHORE1_GATE_LDOM";

    switch (instance)
    {
    case RDC_SEMAPHORE1_GATE_LDOM::_0:
        result = "_0";
        break;
    case RDC_SEMAPHORE1_GATE_LDOM::_1:
        result = "_1";
        break;
    }

    return result;
}

/**
 * Converts a C string to RDC_SEMAPHORE1_GATE_LDOM.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, RDC_SEMAPHORE1_GATE_LDOM &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = RDC_SEMAPHORE1_GATE_LDOM::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = RDC_SEMAPHORE1_GATE_LDOM::_1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
