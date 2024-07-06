/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LPI2C1_MCFGR1_PINCFG : uint8_t
{
    OPEN_DRAIN_2_PIN /*!< 2-pin open drain mode */,
    OUTPUT_2_PIN_ONLY = 1 /*!< 2-pin output only mode (ultra-fast mode) */,
    PUSH_PULL_2_PIN = 2 /*!< 2-pin push-pull mode */,
    PUSH_PULL_4_PIN = 3 /*!< 4-pin push-pull mode */,
    OPEN_DRAIN_2_PIN_W_LPI2C_SLAVE =
        4 /*!< 2-pin open drain mode with separate LPI2C slave */,
    OUTPUT_2_PIN_ONLY_W_LPI2C_SLAVE = 5 /*!< 2-pin output only mode (ultra-fast
                                           mode) with separate LPI2C slave */
        ,
    PUSH_PULL_2_PIN_W_LPI2C_SLAVE =
        6 /*!< 2-pin push-pull mode with separate LPI2C slave */,
    PUSH_PULL_4_PIN_W_LPI2C_SLAVE =
        7 /*!< 4-pin push-pull mode (inverted outputs) */
};
static_assert(sizeof(LPI2C1_MCFGR1_PINCFG) == 1);

/**
 * Converts LPI2C1_MCFGR1_PINCFG to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPI2C1_MCFGR1_PINCFG instance)
{
    const char *result = "UNKNOWN LPI2C1_MCFGR1_PINCFG";

    switch (instance)
    {
    case LPI2C1_MCFGR1_PINCFG::OPEN_DRAIN_2_PIN:
        result = "OPEN_DRAIN_2_PIN";
        break;
    case LPI2C1_MCFGR1_PINCFG::OUTPUT_2_PIN_ONLY:
        result = "OUTPUT_2_PIN_ONLY";
        break;
    case LPI2C1_MCFGR1_PINCFG::PUSH_PULL_2_PIN:
        result = "PUSH_PULL_2_PIN";
        break;
    case LPI2C1_MCFGR1_PINCFG::PUSH_PULL_4_PIN:
        result = "PUSH_PULL_4_PIN";
        break;
    case LPI2C1_MCFGR1_PINCFG::OPEN_DRAIN_2_PIN_W_LPI2C_SLAVE:
        result = "OPEN_DRAIN_2_PIN_W_LPI2C_SLAVE";
        break;
    case LPI2C1_MCFGR1_PINCFG::OUTPUT_2_PIN_ONLY_W_LPI2C_SLAVE:
        result = "OUTPUT_2_PIN_ONLY_W_LPI2C_SLAVE";
        break;
    case LPI2C1_MCFGR1_PINCFG::PUSH_PULL_2_PIN_W_LPI2C_SLAVE:
        result = "PUSH_PULL_2_PIN_W_LPI2C_SLAVE";
        break;
    case LPI2C1_MCFGR1_PINCFG::PUSH_PULL_4_PIN_W_LPI2C_SLAVE:
        result = "PUSH_PULL_4_PIN_W_LPI2C_SLAVE";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPI2C1_MCFGR1_PINCFG.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPI2C1_MCFGR1_PINCFG &output)
{
    bool result = false;

    if ((result = !strncmp(data, "OPEN_DRAIN_2_PIN", 16)))
    {
        output = LPI2C1_MCFGR1_PINCFG::OPEN_DRAIN_2_PIN;
    }
    else if ((result = !strncmp(data, "OUTPUT_2_PIN_ONLY", 17)))
    {
        output = LPI2C1_MCFGR1_PINCFG::OUTPUT_2_PIN_ONLY;
    }
    else if ((result = !strncmp(data, "PUSH_PULL_2_PIN", 15)))
    {
        output = LPI2C1_MCFGR1_PINCFG::PUSH_PULL_2_PIN;
    }
    else if ((result = !strncmp(data, "PUSH_PULL_4_PIN", 15)))
    {
        output = LPI2C1_MCFGR1_PINCFG::PUSH_PULL_4_PIN;
    }
    else if ((result = !strncmp(data, "OPEN_DRAIN_2_PIN_W_LPI2C_SLAVE", 30)))
    {
        output = LPI2C1_MCFGR1_PINCFG::OPEN_DRAIN_2_PIN_W_LPI2C_SLAVE;
    }
    else if ((result = !strncmp(data, "OUTPUT_2_PIN_ONLY_W_LPI2C_SLAVE", 31)))
    {
        output = LPI2C1_MCFGR1_PINCFG::OUTPUT_2_PIN_ONLY_W_LPI2C_SLAVE;
    }
    else if ((result = !strncmp(data, "PUSH_PULL_2_PIN_W_LPI2C_SLAVE", 29)))
    {
        output = LPI2C1_MCFGR1_PINCFG::PUSH_PULL_2_PIN_W_LPI2C_SLAVE;
    }
    else if ((result = !strncmp(data, "PUSH_PULL_4_PIN_W_LPI2C_SLAVE", 29)))
    {
        output = LPI2C1_MCFGR1_PINCFG::PUSH_PULL_4_PIN_W_LPI2C_SLAVE;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4