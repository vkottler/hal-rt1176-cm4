/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class CDOG_CONTROL_IRQ_PAUSE : uint8_t
{
    RUN_TIMER = 1 /*!< Keep the timer running */,
    PAUSE_TIMER = 2 /*!< Stop the timer */
};
static_assert(sizeof(CDOG_CONTROL_IRQ_PAUSE) == 1);

/**
 * Converts CDOG_CONTROL_IRQ_PAUSE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CDOG_CONTROL_IRQ_PAUSE instance)
{
    const char *result = "UNKNOWN CDOG_CONTROL_IRQ_PAUSE";

    switch (instance)
    {
    case CDOG_CONTROL_IRQ_PAUSE::RUN_TIMER:
        result = "RUN_TIMER";
        break;
    case CDOG_CONTROL_IRQ_PAUSE::PAUSE_TIMER:
        result = "PAUSE_TIMER";
        break;
    }

    return result;
}

/**
 * Converts a C string to CDOG_CONTROL_IRQ_PAUSE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CDOG_CONTROL_IRQ_PAUSE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "RUN_TIMER", 9)))
    {
        output = CDOG_CONTROL_IRQ_PAUSE::RUN_TIMER;
    }
    else if ((result = !strncmp(data, "PAUSE_TIMER", 11)))
    {
        output = CDOG_CONTROL_IRQ_PAUSE::PAUSE_TIMER;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
