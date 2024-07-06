/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class CMP1_C3_ACSAT : uint8_t
{
    _0 /*!< The sampling time equals to T */,
    _1 = 1 /*!< The sampling time equasl to 2*T */,
    _2 = 2 /*!< The sampling time equasl to 4*T */,
    _3 = 3 /*!< The sampling time equasl to 8*T */,
    _4 = 4 /*!< The sampling time equasl to 16*T */,
    _5 = 5 /*!< The sampling time equasl to 32*T */,
    _6 = 6 /*!< The sampling time equasl to 64*T */,
    _7 = 7 /*!< The sampling time equasl to 256*T */
};
static_assert(sizeof(CMP1_C3_ACSAT) == 1);

/**
 * Converts CMP1_C3_ACSAT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(CMP1_C3_ACSAT instance)
{
    const char *result = "UNKNOWN CMP1_C3_ACSAT";

    switch (instance)
    {
    case CMP1_C3_ACSAT::_0:
        result = "_0";
        break;
    case CMP1_C3_ACSAT::_1:
        result = "_1";
        break;
    case CMP1_C3_ACSAT::_2:
        result = "_2";
        break;
    case CMP1_C3_ACSAT::_3:
        result = "_3";
        break;
    case CMP1_C3_ACSAT::_4:
        result = "_4";
        break;
    case CMP1_C3_ACSAT::_5:
        result = "_5";
        break;
    case CMP1_C3_ACSAT::_6:
        result = "_6";
        break;
    case CMP1_C3_ACSAT::_7:
        result = "_7";
        break;
    }

    return result;
}

/**
 * Converts a C string to CMP1_C3_ACSAT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, CMP1_C3_ACSAT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = CMP1_C3_ACSAT::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = CMP1_C3_ACSAT::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = CMP1_C3_ACSAT::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = CMP1_C3_ACSAT::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = CMP1_C3_ACSAT::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = CMP1_C3_ACSAT::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = CMP1_C3_ACSAT::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = CMP1_C3_ACSAT::_7;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4