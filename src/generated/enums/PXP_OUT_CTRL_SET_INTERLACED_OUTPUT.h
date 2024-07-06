/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PXP_OUT_CTRL_SET_INTERLACED_OUTPUT : uint8_t
{
    PROGRESSIVE /*!< All data written in progressive format to the OUTBUF
                   Pointer. */
        ,
    FIELD0 = 1 /*!< Interlaced output: only data for field 0 is written to the
                  OUTBUF Pointer. */
        ,
    FIELD1 = 2 /*!< Interlaced output: only data for field 1 is written to the
                  OUTBUF2 Pointer. */
        ,
    INTERLACED = 3 /*!< Interlaced output: data for field 0 is written to
                      OUTBUF and data for field 1 is written to OUTBUF2. */
};
static_assert(sizeof(PXP_OUT_CTRL_SET_INTERLACED_OUTPUT) == 1);

/**
 * Converts PXP_OUT_CTRL_SET_INTERLACED_OUTPUT to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PXP_OUT_CTRL_SET_INTERLACED_OUTPUT instance)
{
    const char *result = "UNKNOWN PXP_OUT_CTRL_SET_INTERLACED_OUTPUT";

    switch (instance)
    {
    case PXP_OUT_CTRL_SET_INTERLACED_OUTPUT::PROGRESSIVE:
        result = "PROGRESSIVE";
        break;
    case PXP_OUT_CTRL_SET_INTERLACED_OUTPUT::FIELD0:
        result = "FIELD0";
        break;
    case PXP_OUT_CTRL_SET_INTERLACED_OUTPUT::FIELD1:
        result = "FIELD1";
        break;
    case PXP_OUT_CTRL_SET_INTERLACED_OUTPUT::INTERLACED:
        result = "INTERLACED";
        break;
    }

    return result;
}

/**
 * Converts a C string to PXP_OUT_CTRL_SET_INTERLACED_OUTPUT.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        PXP_OUT_CTRL_SET_INTERLACED_OUTPUT &output)
{
    bool result = false;

    if ((result = !strncmp(data, "PROGRESSIVE", 11)))
    {
        output = PXP_OUT_CTRL_SET_INTERLACED_OUTPUT::PROGRESSIVE;
    }
    else if ((result = !strncmp(data, "FIELD0", 6)))
    {
        output = PXP_OUT_CTRL_SET_INTERLACED_OUTPUT::FIELD0;
    }
    else if ((result = !strncmp(data, "FIELD1", 6)))
    {
        output = PXP_OUT_CTRL_SET_INTERLACED_OUTPUT::FIELD1;
    }
    else if ((result = !strncmp(data, "INTERLACED", 10)))
    {
        output = PXP_OUT_CTRL_SET_INTERLACED_OUTPUT::INTERLACED;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
