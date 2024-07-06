/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class FLEXSPI1_MCR0_RXCLKSRC : uint8_t
{
    _0 /*!< Dummy Read strobe generated by FlexSPI Controller and loopback
          internally. */
        ,
    _1 = 1 /*!< Dummy Read strobe generated by FlexSPI Controller and loopback
              from DQS pad. */
        ,
    _3 = 3 /*!< Flash provided Read strobe and input from DQS pad */
};
static_assert(sizeof(FLEXSPI1_MCR0_RXCLKSRC) == 1);

/**
 * Converts FLEXSPI1_MCR0_RXCLKSRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(FLEXSPI1_MCR0_RXCLKSRC instance)
{
    const char *result = "UNKNOWN FLEXSPI1_MCR0_RXCLKSRC";

    switch (instance)
    {
    case FLEXSPI1_MCR0_RXCLKSRC::_0:
        result = "_0";
        break;
    case FLEXSPI1_MCR0_RXCLKSRC::_1:
        result = "_1";
        break;
    case FLEXSPI1_MCR0_RXCLKSRC::_3:
        result = "_3";
        break;
    }

    return result;
}

/**
 * Converts a C string to FLEXSPI1_MCR0_RXCLKSRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, FLEXSPI1_MCR0_RXCLKSRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0", 2)))
    {
        output = FLEXSPI1_MCR0_RXCLKSRC::_0;
    }
    else if ((result = !strncmp(data, "_1", 2)))
    {
        output = FLEXSPI1_MCR0_RXCLKSRC::_1;
    }
    else if ((result = !strncmp(data, "_3", 2)))
    {
        output = FLEXSPI1_MCR0_RXCLKSRC::_3;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
