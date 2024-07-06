/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LPADC1_CMDH9_NEXT : uint8_t
{
    _0 /*!< No next command defined. Terminate conversions at completion of
          current command. If lower priority trigger pending, begin command
          associated with lower priority trigger. */
        ,
    _1 = 1 /*!< Select CMD1 command buffer register as next command. */,
    _2 = 2 /*!< Select corresponding CMD command buffer register as next
              command */
        ,
    _3 = 3 /*!< Select corresponding CMD command buffer register as next
              command */
        ,
    _4 = 4 /*!< Select corresponding CMD command buffer register as next
              command */
        ,
    _5 = 5 /*!< Select corresponding CMD command buffer register as next
              command */
        ,
    _6 = 6 /*!< Select corresponding CMD command buffer register as next
              command */
        ,
    _7 = 7 /*!< Select corresponding CMD command buffer register as next
              command */
        ,
    _8 = 8 /*!< Select corresponding CMD command buffer register as next
              command */
        ,
    _9 = 9 /*!< Select corresponding CMD command buffer register as next
              command */
        ,
    _15 = 15 /*!< Select CMD15 command buffer register as next command. */
};
static_assert(sizeof(LPADC1_CMDH9_NEXT) == 1);

/**
 * Converts LPADC1_CMDH9_NEXT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPADC1_CMDH9_NEXT instance)
{
    const char *result = "UNKNOWN LPADC1_CMDH9_NEXT";

    switch (instance)
    {
    case LPADC1_CMDH9_NEXT::_0:
        result = "_0";
        break;
    case LPADC1_CMDH9_NEXT::_1:
        result = "_1";
        break;
    case LPADC1_CMDH9_NEXT::_2:
        result = "_2";
        break;
    case LPADC1_CMDH9_NEXT::_3:
        result = "_3";
        break;
    case LPADC1_CMDH9_NEXT::_4:
        result = "_4";
        break;
    case LPADC1_CMDH9_NEXT::_5:
        result = "_5";
        break;
    case LPADC1_CMDH9_NEXT::_6:
        result = "_6";
        break;
    case LPADC1_CMDH9_NEXT::_7:
        result = "_7";
        break;
    case LPADC1_CMDH9_NEXT::_8:
        result = "_8";
        break;
    case LPADC1_CMDH9_NEXT::_9:
        result = "_9";
        break;
    case LPADC1_CMDH9_NEXT::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPADC1_CMDH9_NEXT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPADC1_CMDH9_NEXT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_7;
    }
    else if ((result = !strncmp(data, "_8", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_8;
    }
    else if ((result = !strncmp(data, "_9", 2)))
    {
        output = LPADC1_CMDH9_NEXT::_9;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = LPADC1_CMDH9_NEXT::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
