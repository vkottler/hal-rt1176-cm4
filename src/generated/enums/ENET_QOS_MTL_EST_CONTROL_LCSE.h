/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ENET_QOS_MTL_EST_CONTROL_LCSE : uint8_t
{
    _4_ITERNS /*!< 4 iterations */,
    _8_ITERNS = 1 /*!< 8 iterations */,
    _16_ITERNS = 2 /*!< 16 iterations */,
    _32_ITERNS = 3 /*!< 32 iterations */
};
static_assert(sizeof(ENET_QOS_MTL_EST_CONTROL_LCSE) == 1);

/**
 * Converts ENET_QOS_MTL_EST_CONTROL_LCSE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ENET_QOS_MTL_EST_CONTROL_LCSE instance)
{
    const char *result = "UNKNOWN ENET_QOS_MTL_EST_CONTROL_LCSE";

    switch (instance)
    {
    case ENET_QOS_MTL_EST_CONTROL_LCSE::_4_ITERNS:
        result = "_4_ITERNS";
        break;
    case ENET_QOS_MTL_EST_CONTROL_LCSE::_8_ITERNS:
        result = "_8_ITERNS";
        break;
    case ENET_QOS_MTL_EST_CONTROL_LCSE::_16_ITERNS:
        result = "_16_ITERNS";
        break;
    case ENET_QOS_MTL_EST_CONTROL_LCSE::_32_ITERNS:
        result = "_32_ITERNS";
        break;
    }

    return result;
}

/**
 * Converts a C string to ENET_QOS_MTL_EST_CONTROL_LCSE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        ENET_QOS_MTL_EST_CONTROL_LCSE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_4_ITERNS", 9)))
    {
        output = ENET_QOS_MTL_EST_CONTROL_LCSE::_4_ITERNS;
    }
    else if ((result = !strncmp(data, "_8_ITERNS", 9)))
    {
        output = ENET_QOS_MTL_EST_CONTROL_LCSE::_8_ITERNS;
    }
    else if ((result = !strncmp(data, "_16_ITERNS", 10)))
    {
        output = ENET_QOS_MTL_EST_CONTROL_LCSE::_16_ITERNS;
    }
    else if ((result = !strncmp(data, "_32_ITERNS", 10)))
    {
        output = ENET_QOS_MTL_EST_CONTROL_LCSE::_32_ITERNS;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4