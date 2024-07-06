/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE : uint8_t
{
    _0_semc_DATA19 /*!< Select mux mode: ALT0 mux port: SEMC_DATA19 of
                      instance: SEMC */
        ,
    _1_usdhc2_VSELECT = 1 /*!< Select mux mode: ALT1 mux port: USDHC2_VSELECT
                             of instance: USDHC2 */
        ,
    _3_video_mux_CSI_DATA22 =
        3 /*!< Select mux mode: ALT3 mux port: VIDEO_MUX_CSI_DATA22 of
             instance: VIDEO_MUX */
        ,
    _4_flexspi2_B_DATA3 = 4 /*!< Select mux mode: ALT4 mux port:
                               FLEXSPI2_B_DATA03 of instance: FLEXSPI2 */
        ,
    _5_gpio_mux2_IO13 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO13
                             of instance: GPIO_MUX2 */
        ,
    _6_XBAR1_INOUT23 = 6 /*!< Select mux mode: ALT6 mux port: XBAR1_INOUT23 of
                            instance: XBAR1 */
        ,
    _7_ENET_1G_TX_DATA3 = 7 /*!< Select mux mode: ALT7 mux port:
                               ENET_1G_TX_DATA03 of instance: ENET_1G */
        ,
    _8_lpspi1_SDI = 8 /*!< Select mux mode: ALT8 mux port: LPSPI1_SIN of
                         instance: LPSPI1 */
        ,
    _10_gpio8_IO13 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO13 of
                           instance: GPIO8 */
        ,
    _11_flexpwm3_PWMB1 = 11 /*!< Select mux mode: ALT11 mux port:
                               FLEXPWM3_PWM1_B of instance: FLEXPWM3 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_0_semc_DATA19:
        result = "_0_semc_DATA19";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_1_usdhc2_VSELECT:
        result = "_1_usdhc2_VSELECT";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::
        _3_video_mux_CSI_DATA22:
        result = "_3_video_mux_CSI_DATA22";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_4_flexspi2_B_DATA3:
        result = "_4_flexspi2_B_DATA3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_5_gpio_mux2_IO13:
        result = "_5_gpio_mux2_IO13";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_6_XBAR1_INOUT23:
        result = "_6_XBAR1_INOUT23";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_7_ENET_1G_TX_DATA3:
        result = "_7_ENET_1G_TX_DATA3";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_8_lpspi1_SDI:
        result = "_8_lpspi1_SDI";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_10_gpio8_IO13:
        result = "_10_gpio8_IO13";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_11_flexpwm3_PWMB1:
        result = "_11_flexpwm3_PWMB1";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_DATA19", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_0_semc_DATA19;
    }
    else if ((result = !strncmp(data, "_1_usdhc2_VSELECT", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_1_usdhc2_VSELECT;
    }
    else if ((result = !strncmp(data, "_3_video_mux_CSI_DATA22", 23)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::
            _3_video_mux_CSI_DATA22;
    }
    else if ((result = !strncmp(data, "_4_flexspi2_B_DATA3", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_4_flexspi2_B_DATA3;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO13", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_5_gpio_mux2_IO13;
    }
    else if ((result = !strncmp(data, "_6_XBAR1_INOUT23", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_6_XBAR1_INOUT23;
    }
    else if ((result = !strncmp(data, "_7_ENET_1G_TX_DATA3", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_7_ENET_1G_TX_DATA3;
    }
    else if ((result = !strncmp(data, "_8_lpspi1_SDI", 13)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_8_lpspi1_SDI;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO13", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_10_gpio8_IO13;
    }
    else if ((result = !strncmp(data, "_11_flexpwm3_PWMB1", 18)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_03_MUX_MODE::_11_flexpwm3_PWMB1;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4