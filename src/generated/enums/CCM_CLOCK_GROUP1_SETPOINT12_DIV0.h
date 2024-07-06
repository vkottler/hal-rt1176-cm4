/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class CCM_CLOCK_GROUP1_SETPOINT12_DIV0 : uint8_t
{
    _0 /*!< Direct output. */,
    _1 = 1 /*!< Divide by 2. */,
    _2 = 2 /*!< Divide by 3. */,
    _3 = 3 /*!< Divide by 4. */,
    _15 = 15 /*!< Divide by 16. */
};
static_assert(sizeof(CCM_CLOCK_GROUP1_SETPOINT12_DIV0) == 1);

/**
 * Converts CCM_CLOCK_GROUP1_SETPOINT12_DIV0 to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCM_CLOCK_GROUP1_SETPOINT12_DIV0 instance)
{
    const char *result = "UNKNOWN CCM_CLOCK_GROUP1_SETPOINT12_DIV0";

    switch (instance)
    {
    case CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_0:
        result = "_0";
        break;
    case CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_1:
        result = "_1";
        break;
    case CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_2:
        result = "_2";
        break;
    case CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_3:
        result = "_3";
        break;
    case CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCM_CLOCK_GROUP1_SETPOINT12_DIV0.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        CCM_CLOCK_GROUP1_SETPOINT12_DIV0 &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_3;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = CCM_CLOCK_GROUP1_SETPOINT12_DIV0::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
