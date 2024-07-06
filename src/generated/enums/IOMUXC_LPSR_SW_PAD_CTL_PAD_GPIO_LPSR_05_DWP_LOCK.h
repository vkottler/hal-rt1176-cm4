/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK : uint8_t
{
    none /*!< Neither of DWP bits is locked */,
    low = 1 /*!< The lower DWP bit is locked */,
    high = 2 /*!< The higher DWP bit is locked */,
    both = 3 /*!< Both DWP bits are locked */
};
static_assert(sizeof(IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK) == 1);

/**
 * Converts IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK instance)
{
    const char *result =
        "UNKNOWN IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK";

    switch (instance)
    {
    case IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK::none:
        result = "none";
        break;
    case IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK::low:
        result = "low";
        break;
    case IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK::high:
        result = "high";
        break;
    case IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK::both:
        result = "both";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(
    const char *data, IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK &output)
{
    bool result = false;

    if ((result = !strncmp(data, "none", 4)))
    {
        output = IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK::none;
    }
    else if ((result = !strncmp(data, "low", 3)))
    {
        output = IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK::low;
    }
    else if ((result = !strncmp(data, "high", 4)))
    {
        output = IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK::high;
    }
    else if ((result = !strncmp(data, "both", 4)))
    {
        output = IOMUXC_LPSR_SW_PAD_CTL_PAD_GPIO_LPSR_05_DWP_LOCK::both;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
