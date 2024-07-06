/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LCDIF_CTRL2_SET_OUTSTANDING_REQS : uint8_t
{
    _1 /*!< REQ_1 */,
    _2 = 1 /*!< REQ_2 */,
    _4 = 2 /*!< REQ_4 */,
    _8 = 3 /*!< REQ_8 */,
    _16 = 4 /*!< REQ_16 */
};
static_assert(sizeof(LCDIF_CTRL2_SET_OUTSTANDING_REQS) == 1);

/**
 * Converts LCDIF_CTRL2_SET_OUTSTANDING_REQS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LCDIF_CTRL2_SET_OUTSTANDING_REQS instance)
{
    const char *result = "UNKNOWN LCDIF_CTRL2_SET_OUTSTANDING_REQS";

    switch (instance)
    {
    case LCDIF_CTRL2_SET_OUTSTANDING_REQS::_1:
        result = "_1";
        break;
    case LCDIF_CTRL2_SET_OUTSTANDING_REQS::_2:
        result = "_2";
        break;
    case LCDIF_CTRL2_SET_OUTSTANDING_REQS::_4:
        result = "_4";
        break;
    case LCDIF_CTRL2_SET_OUTSTANDING_REQS::_8:
        result = "_8";
        break;
    case LCDIF_CTRL2_SET_OUTSTANDING_REQS::_16:
        result = "_16";
        break;
    }

    return result;
}

/**
 * Converts a C string to LCDIF_CTRL2_SET_OUTSTANDING_REQS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        LCDIF_CTRL2_SET_OUTSTANDING_REQS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1", 2)))
    {
        output = LCDIF_CTRL2_SET_OUTSTANDING_REQS::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LCDIF_CTRL2_SET_OUTSTANDING_REQS::_2;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LCDIF_CTRL2_SET_OUTSTANDING_REQS::_4;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = LCDIF_CTRL2_SET_OUTSTANDING_REQS::_8;
    }
    else if ((result = !strncmp(data, "_16", 3)))
    {
        output = LCDIF_CTRL2_SET_OUTSTANDING_REQS::_16;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
