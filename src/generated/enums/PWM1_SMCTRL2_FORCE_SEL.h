/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class PWM1_SMCTRL2_FORCE_SEL : uint8_t
{
    LOCAL /*!< The local force signal, CTRL2[FORCE], from this submodule is
             used to force updates. */
        ,
    MASTER = 1 /*!< The master force signal from submodule 0 is used to force
                  updates. This setting should not be used in submodule 0 as it
                  will hold the FORCE OUTPUT signal to logic 0. */
        ,
    LOCAL_RELOAD =
        2 /*!< The local reload signal from this submodule is used to force
             updates without regard to the state of LDOK. */
        ,
    MASTER_RELOAD =
        3 /*!< The master reload signal from submodule0 is used to force
             updates if LDOK is set. This setting should not be used in
             submodule0 as it will hold the FORCE OUTPUT signal to logic 0. */
        ,
    LOCAL_SYNC = 4 /*!< The local sync signal from this submodule is used to
                      force updates. */
        ,
    MASTER_SYNC =
        5 /*!< The master sync signal from submodule0 is used to force updates.
             This setting should not be used in submodule0 as it will hold the
             FORCE OUTPUT signal to logic 0. */
        ,
    EXT_FORCE = 6 /*!< The external force signal, EXT_FORCE, from outside the
                     PWM module causes updates. */
        ,
    EXT_SYNC = 7 /*!< The external sync signal, EXT_SYNC, from outside the PWM
                    module causes updates. */
};
static_assert(sizeof(PWM1_SMCTRL2_FORCE_SEL) == 1);

/**
 * Converts PWM1_SMCTRL2_FORCE_SEL to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(PWM1_SMCTRL2_FORCE_SEL instance)
{
    const char *result = "UNKNOWN PWM1_SMCTRL2_FORCE_SEL";

    switch (instance)
    {
    case PWM1_SMCTRL2_FORCE_SEL::LOCAL:
        result = "LOCAL";
        break;
    case PWM1_SMCTRL2_FORCE_SEL::MASTER:
        result = "MASTER";
        break;
    case PWM1_SMCTRL2_FORCE_SEL::LOCAL_RELOAD:
        result = "LOCAL_RELOAD";
        break;
    case PWM1_SMCTRL2_FORCE_SEL::MASTER_RELOAD:
        result = "MASTER_RELOAD";
        break;
    case PWM1_SMCTRL2_FORCE_SEL::LOCAL_SYNC:
        result = "LOCAL_SYNC";
        break;
    case PWM1_SMCTRL2_FORCE_SEL::MASTER_SYNC:
        result = "MASTER_SYNC";
        break;
    case PWM1_SMCTRL2_FORCE_SEL::EXT_FORCE:
        result = "EXT_FORCE";
        break;
    case PWM1_SMCTRL2_FORCE_SEL::EXT_SYNC:
        result = "EXT_SYNC";
        break;
    }

    return result;
}

/**
 * Converts a C string to PWM1_SMCTRL2_FORCE_SEL.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, PWM1_SMCTRL2_FORCE_SEL &output)
{
    bool result = false;

    if ((result = !strncmp(data, "LOCAL", 5)))
    {
        output = PWM1_SMCTRL2_FORCE_SEL::LOCAL;
    }
    else if ((result = !strncmp(data, "MASTER", 6)))
    {
        output = PWM1_SMCTRL2_FORCE_SEL::MASTER;
    }
    else if ((result = !strncmp(data, "LOCAL_RELOAD", 12)))
    {
        output = PWM1_SMCTRL2_FORCE_SEL::LOCAL_RELOAD;
    }
    else if ((result = !strncmp(data, "MASTER_RELOAD", 13)))
    {
        output = PWM1_SMCTRL2_FORCE_SEL::MASTER_RELOAD;
    }
    else if ((result = !strncmp(data, "LOCAL_SYNC", 10)))
    {
        output = PWM1_SMCTRL2_FORCE_SEL::LOCAL_SYNC;
    }
    else if ((result = !strncmp(data, "MASTER_SYNC", 11)))
    {
        output = PWM1_SMCTRL2_FORCE_SEL::MASTER_SYNC;
    }
    else if ((result = !strncmp(data, "EXT_FORCE", 9)))
    {
        output = PWM1_SMCTRL2_FORCE_SEL::EXT_FORCE;
    }
    else if ((result = !strncmp(data, "EXT_SYNC", 8)))
    {
        output = PWM1_SMCTRL2_FORCE_SEL::EXT_SYNC;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
