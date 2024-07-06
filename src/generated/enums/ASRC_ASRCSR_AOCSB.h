/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class ASRC_ASRCSR_AOCSB : uint8_t
{
    bitclk0 /*!< bit clock 0 */,
    bitclk1 = 1 /*!< bit clock 1 */,
    bitclk2 = 2 /*!< bit clock 2 */,
    bitclk3 = 3 /*!< bit clock 3 */,
    bitclk4 = 4 /*!< bit clock 4 */,
    bitclk5 = 5 /*!< bit clock 5 */,
    bitclk6 = 6 /*!< bit clock 6 */,
    bitclk7 = 7 /*!< bit clock 7 */,
    bitclk8 = 8 /*!< bit clock 8 */,
    bitclk9 = 9 /*!< bit clock 9 */,
    bitclka = 10 /*!< bit clock A */,
    bitclkb = 11 /*!< bit clock B */,
    bitclkc = 12 /*!< bit clock C */,
    bitclkd = 13 /*!< bit clock D */,
    bitclke = 14 /*!< bit clock E */,
    clk_disabled = 15 /*!< clock disabled, connected to zero */
};
static_assert(sizeof(ASRC_ASRCSR_AOCSB) == 1);

/**
 * Converts ASRC_ASRCSR_AOCSB to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(ASRC_ASRCSR_AOCSB instance)
{
    const char *result = "UNKNOWN ASRC_ASRCSR_AOCSB";

    switch (instance)
    {
    case ASRC_ASRCSR_AOCSB::bitclk0:
        result = "bitclk0";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk1:
        result = "bitclk1";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk2:
        result = "bitclk2";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk3:
        result = "bitclk3";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk4:
        result = "bitclk4";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk5:
        result = "bitclk5";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk6:
        result = "bitclk6";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk7:
        result = "bitclk7";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk8:
        result = "bitclk8";
        break;
    case ASRC_ASRCSR_AOCSB::bitclk9:
        result = "bitclk9";
        break;
    case ASRC_ASRCSR_AOCSB::bitclka:
        result = "bitclka";
        break;
    case ASRC_ASRCSR_AOCSB::bitclkb:
        result = "bitclkb";
        break;
    case ASRC_ASRCSR_AOCSB::bitclkc:
        result = "bitclkc";
        break;
    case ASRC_ASRCSR_AOCSB::bitclkd:
        result = "bitclkd";
        break;
    case ASRC_ASRCSR_AOCSB::bitclke:
        result = "bitclke";
        break;
    case ASRC_ASRCSR_AOCSB::clk_disabled:
        result = "clk_disabled";
        break;
    }

    return result;
}

/**
 * Converts a C string to ASRC_ASRCSR_AOCSB.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, ASRC_ASRCSR_AOCSB &output)
{
    bool result = false;

    if ((result = !strncmp(data, "bitclk0", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk0;
    }
    else if ((result = !strncmp(data, "bitclk1", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk1;
    }
    else if ((result = !strncmp(data, "bitclk2", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk2;
    }
    else if ((result = !strncmp(data, "bitclk3", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk3;
    }
    else if ((result = !strncmp(data, "bitclk4", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk4;
    }
    else if ((result = !strncmp(data, "bitclk5", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk5;
    }
    else if ((result = !strncmp(data, "bitclk6", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk6;
    }
    else if ((result = !strncmp(data, "bitclk7", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk7;
    }
    else if ((result = !strncmp(data, "bitclk8", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk8;
    }
    else if ((result = !strncmp(data, "bitclk9", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclk9;
    }
    else if ((result = !strncmp(data, "bitclka", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclka;
    }
    else if ((result = !strncmp(data, "bitclkb", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclkb;
    }
    else if ((result = !strncmp(data, "bitclkc", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclkc;
    }
    else if ((result = !strncmp(data, "bitclkd", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclkd;
    }
    else if ((result = !strncmp(data, "bitclke", 7)))
    {
        output = ASRC_ASRCSR_AOCSB::bitclke;
    }
    else if ((result = !strncmp(data, "clk_disabled", 12)))
    {
        output = ASRC_ASRCSR_AOCSB::clk_disabled;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
