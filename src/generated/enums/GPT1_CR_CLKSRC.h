/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class GPT1_CR_CLKSRC : uint8_t
{
    NO_CLOCK /*!< No clock */,
    CLOCK_001 = 1 /*!< Peripheral Clock (ipg_clk) */,
    CLOCK_010 = 2 /*!< High Frequency Reference Clock (ipg_clk_highfreq) */,
    CLOCK_011 = 3 /*!< External Clock */,
    CLOCK_100 = 4 /*!< Low Frequency Reference Clock (ipg_clk_32k) */,
    CLOCK_101 = 5 /*!< Oscillator as Reference Clock (ipg_clk_16M) */
};
static_assert(sizeof(GPT1_CR_CLKSRC) == 1);

/**
 * Converts GPT1_CR_CLKSRC to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(GPT1_CR_CLKSRC instance)
{
    const char *result = "UNKNOWN GPT1_CR_CLKSRC";

    switch (instance)
    {
    case GPT1_CR_CLKSRC::NO_CLOCK:
        result = "NO_CLOCK";
        break;
    case GPT1_CR_CLKSRC::CLOCK_001:
        result = "CLOCK_001";
        break;
    case GPT1_CR_CLKSRC::CLOCK_010:
        result = "CLOCK_010";
        break;
    case GPT1_CR_CLKSRC::CLOCK_011:
        result = "CLOCK_011";
        break;
    case GPT1_CR_CLKSRC::CLOCK_100:
        result = "CLOCK_100";
        break;
    case GPT1_CR_CLKSRC::CLOCK_101:
        result = "CLOCK_101";
        break;
    }

    return result;
}

/**
 * Converts a C string to GPT1_CR_CLKSRC.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, GPT1_CR_CLKSRC &output)
{
    bool result = false;

    if ((result = !strncmp(data, "NO_CLOCK", 8)))
    {
        output = GPT1_CR_CLKSRC::NO_CLOCK;
    }
    else if ((result = !strncmp(data, "CLOCK_001", 9)))
    {
        output = GPT1_CR_CLKSRC::CLOCK_001;
    }
    else if ((result = !strncmp(data, "CLOCK_010", 9)))
    {
        output = GPT1_CR_CLKSRC::CLOCK_010;
    }
    else if ((result = !strncmp(data, "CLOCK_011", 9)))
    {
        output = GPT1_CR_CLKSRC::CLOCK_011;
    }
    else if ((result = !strncmp(data, "CLOCK_100", 9)))
    {
        output = GPT1_CR_CLKSRC::CLOCK_100;
    }
    else if ((result = !strncmp(data, "CLOCK_101", 9)))
    {
        output = GPT1_CR_CLKSRC::CLOCK_101;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
