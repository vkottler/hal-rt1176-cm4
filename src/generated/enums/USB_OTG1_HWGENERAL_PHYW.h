/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class USB_OTG1_HWGENERAL_PHYW : uint8_t
{
    DATA_BUS_8 /*!< 8 bit wide data bus (Software non-programmable) */,
    DATA_BUS_16 = 1 /*!< 16 bit wide data bus (Software non-programmable) */,
    SW_RST_8 = 2 /*!< Reset to 8 bit wide data bus (Software programmable) */,
    SW_RST_16 = 3 /*!< Reset to 16 bit wide data bus (Software programmable) */
};
static_assert(sizeof(USB_OTG1_HWGENERAL_PHYW) == 1);

/**
 * Converts USB_OTG1_HWGENERAL_PHYW to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(USB_OTG1_HWGENERAL_PHYW instance)
{
    const char *result = "UNKNOWN USB_OTG1_HWGENERAL_PHYW";

    switch (instance)
    {
    case USB_OTG1_HWGENERAL_PHYW::DATA_BUS_8:
        result = "DATA_BUS_8";
        break;
    case USB_OTG1_HWGENERAL_PHYW::DATA_BUS_16:
        result = "DATA_BUS_16";
        break;
    case USB_OTG1_HWGENERAL_PHYW::SW_RST_8:
        result = "SW_RST_8";
        break;
    case USB_OTG1_HWGENERAL_PHYW::SW_RST_16:
        result = "SW_RST_16";
        break;
    }

    return result;
}

/**
 * Converts a C string to USB_OTG1_HWGENERAL_PHYW.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, USB_OTG1_HWGENERAL_PHYW &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DATA_BUS_8", 10)))
    {
        output = USB_OTG1_HWGENERAL_PHYW::DATA_BUS_8;
    }
    else if ((result = !strncmp(data, "DATA_BUS_16", 11)))
    {
        output = USB_OTG1_HWGENERAL_PHYW::DATA_BUS_16;
    }
    else if ((result = !strncmp(data, "SW_RST_8", 8)))
    {
        output = USB_OTG1_HWGENERAL_PHYW::SW_RST_8;
    }
    else if ((result = !strncmp(data, "SW_RST_16", 9)))
    {
        output = USB_OTG1_HWGENERAL_PHYW::SW_RST_16;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4