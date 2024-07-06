/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LCDIF_PIGEON_4_2_SIG_LOGIC : uint8_t
{
    DIS /*!< No logic operation */,
    AND = 1 /*!< sigout = sig_another AND this_sig */,
    OR = 2 /*!< sigout = sig_another OR this_sig */,
    MASK = 3 /*!< mask = sig_another AND other_masks */
};
static_assert(sizeof(LCDIF_PIGEON_4_2_SIG_LOGIC) == 1);

/**
 * Converts LCDIF_PIGEON_4_2_SIG_LOGIC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_PIGEON_4_2_SIG_LOGIC instance)
{
    const char *result = "UNKNOWN LCDIF_PIGEON_4_2_SIG_LOGIC";

    switch (instance)
    {
    case LCDIF_PIGEON_4_2_SIG_LOGIC::DIS:
        result = "DIS";
        break;
    case LCDIF_PIGEON_4_2_SIG_LOGIC::AND:
        result = "AND";
        break;
    case LCDIF_PIGEON_4_2_SIG_LOGIC::OR:
        result = "OR";
        break;
    case LCDIF_PIGEON_4_2_SIG_LOGIC::MASK:
        result = "MASK";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_PIGEON_4_2_SIG_LOGIC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LCDIF_PIGEON_4_2_SIG_LOGIC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DIS", 3)))
    {
        output = LCDIF_PIGEON_4_2_SIG_LOGIC::DIS;
    }
    else if ((result = !strncmp(data, "AND", 3)))
    {
        output = LCDIF_PIGEON_4_2_SIG_LOGIC::AND;
    }
    else if ((result = !strncmp(data, "OR", 2)))
    {
        output = LCDIF_PIGEON_4_2_SIG_LOGIC::OR;
    }
    else if ((result = !strncmp(data, "MASK", 4)))
    {
        output = LCDIF_PIGEON_4_2_SIG_LOGIC::MASK;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
