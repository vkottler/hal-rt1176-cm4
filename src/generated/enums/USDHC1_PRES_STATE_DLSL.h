/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USDHC1_PRES_STATE_DLSL : uint8_t
{
    _0 /*!< Data 0 line signal level */,
    _1 = 1 /*!< Data 1 line signal level */,
    _2 = 2 /*!< Data 2 line signal level */,
    _3 = 3 /*!< Data 3 line signal level */,
    _4 = 4 /*!< Data 4 line signal level */,
    _5 = 5 /*!< Data 5 line signal level */,
    _6 = 6 /*!< Data 6 line signal level */,
    _7 = 7 /*!< Data 7 line signal level */
};
static_assert(sizeof(USDHC1_PRES_STATE_DLSL) == 1);

/**
 * Converts USDHC1_PRES_STATE_DLSL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USDHC1_PRES_STATE_DLSL instance)
{
    const char *result = "UNKNOWN USDHC1_PRES_STATE_DLSL";

    switch (instance)
    {
    case USDHC1_PRES_STATE_DLSL::_0:
        result = "_0";
        break;
    case USDHC1_PRES_STATE_DLSL::_1:
        result = "_1";
        break;
    case USDHC1_PRES_STATE_DLSL::_2:
        result = "_2";
        break;
    case USDHC1_PRES_STATE_DLSL::_3:
        result = "_3";
        break;
    case USDHC1_PRES_STATE_DLSL::_4:
        result = "_4";
        break;
    case USDHC1_PRES_STATE_DLSL::_5:
        result = "_5";
        break;
    case USDHC1_PRES_STATE_DLSL::_6:
        result = "_6";
        break;
    case USDHC1_PRES_STATE_DLSL::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to USDHC1_PRES_STATE_DLSL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USDHC1_PRES_STATE_DLSL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = USDHC1_PRES_STATE_DLSL::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = USDHC1_PRES_STATE_DLSL::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = USDHC1_PRES_STATE_DLSL::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = USDHC1_PRES_STATE_DLSL::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = USDHC1_PRES_STATE_DLSL::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = USDHC1_PRES_STATE_DLSL::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = USDHC1_PRES_STATE_DLSL::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = USDHC1_PRES_STATE_DLSL::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
