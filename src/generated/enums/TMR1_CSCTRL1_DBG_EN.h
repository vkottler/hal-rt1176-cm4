/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class TMR1_CSCTRL1_DBG_EN : uint8_t
{
    NORMAL /*!< Continue with normal operation during debug mode. (default) */,
    HALT_TMR = 1 /*!< Halt TMR counter during debug mode. */,
    FORCE_0 = 2 /*!< Force TMR output to logic 0 (prior to consideration of
                   SCTRL[OPS]). */
        ,
    HALT_AND_FORCE_0 =
        3 /*!< Both halt counter and force output to 0 during debug mode. */
};
static_assert(sizeof(TMR1_CSCTRL1_DBG_EN) == 1);

/**
 * Converts TMR1_CSCTRL1_DBG_EN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(TMR1_CSCTRL1_DBG_EN instance)
{
    const char *result = "UNKNOWN TMR1_CSCTRL1_DBG_EN";

    switch (instance)
    {
    case TMR1_CSCTRL1_DBG_EN::NORMAL:
        result = "NORMAL";
        break;
    case TMR1_CSCTRL1_DBG_EN::HALT_TMR:
        result = "HALT_TMR";
        break;
    case TMR1_CSCTRL1_DBG_EN::FORCE_0:
        result = "FORCE_0";
        break;
    case TMR1_CSCTRL1_DBG_EN::HALT_AND_FORCE_0:
        result = "HALT_AND_FORCE_0";
        break;
    }

    return result;
}

/**
 * Converts a C string to TMR1_CSCTRL1_DBG_EN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, TMR1_CSCTRL1_DBG_EN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NORMAL", 6)))
    {
        output = TMR1_CSCTRL1_DBG_EN::NORMAL;
    }
    else if ((result = !strncmp(data, "HALT_TMR", 8)))
    {
        output = TMR1_CSCTRL1_DBG_EN::HALT_TMR;
    }
    else if ((result = !strncmp(data, "FORCE_0", 7)))
    {
        output = TMR1_CSCTRL1_DBG_EN::FORCE_0;
    }
    else if ((result = !strncmp(data, "HALT_AND_FORCE_0", 16)))
    {
        output = TMR1_CSCTRL1_DBG_EN::HALT_AND_FORCE_0;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
