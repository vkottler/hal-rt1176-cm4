/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USDHC1_MMC_BOOT_DTOCV_ACK : uint8_t
{
    _0 /*!< SDCLK x 2^14 */,
    _1 = 1 /*!< SDCLK x 2^15 */,
    _2 = 2 /*!< SDCLK x 2^16 */,
    _3 = 3 /*!< SDCLK x 2^17 */,
    _4 = 4 /*!< SDCLK x 2^18 */,
    _5 = 5 /*!< SDCLK x 2^19 */,
    _6 = 6 /*!< SDCLK x 2^20 */,
    _7 = 7 /*!< SDCLK x 2^21 */,
    _14 = 14 /*!< SDCLK x 2^28 */,
    _15 = 15 /*!< SDCLK x 2^29 */
};
static_assert(sizeof(USDHC1_MMC_BOOT_DTOCV_ACK) == 1);

/**
 * Converts USDHC1_MMC_BOOT_DTOCV_ACK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USDHC1_MMC_BOOT_DTOCV_ACK instance)
{
    const char *result = "UNKNOWN USDHC1_MMC_BOOT_DTOCV_ACK";

    switch (instance)
    {
    case USDHC1_MMC_BOOT_DTOCV_ACK::_0:
        result = "_0";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_1:
        result = "_1";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_2:
        result = "_2";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_3:
        result = "_3";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_4:
        result = "_4";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_5:
        result = "_5";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_6:
        result = "_6";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_7:
        result = "_7";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_14:
        result = "_14";
        break;
    case USDHC1_MMC_BOOT_DTOCV_ACK::_15:
        result = "_15";
        break;
    }

    return result;
}

/**
 * Converts a C string to USDHC1_MMC_BOOT_DTOCV_ACK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USDHC1_MMC_BOOT_DTOCV_ACK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_1;
    }
    else if ((result = !strncmp(data, "_2", 2)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_2;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_3;
    }
    else if ((result = !strncmp(data, "_4", 2)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_4;
    }
    else if ((result = !strncmp(data, "_5", 2)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_5;
    }
    else if ((result = !strncmp(data, "_6", 2)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_6;
    }
    else if ((result = !strncmp(data, "_7", 2)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_7;
    }
    else if ((result = !strncmp(data, "_14", 3)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_14;
    }
    else if ((result = !strncmp(data, "_15", 3)))
    {
        output = USDHC1_MMC_BOOT_DTOCV_ACK::_15;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
