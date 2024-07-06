/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE : uint8_t
{
    _0_semc_DATA26 /*!< Select mux mode: ALT0 mux port: SEMC_DATA26 of
                      instance: SEMC */
        ,
    _1_spdif_IN =
        1 /*!< Select mux mode: ALT1 mux port: SPDIF_IN of instance: SPDIF */,
    _2_ENET_1G_TX_DATA0 = 2 /*!< Select mux mode: ALT2 mux port:
                               ENET_1G_TX_DATA00 of instance: ENET_1G */
        ,
    _3_sai3_RX_SYNC = 3 /*!< Select mux mode: ALT3 mux port: SAI3_RX_SYNC of
                           instance: SAI3 */
        ,
    _4_flexspi2_A_SS0_B = 4 /*!< Select mux mode: ALT4 mux port:
                               FLEXSPI2_A_SS0_B of instance: FLEXSPI2 */
        ,
    _5_gpio_mux2_IO21 = 5 /*!< Select mux mode: ALT5 mux port: GPIO_MUX2_IO21
                             of instance: GPIO_MUX2 */
        ,
    _6_XBAR1_INOUT31 = 6 /*!< Select mux mode: ALT6 mux port: XBAR1_INOUT31 of
                            instance: XBAR1 */
        ,
    _8_EMVSIM1_TRXD = 8 /*!< Select mux mode: ALT8 mux port: EMVSIM1_IO of
                           instance: EMVSIM1 */
        ,
    _9_qtimer1_TIMER2 =
        9 /*!< Select mux mode: ALT9 mux port: TMR1_TIMER2 of instance: TMR1 */
        ,
    _10_gpio8_IO21 = 10 /*!< Select mux mode: ALT10 mux port: GPIO8_IO21 of
                           instance: GPIO8 */
};
static_assert(sizeof(IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE) == 1);

/**
 * Converts IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(
    IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE instance)
{
    const char *result =
        "UNKNOWN IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE";

    switch (instance)
    {
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_0_semc_DATA26:
        result = "_0_semc_DATA26";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_1_spdif_IN:
        result = "_1_spdif_IN";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_2_ENET_1G_TX_DATA0:
        result = "_2_ENET_1G_TX_DATA0";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_3_sai3_RX_SYNC:
        result = "_3_sai3_RX_SYNC";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_4_flexspi2_A_SS0_B:
        result = "_4_flexspi2_A_SS0_B";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_5_gpio_mux2_IO21:
        result = "_5_gpio_mux2_IO21";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_6_XBAR1_INOUT31:
        result = "_6_XBAR1_INOUT31";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_8_EMVSIM1_TRXD:
        result = "_8_EMVSIM1_TRXD";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_9_qtimer1_TIMER2:
        result = "_9_qtimer1_TIMER2";
        break;
    case IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_10_gpio8_IO21:
        result = "_10_gpio8_IO21";
        break;
    }

    return result;
}

/**
 * Converts a C string to IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE &output)
{
    bool result = false;

    if ((result = !strncmp(data, "_0_semc_DATA26", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_0_semc_DATA26;
    }
    else if ((result = !strncmp(data, "_1_spdif_IN", 11)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_1_spdif_IN;
    }
    else if ((result = !strncmp(data, "_2_ENET_1G_TX_DATA0", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_2_ENET_1G_TX_DATA0;
    }
    else if ((result = !strncmp(data, "_3_sai3_RX_SYNC", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_3_sai3_RX_SYNC;
    }
    else if ((result = !strncmp(data, "_4_flexspi2_A_SS0_B", 19)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_4_flexspi2_A_SS0_B;
    }
    else if ((result = !strncmp(data, "_5_gpio_mux2_IO21", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_5_gpio_mux2_IO21;
    }
    else if ((result = !strncmp(data, "_6_XBAR1_INOUT31", 16)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_6_XBAR1_INOUT31;
    }
    else if ((result = !strncmp(data, "_8_EMVSIM1_TRXD", 15)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_8_EMVSIM1_TRXD;
    }
    else if ((result = !strncmp(data, "_9_qtimer1_TIMER2", 17)))
    {
        output =
            IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_9_qtimer1_TIMER2;
    }
    else if ((result = !strncmp(data, "_10_gpio8_IO21", 14)))
    {
        output = IOMUXC_SW_MUX_CTL_PAD_GPIO_EMC_B2_11_MUX_MODE::_10_gpio8_IO21;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4