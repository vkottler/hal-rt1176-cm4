/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USBPHY1_DEBUG1_ENTAILADJVD : uint8_t
{
    NOM_DELAY /*!< Delay is nominal */,
    DELAY_20_P = 1 /*!< Delay is +20% */,
    DELAY_20_N = 2 /*!< Delay is -20% */,
    DELAY_40_N = 3 /*!< Delay is -40% */
};
static_assert(sizeof(USBPHY1_DEBUG1_ENTAILADJVD) == 1);

/**
 * Converts USBPHY1_DEBUG1_ENTAILADJVD to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USBPHY1_DEBUG1_ENTAILADJVD instance)
{
    const char *result = "UNKNOWN USBPHY1_DEBUG1_ENTAILADJVD";

    switch (instance)
    {
    case USBPHY1_DEBUG1_ENTAILADJVD::NOM_DELAY:
        result = "NOM_DELAY";
        break;
    case USBPHY1_DEBUG1_ENTAILADJVD::DELAY_20_P:
        result = "DELAY_20_P";
        break;
    case USBPHY1_DEBUG1_ENTAILADJVD::DELAY_20_N:
        result = "DELAY_20_N";
        break;
    case USBPHY1_DEBUG1_ENTAILADJVD::DELAY_40_N:
        result = "DELAY_40_N";
        break;
    }

    return result;
}

/**
 * Converts a C string to USBPHY1_DEBUG1_ENTAILADJVD.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USBPHY1_DEBUG1_ENTAILADJVD &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NOM_DELAY", 9)))
    {
        output = USBPHY1_DEBUG1_ENTAILADJVD::NOM_DELAY;
    }
    else if ((result = !strncmp(data, "DELAY_20_P", 10)))
    {
        output = USBPHY1_DEBUG1_ENTAILADJVD::DELAY_20_P;
    }
    else if ((result = !strncmp(data, "DELAY_20_N", 10)))
    {
        output = USBPHY1_DEBUG1_ENTAILADJVD::DELAY_20_N;
    }
    else if ((result = !strncmp(data, "DELAY_40_N", 10)))
    {
        output = USBPHY1_DEBUG1_ENTAILADJVD::DELAY_40_N;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
