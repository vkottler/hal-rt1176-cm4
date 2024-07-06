/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ASRC_ASRCFG_POSTMODC : uint8_t
{
    upsamp_2 /*!< Select Upsampling-by-2 as defined in Signal Processing Flow.
              */
        ,
    direct_connect = 1 /*!< Select Direct-Connection as defined in Signal
                          Processing Flow. */
        ,
    downsamp_2 = 2 /*!< Select Downsampling-by-2 as defined in Signal
                      Processing Flow. */
};
static_assert(sizeof(ASRC_ASRCFG_POSTMODC) == 1);

/**
 * Converts ASRC_ASRCFG_POSTMODC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ASRC_ASRCFG_POSTMODC instance)
{
    const char *result = "UNKNOWN ASRC_ASRCFG_POSTMODC";

    switch (instance)
    {
    case ASRC_ASRCFG_POSTMODC::upsamp_2:
        result = "upsamp_2";
        break;
    case ASRC_ASRCFG_POSTMODC::direct_connect:
        result = "direct_connect";
        break;
    case ASRC_ASRCFG_POSTMODC::downsamp_2:
        result = "downsamp_2";
        break;
    }

    return result;
}

/**
 * Converts a C string to ASRC_ASRCFG_POSTMODC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ASRC_ASRCFG_POSTMODC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "upsamp_2", 8)))
    {
        output = ASRC_ASRCFG_POSTMODC::upsamp_2;
    }
    else if ((result = !strncmp(data, "direct_connect", 14)))
    {
        output = ASRC_ASRCFG_POSTMODC::direct_connect;
    }
    else if ((result = !strncmp(data, "downsamp_2", 10)))
    {
        output = ASRC_ASRCFG_POSTMODC::downsamp_2;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
