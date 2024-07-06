/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LPADC1_CMDH2_STS : uint8_t
{
    _0 /*!< Minimum sample time of 3 ADCK cycles. */,
    _1 = 1 /*!< 3 + 21 ADCK cycles; 5 ADCK cycles total sample time. */,
    _2 = 2 /*!< 3 + 22 ADCK cycles; 7 ADCK cycles total sample time. */,
    _3 = 3 /*!< 3 + 23 ADCK cycles; 11 ADCK cycles total sample time. */,
    _4 = 4 /*!< 3 + 24 ADCK cycles; 19 ADCK cycles total sample time. */,
    _5 = 5 /*!< 3 + 25 ADCK cycles; 35 ADCK cycles total sample time. */,
    _6 = 6 /*!< 3 + 26 ADCK cycles; 67 ADCK cycles total sample time. */,
    _7 = 7 /*!< 3 + 27 ADCK cycles; 131 ADCK cycles total sample time. */
};
static_assert(sizeof(LPADC1_CMDH2_STS) == 1);

/**
 * Converts LPADC1_CMDH2_STS to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPADC1_CMDH2_STS instance)
{
    const char *result = "UNKNOWN LPADC1_CMDH2_STS";

    switch (instance)
    {
    case LPADC1_CMDH2_STS::_0:
        result = "_0";
        break;
    case LPADC1_CMDH2_STS::_1:
        result = "_1";
        break;
    case LPADC1_CMDH2_STS::_2:
        result = "_2";
        break;
    case LPADC1_CMDH2_STS::_3:
        result = "_3";
        break;
    case LPADC1_CMDH2_STS::_4:
        result = "_4";
        break;
    case LPADC1_CMDH2_STS::_5:
        result = "_5";
        break;
    case LPADC1_CMDH2_STS::_6:
        result = "_6";
        break;
    case LPADC1_CMDH2_STS::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPADC1_CMDH2_STS.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPADC1_CMDH2_STS &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LPADC1_CMDH2_STS::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LPADC1_CMDH2_STS::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LPADC1_CMDH2_STS::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LPADC1_CMDH2_STS::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LPADC1_CMDH2_STS::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = LPADC1_CMDH2_STS::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = LPADC1_CMDH2_STS::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = LPADC1_CMDH2_STS::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
