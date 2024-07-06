/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include <cstdint>
#include <cstring>

namespace MIMXRT1176::CM4
{

enum class OCOTP_READ_CTRL_READ_FUSE_CNTR : uint8_t
{
    ONE_WORD /*!< 1 word */,
    TWO_WORDS = 1 /*!< 2 words */,
    THREE_WORDS = 2 /*!< 3 words */,
    FOUR_WORDS = 3 /*!< 4 words */
};
static_assert(sizeof(OCOTP_READ_CTRL_READ_FUSE_CNTR) == 1);

/**
 * Converts OCOTP_READ_CTRL_READ_FUSE_CNTR to a C string.
 *
 * \param[in] instance Value to convert.
 * \return             A C string representation of the value.
 */
inline const char *to_string(OCOTP_READ_CTRL_READ_FUSE_CNTR instance)
{
    const char *result = "UNKNOWN OCOTP_READ_CTRL_READ_FUSE_CNTR";

    switch (instance)
    {
    case OCOTP_READ_CTRL_READ_FUSE_CNTR::ONE_WORD:
        result = "ONE_WORD";
        break;
    case OCOTP_READ_CTRL_READ_FUSE_CNTR::TWO_WORDS:
        result = "TWO_WORDS";
        break;
    case OCOTP_READ_CTRL_READ_FUSE_CNTR::THREE_WORDS:
        result = "THREE_WORDS";
        break;
    case OCOTP_READ_CTRL_READ_FUSE_CNTR::FOUR_WORDS:
        result = "FOUR_WORDS";
        break;
    }

    return result;
}

/**
 * Converts a C string to OCOTP_READ_CTRL_READ_FUSE_CNTR.
 *
 * \param[in]  data   A C string to convert.
 * \param[out] output The enumeration element to write.
 * \return            Whether or not the output was written.
 */
inline bool from_string(const char *data,
                        OCOTP_READ_CTRL_READ_FUSE_CNTR &output)
{
    bool result = false;

    if ((result = !strncmp(data, "ONE_WORD", 8)))
    {
        output = OCOTP_READ_CTRL_READ_FUSE_CNTR::ONE_WORD;
    }
    else if ((result = !strncmp(data, "TWO_WORDS", 9)))
    {
        output = OCOTP_READ_CTRL_READ_FUSE_CNTR::TWO_WORDS;
    }
    else if ((result = !strncmp(data, "THREE_WORDS", 11)))
    {
        output = OCOTP_READ_CTRL_READ_FUSE_CNTR::THREE_WORDS;
    }
    else if ((result = !strncmp(data, "FOUR_WORDS", 10)))
    {
        output = OCOTP_READ_CTRL_READ_FUSE_CNTR::FOUR_WORDS;
    }

    return result;
}

}; // namespace MIMXRT1176::CM4
