/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class SPDIF_STC_TxClk_DF : uint8_t
{
    _1 /*!< divider factor is 1 */,
    _2 = 1 /*!< divider factor is 2 */,
    _128 = 127 /*!< divider factor is 128 */
};
static_assert(sizeof(SPDIF_STC_TxClk_DF) == 1);

/**
 * Converts SPDIF_STC_TxClk_DF to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(SPDIF_STC_TxClk_DF instance)
{
    const char *result = "UNKNOWN SPDIF_STC_TxClk_DF";

    switch (instance)
    {
    case SPDIF_STC_TxClk_DF::_1:
        result = "_1";
        break;
    case SPDIF_STC_TxClk_DF::_2:
        result = "_2";
        break;
    case SPDIF_STC_TxClk_DF::_128:
        result = "_128";
        break;
    }

    return result;
}

/**
 * Converts a C string to SPDIF_STC_TxClk_DF.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, SPDIF_STC_TxClk_DF &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_1", 2)))
    {
        output = SPDIF_STC_TxClk_DF::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = SPDIF_STC_TxClk_DF::_2;
    }
    else if ((result = !strncmp(data, "_128", 4)))
    {
        output = SPDIF_STC_TxClk_DF::_128;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
