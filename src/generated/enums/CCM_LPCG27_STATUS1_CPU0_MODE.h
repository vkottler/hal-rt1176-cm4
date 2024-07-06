/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class CCM_LPCG27_STATUS1_CPU0_MODE : uint8_t
{
    RUN /*!< Run */,
    WAIT = 1 /*!< Wait */,
    STOP = 2 /*!< Stop */,
    SUSPEND = 3 /*!< Suspend */
};
static_assert(sizeof(CCM_LPCG27_STATUS1_CPU0_MODE) == 1);

/**
 * Converts CCM_LPCG27_STATUS1_CPU0_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CCM_LPCG27_STATUS1_CPU0_MODE instance)
{
    const char *result = "UNKNOWN CCM_LPCG27_STATUS1_CPU0_MODE";

    switch (instance)
    {
    case CCM_LPCG27_STATUS1_CPU0_MODE::RUN:
        result = "RUN";
        break;
    case CCM_LPCG27_STATUS1_CPU0_MODE::WAIT:
        result = "WAIT";
        break;
    case CCM_LPCG27_STATUS1_CPU0_MODE::STOP:
        result = "STOP";
        break;
    case CCM_LPCG27_STATUS1_CPU0_MODE::SUSPEND:
        result = "SUSPEND";
        break;
    }

    return result;
}

/**
 * Converts a C string to CCM_LPCG27_STATUS1_CPU0_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CCM_LPCG27_STATUS1_CPU0_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "RUN", 3)))
    {
        output = CCM_LPCG27_STATUS1_CPU0_MODE::RUN;
    }
    else if ((result = !strncmp(data, "WAIT", 4)))
    {
        output = CCM_LPCG27_STATUS1_CPU0_MODE::WAIT;
    }
    else if ((result = !strncmp(data, "STOP", 4)))
    {
        output = CCM_LPCG27_STATUS1_CPU0_MODE::STOP;
    }
    else if ((result = !strncmp(data, "SUSPEND", 7)))
    {
        output = CCM_LPCG27_STATUS1_CPU0_MODE::SUSPEND;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
