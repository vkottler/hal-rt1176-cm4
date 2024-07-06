/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LCDIF_PIGEON_6_0_INC_SEL : uint8_t
{
    PCLK /*!< pclk */,
    LINE = 1 /*!< Line start pulse */,
    FRAME = 2 /*!< Frame start pulse */,
    SIG_ANOTHER = 3 /*!< Use another signal as tick event */
};
static_assert(sizeof(LCDIF_PIGEON_6_0_INC_SEL) == 1);

/**
 * Converts LCDIF_PIGEON_6_0_INC_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_PIGEON_6_0_INC_SEL instance)
{
    const char *result = "UNKNOWN LCDIF_PIGEON_6_0_INC_SEL";

    switch (instance)
    {
    case LCDIF_PIGEON_6_0_INC_SEL::PCLK:
        result = "PCLK";
        break;
    case LCDIF_PIGEON_6_0_INC_SEL::LINE:
        result = "LINE";
        break;
    case LCDIF_PIGEON_6_0_INC_SEL::FRAME:
        result = "FRAME";
        break;
    case LCDIF_PIGEON_6_0_INC_SEL::SIG_ANOTHER:
        result = "SIG_ANOTHER";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_PIGEON_6_0_INC_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LCDIF_PIGEON_6_0_INC_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "PCLK", 4)))
    {
        output = LCDIF_PIGEON_6_0_INC_SEL::PCLK;
    }
    else if ((result = !strncmp(data, "LINE", 4)))
    {
        output = LCDIF_PIGEON_6_0_INC_SEL::LINE;
    }
    else if ((result = !strncmp(data, "FRAME", 5)))
    {
        output = LCDIF_PIGEON_6_0_INC_SEL::FRAME;
    }
    else if ((result = !strncmp(data, "SIG_ANOTHER", 11)))
    {
        output = LCDIF_PIGEON_6_0_INC_SEL::SIG_ANOTHER;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
