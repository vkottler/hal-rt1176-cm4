/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LCDIF_PIGEON_9_0_MASK_CNT_SEL : uint8_t
{
    HSTATE_CNT /*!< pclk counter within one hscan state */,
    HSTATE_CYCLE = 1 /*!< pclk cycle within one hscan state */,
    VSTATE_CNT = 2 /*!< line counter within one vscan state */,
    VSTATE_CYCLE = 3 /*!< line cycle within one vscan state */,
    FRAME_CNT = 4 /*!< frame counter */,
    FRAME_CYCLE = 5 /*!< frame cycle */,
    HCNT = 6 /*!< horizontal counter (pclk counter within one line ) */,
    VCNT = 7 /*!< vertical counter (line counter within one frame) */
};
static_assert(sizeof(LCDIF_PIGEON_9_0_MASK_CNT_SEL) == 1);

/**
 * Converts LCDIF_PIGEON_9_0_MASK_CNT_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_PIGEON_9_0_MASK_CNT_SEL instance)
{
    const char *result = "UNKNOWN LCDIF_PIGEON_9_0_MASK_CNT_SEL";

    switch (instance)
    {
    case LCDIF_PIGEON_9_0_MASK_CNT_SEL::HSTATE_CNT:
        result = "HSTATE_CNT";
        break;
    case LCDIF_PIGEON_9_0_MASK_CNT_SEL::HSTATE_CYCLE:
        result = "HSTATE_CYCLE";
        break;
    case LCDIF_PIGEON_9_0_MASK_CNT_SEL::VSTATE_CNT:
        result = "VSTATE_CNT";
        break;
    case LCDIF_PIGEON_9_0_MASK_CNT_SEL::VSTATE_CYCLE:
        result = "VSTATE_CYCLE";
        break;
    case LCDIF_PIGEON_9_0_MASK_CNT_SEL::FRAME_CNT:
        result = "FRAME_CNT";
        break;
    case LCDIF_PIGEON_9_0_MASK_CNT_SEL::FRAME_CYCLE:
        result = "FRAME_CYCLE";
        break;
    case LCDIF_PIGEON_9_0_MASK_CNT_SEL::HCNT:
        result = "HCNT";
        break;
    case LCDIF_PIGEON_9_0_MASK_CNT_SEL::VCNT:
        result = "VCNT";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_PIGEON_9_0_MASK_CNT_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        LCDIF_PIGEON_9_0_MASK_CNT_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "HSTATE_CNT", 10)))
    {
        output = LCDIF_PIGEON_9_0_MASK_CNT_SEL::HSTATE_CNT;
    }
    else if ((result = !strncmp(data, "HSTATE_CYCLE", 12)))
    {
        output = LCDIF_PIGEON_9_0_MASK_CNT_SEL::HSTATE_CYCLE;
    }
    else if ((result = !strncmp(data, "VSTATE_CNT", 10)))
    {
        output = LCDIF_PIGEON_9_0_MASK_CNT_SEL::VSTATE_CNT;
    }
    else if ((result = !strncmp(data, "VSTATE_CYCLE", 12)))
    {
        output = LCDIF_PIGEON_9_0_MASK_CNT_SEL::VSTATE_CYCLE;
    }
    else if ((result = !strncmp(data, "FRAME_CNT", 9)))
    {
        output = LCDIF_PIGEON_9_0_MASK_CNT_SEL::FRAME_CNT;
    }
    else if ((result = !strncmp(data, "FRAME_CYCLE", 11)))
    {
        output = LCDIF_PIGEON_9_0_MASK_CNT_SEL::FRAME_CYCLE;
    }
    else if ((result = !strncmp(data, "HCNT", 4)))
    {
        output = LCDIF_PIGEON_9_0_MASK_CNT_SEL::HCNT;
    }
    else if ((result = !strncmp(data, "VCNT", 4)))
    {
        output = LCDIF_PIGEON_9_0_MASK_CNT_SEL::VCNT;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
