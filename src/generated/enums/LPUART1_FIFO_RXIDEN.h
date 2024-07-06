/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class LPUART1_FIFO_RXIDEN : uint8_t
{
    DISABLED /*!< Disable RDRF assertion due to partially filled FIFO when
                receiver is idle. */
        ,
    IDLE_1 = 1 /*!< Enable RDRF assertion due to partially filled FIFO when
                  receiver is idle for 1 character. */
        ,
    IDLE_2 = 2 /*!< Enable RDRF assertion due to partially filled FIFO when
                  receiver is idle for 2 characters. */
        ,
    IDLE_4 = 3 /*!< Enable RDRF assertion due to partially filled FIFO when
                  receiver is idle for 4 characters. */
        ,
    IDLE_8 = 4 /*!< Enable RDRF assertion due to partially filled FIFO when
                  receiver is idle for 8 characters. */
        ,
    IDLE_16 = 5 /*!< Enable RDRF assertion due to partially filled FIFO when
                   receiver is idle for 16 characters. */
        ,
    IDLE_32 = 6 /*!< Enable RDRF assertion due to partially filled FIFO when
                   receiver is idle for 32 characters. */
        ,
    IDLE_64 = 7 /*!< Enable RDRF assertion due to partially filled FIFO when
                   receiver is idle for 64 characters. */
};
static_assert(sizeof(LPUART1_FIFO_RXIDEN) == 1);

/**
 * Converts LPUART1_FIFO_RXIDEN to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(LPUART1_FIFO_RXIDEN instance)
{
    const char *result = "UNKNOWN LPUART1_FIFO_RXIDEN";

    switch (instance)
    {
    case LPUART1_FIFO_RXIDEN::DISABLED:
        result = "DISABLED";
        break;
    case LPUART1_FIFO_RXIDEN::IDLE_1:
        result = "IDLE_1";
        break;
    case LPUART1_FIFO_RXIDEN::IDLE_2:
        result = "IDLE_2";
        break;
    case LPUART1_FIFO_RXIDEN::IDLE_4:
        result = "IDLE_4";
        break;
    case LPUART1_FIFO_RXIDEN::IDLE_8:
        result = "IDLE_8";
        break;
    case LPUART1_FIFO_RXIDEN::IDLE_16:
        result = "IDLE_16";
        break;
    case LPUART1_FIFO_RXIDEN::IDLE_32:
        result = "IDLE_32";
        break;
    case LPUART1_FIFO_RXIDEN::IDLE_64:
        result = "IDLE_64";
        break;
    }

    return result;
}

/**
 * Converts a C string to LPUART1_FIFO_RXIDEN.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data, LPUART1_FIFO_RXIDEN &output)
{
    bool result = false;

    if ((result = !strncmp(data, "DISABLED", 8)))
    {
        output = LPUART1_FIFO_RXIDEN::DISABLED;
    }
    else if ((result = !strncmp(data, "IDLE_1", 6)))
    {
        output = LPUART1_FIFO_RXIDEN::IDLE_1;
    }
    else if ((result = !strncmp(data, "IDLE_2", 6)))
    {
        output = LPUART1_FIFO_RXIDEN::IDLE_2;
    }
    else if ((result = !strncmp(data, "IDLE_4", 6)))
    {
        output = LPUART1_FIFO_RXIDEN::IDLE_4;
    }
    else if ((result = !strncmp(data, "IDLE_8", 6)))
    {
        output = LPUART1_FIFO_RXIDEN::IDLE_8;
    }
    else if ((result = !strncmp(data, "IDLE_16", 7)))
    {
        output = LPUART1_FIFO_RXIDEN::IDLE_16;
    }
    else if ((result = !strncmp(data, "IDLE_32", 7)))
    {
        output = LPUART1_FIFO_RXIDEN::IDLE_32;
    }
    else if ((result = !strncmp(data, "IDLE_64", 7)))
    {
        output = LPUART1_FIFO_RXIDEN::IDLE_64;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
