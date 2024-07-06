/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN : uint8_t
{
    RGB /*!< RGB */,
    RBG = 1 /*!< RBG */,
    GBR = 2 /*!< GBR */,
    GRB = 3 /*!< GRB */,
    BRG = 4 /*!< BRG */,
    BGR = 5 /*!< BGR */
};
static_assert(sizeof(LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN) == 1);

/**
 * Converts LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN instance)
{
    const char *result = "UNKNOWN LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN";

    switch (instance)
    {
    case LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::RGB:
        result = "RGB";
        break;
    case LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::RBG:
        result = "RBG";
        break;
    case LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::GBR:
        result = "GBR";
        break;
    case LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::GRB:
        result = "GRB";
        break;
    case LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::BRG:
        result = "BRG";
        break;
    case LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::BGR:
        result = "BGR";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "RGB", 3)))
    {
        output = LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::RGB;
    }
    else if ((result = !strncmp(data, "RBG", 3)))
    {
        output = LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::RBG;
    }
    else if ((result = !strncmp(data, "GBR", 3)))
    {
        output = LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::GBR;
    }
    else if ((result = !strncmp(data, "GRB", 3)))
    {
        output = LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::GRB;
    }
    else if ((result = !strncmp(data, "BRG", 3)))
    {
        output = LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::BRG;
    }
    else if ((result = !strncmp(data, "BGR", 3)))
    {
        output = LCDIF_CTRL2_CLR_EVEN_LINE_PATTERN::BGR;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
