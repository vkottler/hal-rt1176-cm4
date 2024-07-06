/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/DSI_HOST_DPI_INTFC_INTERFACE_COLOR_CODING_RGB_CONFIG.h"
#include "../enums/DSI_HOST_DPI_INTFC_PIXEL_FORMAT_PIXEL_FORMAT.h"
#include "../enums/DSI_HOST_DPI_INTFC_VIDEO_MODE_VIDEO_MODE.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * DSI Host DPI Interface
 */
struct [[gnu::packed]] dsi_host_dpi_intfc
{
    /* Constant attributes. */
    static constexpr std::size_t size =
        64; /*!< dsi_host_dpi_intfc's size in bytes. */

    /* Fields. */
    uint32_t PIXEL_PAYLOAD_SIZE;    /*!< (read-write) PEXEL_PAYLOAD_SIZE */
    uint32_t PIXEL_FIFO_SEND_LEVEL; /*!< (read-write) PIXEL_FIFO_SEND_LEVEL */
    uint32_t
        INTERFACE_COLOR_CODING; /*!< (read-write) INTERFACE_COLOR_CODING */
    uint32_t PIXEL_FORMAT;      /*!< (read-write) PIXEL_FORMAT */
    uint32_t VSYNC_POLARITY;    /*!< (read-write) VSYNC_POLARITY */
    uint32_t HSYNC_POLARITY;    /*!< (read-write) HSYNC_POLARITY */
    uint32_t VIDEO_MODE;        /*!< (read-write) VIDEO_MODE */
    uint32_t HFP;               /*!< (read-write) HFP */
    uint32_t HBP;               /*!< (read-write) HBP */
    uint32_t HSA;               /*!< (read-write) HSA */
    uint32_t ENABLE_MULT_PKTS;  /*!< (read-write) ENABLE_MULT_PKTS */
    uint32_t VBP;               /*!< (read-write) VBP */
    uint32_t VFP;               /*!< (read-write) VFP */
    uint32_t BLLP_MODE;         /*!< (read-write) BLLP_MODE */
    uint32_t USE_NULL_PKT_BLLP; /*!< (read-write) USE_NULL_PKT_BLLP */
    uint32_t VACTIVE;           /*!< (read-write) VACTIVE */

    /* Methods. */

    /**
     * Get PIXEL_PAYLOAD_SIZE's PAYLOAD_SIZE field.
     *
     * Maximum number of pixels that should be sent as one DSI packet.
     * Recommended to be evenly divisible by the line size (in pixels).
     */
    inline uint16_t get_PIXEL_PAYLOAD_SIZE_PAYLOAD_SIZE() volatile
    {
        return (PIXEL_PAYLOAD_SIZE >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set PIXEL_PAYLOAD_SIZE's PAYLOAD_SIZE field.
     *
     * Maximum number of pixels that should be sent as one DSI packet.
     * Recommended to be evenly divisible by the line size (in pixels).
     */
    inline void set_PIXEL_PAYLOAD_SIZE_PAYLOAD_SIZE(uint16_t value) volatile
    {
        uint32_t curr = PIXEL_PAYLOAD_SIZE;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        PIXEL_PAYLOAD_SIZE = curr;
    }

    /**
     * Get PIXEL_FIFO_SEND_LEVEL's FIFO_SEND_LEVEL field.
     *
     * In order to optimize DSI utility, the DPI bridge buffers a certain
     * number of DPI pixels before initiating a DSI packet. This configuration
     * port controls the level at which the DPI Host bridge begins sending
     * pixels.
     */
    inline uint16_t get_PIXEL_FIFO_SEND_LEVEL_FIFO_SEND_LEVEL() volatile
    {
        return (PIXEL_FIFO_SEND_LEVEL >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set PIXEL_FIFO_SEND_LEVEL's FIFO_SEND_LEVEL field.
     *
     * In order to optimize DSI utility, the DPI bridge buffers a certain
     * number of DPI pixels before initiating a DSI packet. This configuration
     * port controls the level at which the DPI Host bridge begins sending
     * pixels.
     */
    inline void set_PIXEL_FIFO_SEND_LEVEL_FIFO_SEND_LEVEL(
        uint16_t value) volatile
    {
        uint32_t curr = PIXEL_FIFO_SEND_LEVEL;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        PIXEL_FIFO_SEND_LEVEL = curr;
    }

    /**
     * Get INTERFACE_COLOR_CODING's RGB_CONFIG field.
     *
     * Sets the distribution of RGB bits within the 24-bit d bus, as specified
     * by the DPI specification.
     */
    inline DSI_HOST_DPI_INTFC_INTERFACE_COLOR_CODING_RGB_CONFIG
    get_INTERFACE_COLOR_CODING_RGB_CONFIG() volatile
    {
        return DSI_HOST_DPI_INTFC_INTERFACE_COLOR_CODING_RGB_CONFIG(
            (INTERFACE_COLOR_CODING >> 0u) & 0b111u);
    }

    /**
     * Set INTERFACE_COLOR_CODING's RGB_CONFIG field.
     *
     * Sets the distribution of RGB bits within the 24-bit d bus, as specified
     * by the DPI specification.
     */
    inline void set_INTERFACE_COLOR_CODING_RGB_CONFIG(
        DSI_HOST_DPI_INTFC_INTERFACE_COLOR_CODING_RGB_CONFIG value) volatile
    {
        uint32_t curr = INTERFACE_COLOR_CODING;

        curr &= ~(0b111u << 0u);
        curr |= (std::to_underlying(value) & 0b111u) << 0u;

        INTERFACE_COLOR_CODING = curr;
    }

    /**
     * Get PIXEL_FORMAT's PIXEL_FORMAT field.
     *
     * Sets the DSI packet type of the pixels
     */
    inline DSI_HOST_DPI_INTFC_PIXEL_FORMAT_PIXEL_FORMAT
    get_PIXEL_FORMAT_PIXEL_FORMAT() volatile
    {
        return DSI_HOST_DPI_INTFC_PIXEL_FORMAT_PIXEL_FORMAT(
            (PIXEL_FORMAT >> 0u) & 0b11u);
    }

    /**
     * Set PIXEL_FORMAT's PIXEL_FORMAT field.
     *
     * Sets the DSI packet type of the pixels
     */
    inline void set_PIXEL_FORMAT_PIXEL_FORMAT(
        DSI_HOST_DPI_INTFC_PIXEL_FORMAT_PIXEL_FORMAT value) volatile
    {
        uint32_t curr = PIXEL_FORMAT;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        PIXEL_FORMAT = curr;
    }

    /**
     * Get VSYNC_POLARITY's VSYNC_POLARITY bit.
     *
     * Sets polarity of dpi_vsync_input
     */
    inline bool get_VSYNC_POLARITY_VSYNC_POLARITY() volatile
    {
        return VSYNC_POLARITY & (1u << 0u);
    }

    /**
     * Set VSYNC_POLARITY's VSYNC_POLARITY bit.
     *
     * Sets polarity of dpi_vsync_input
     */
    inline void set_VSYNC_POLARITY_VSYNC_POLARITY() volatile
    {
        VSYNC_POLARITY |= 1u << 0u;
    }

    /**
     * Clear VSYNC_POLARITY's VSYNC_POLARITY bit.
     *
     * Sets polarity of dpi_vsync_input
     */
    inline void clear_VSYNC_POLARITY_VSYNC_POLARITY() volatile
    {
        VSYNC_POLARITY &= ~(1u << 0u);
    }

    /**
     * Toggle VSYNC_POLARITY's VSYNC_POLARITY bit.
     *
     * Sets polarity of dpi_vsync_input
     */
    inline void toggle_VSYNC_POLARITY_VSYNC_POLARITY() volatile
    {
        VSYNC_POLARITY ^= 1u << 0u;
    }

    /**
     * Get HSYNC_POLARITY's HSYNC_POLARITY bit.
     *
     * Sets polarity of dpi_hsync_input
     */
    inline bool get_HSYNC_POLARITY_HSYNC_POLARITY() volatile
    {
        return HSYNC_POLARITY & (1u << 0u);
    }

    /**
     * Set HSYNC_POLARITY's HSYNC_POLARITY bit.
     *
     * Sets polarity of dpi_hsync_input
     */
    inline void set_HSYNC_POLARITY_HSYNC_POLARITY() volatile
    {
        HSYNC_POLARITY |= 1u << 0u;
    }

    /**
     * Clear HSYNC_POLARITY's HSYNC_POLARITY bit.
     *
     * Sets polarity of dpi_hsync_input
     */
    inline void clear_HSYNC_POLARITY_HSYNC_POLARITY() volatile
    {
        HSYNC_POLARITY &= ~(1u << 0u);
    }

    /**
     * Toggle HSYNC_POLARITY's HSYNC_POLARITY bit.
     *
     * Sets polarity of dpi_hsync_input
     */
    inline void toggle_HSYNC_POLARITY_HSYNC_POLARITY() volatile
    {
        HSYNC_POLARITY ^= 1u << 0u;
    }

    /**
     * Get VIDEO_MODE's VIDEO_MODE field.
     *
     * Select DSI video mode that the host DPI module should generate packets
     * for.
     */
    inline DSI_HOST_DPI_INTFC_VIDEO_MODE_VIDEO_MODE
    get_VIDEO_MODE_VIDEO_MODE() volatile
    {
        return DSI_HOST_DPI_INTFC_VIDEO_MODE_VIDEO_MODE((VIDEO_MODE >> 0u) &
                                                        0b11u);
    }

    /**
     * Set VIDEO_MODE's VIDEO_MODE field.
     *
     * Select DSI video mode that the host DPI module should generate packets
     * for.
     */
    inline void set_VIDEO_MODE_VIDEO_MODE(
        DSI_HOST_DPI_INTFC_VIDEO_MODE_VIDEO_MODE value) volatile
    {
        uint32_t curr = VIDEO_MODE;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        VIDEO_MODE = curr;
    }

    /**
     * Get HFP's PAYLOAD_SIZE field.
     *
     * Sets the DSI packet payload size, in bytes, of the horizontal front
     * porch blanking packet.
     */
    inline uint16_t get_HFP_PAYLOAD_SIZE() volatile
    {
        return (HFP >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set HFP's PAYLOAD_SIZE field.
     *
     * Sets the DSI packet payload size, in bytes, of the horizontal front
     * porch blanking packet.
     */
    inline void set_HFP_PAYLOAD_SIZE(uint16_t value) volatile
    {
        uint32_t curr = HFP;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        HFP = curr;
    }

    /**
     * Get HBP's PAYLOAD_SIZE field.
     *
     * Sets the DSI packet payload size, in bytes, of the horizontal back porch
     * blanking packet.
     */
    inline uint16_t get_HBP_PAYLOAD_SIZE() volatile
    {
        return (HBP >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set HBP's PAYLOAD_SIZE field.
     *
     * Sets the DSI packet payload size, in bytes, of the horizontal back porch
     * blanking packet.
     */
    inline void set_HBP_PAYLOAD_SIZE(uint16_t value) volatile
    {
        uint32_t curr = HBP;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        HBP = curr;
    }

    /**
     * Get HSA's PAYLOAD_SIZE field.
     *
     * Sets the DSI packet payload size, in bytes, of the horizontal sync width
     * filler blanking packet.
     */
    inline uint16_t get_HSA_PAYLOAD_SIZE() volatile
    {
        return (HSA >> 0u) & 0b1111111111111111u;
    }

    /**
     * Set HSA's PAYLOAD_SIZE field.
     *
     * Sets the DSI packet payload size, in bytes, of the horizontal sync width
     * filler blanking packet.
     */
    inline void set_HSA_PAYLOAD_SIZE(uint16_t value) volatile
    {
        uint32_t curr = HSA;

        curr &= ~(0b1111111111111111u << 0u);
        curr |= (value & 0b1111111111111111u) << 0u;

        HSA = curr;
    }

    /**
     * Get ENABLE_MULT_PKTS's ENABLE_MULT_PKTS bit.
     *
     * Enable Multiple packets per video line. When enabled,
     * PIXEL_PAYLOAD_SIZE[PAYLOAD_SIZE] must be set to exactly half the size of
     * the video line
     */
    inline bool get_ENABLE_MULT_PKTS_ENABLE_MULT_PKTS() volatile
    {
        return ENABLE_MULT_PKTS & (1u << 0u);
    }

    /**
     * Set ENABLE_MULT_PKTS's ENABLE_MULT_PKTS bit.
     *
     * Enable Multiple packets per video line. When enabled,
     * PIXEL_PAYLOAD_SIZE[PAYLOAD_SIZE] must be set to exactly half the size of
     * the video line
     */
    inline void set_ENABLE_MULT_PKTS_ENABLE_MULT_PKTS() volatile
    {
        ENABLE_MULT_PKTS |= 1u << 0u;
    }

    /**
     * Clear ENABLE_MULT_PKTS's ENABLE_MULT_PKTS bit.
     *
     * Enable Multiple packets per video line. When enabled,
     * PIXEL_PAYLOAD_SIZE[PAYLOAD_SIZE] must be set to exactly half the size of
     * the video line
     */
    inline void clear_ENABLE_MULT_PKTS_ENABLE_MULT_PKTS() volatile
    {
        ENABLE_MULT_PKTS &= ~(1u << 0u);
    }

    /**
     * Toggle ENABLE_MULT_PKTS's ENABLE_MULT_PKTS bit.
     *
     * Enable Multiple packets per video line. When enabled,
     * PIXEL_PAYLOAD_SIZE[PAYLOAD_SIZE] must be set to exactly half the size of
     * the video line
     */
    inline void toggle_ENABLE_MULT_PKTS_ENABLE_MULT_PKTS() volatile
    {
        ENABLE_MULT_PKTS ^= 1u << 0u;
    }

    /**
     * Get VBP's NUM_LINES field.
     *
     * Sets the number of lines in the vertical back porch.
     */
    inline uint8_t get_VBP_NUM_LINES() volatile
    {
        return (VBP >> 0u) & 0b11111111u;
    }

    /**
     * Set VBP's NUM_LINES field.
     *
     * Sets the number of lines in the vertical back porch.
     */
    inline void set_VBP_NUM_LINES(uint8_t value) volatile
    {
        uint32_t curr = VBP;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        VBP = curr;
    }

    /**
     * Get VFP's NUM_LINES field.
     *
     * Sets the number of lines in the vertical front porch.
     */
    inline uint8_t get_VFP_NUM_LINES() volatile
    {
        return (VFP >> 0u) & 0b11111111u;
    }

    /**
     * Set VFP's NUM_LINES field.
     *
     * Sets the number of lines in the vertical front porch.
     */
    inline void set_VFP_NUM_LINES(uint8_t value) volatile
    {
        uint32_t curr = VFP;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        VFP = curr;
    }

    /**
     * Get BLLP_MODE's LP bit.
     *
     * Optimize bllp periods to Low Power mode when possible
     */
    inline bool get_BLLP_MODE_LP() volatile
    {
        return BLLP_MODE & (1u << 0u);
    }

    /**
     * Set BLLP_MODE's LP bit.
     *
     * Optimize bllp periods to Low Power mode when possible
     */
    inline void set_BLLP_MODE_LP() volatile
    {
        BLLP_MODE |= 1u << 0u;
    }

    /**
     * Clear BLLP_MODE's LP bit.
     *
     * Optimize bllp periods to Low Power mode when possible
     */
    inline void clear_BLLP_MODE_LP() volatile
    {
        BLLP_MODE &= ~(1u << 0u);
    }

    /**
     * Toggle BLLP_MODE's LP bit.
     *
     * Optimize bllp periods to Low Power mode when possible
     */
    inline void toggle_BLLP_MODE_LP() volatile
    {
        BLLP_MODE ^= 1u << 0u;
    }

    /**
     * Get USE_NULL_PKT_BLLP's NULL bit.
     *
     * Selects type of blanking packet to be sent during bllp
     */
    inline bool get_USE_NULL_PKT_BLLP_NULL() volatile
    {
        return USE_NULL_PKT_BLLP & (1u << 0u);
    }

    /**
     * Set USE_NULL_PKT_BLLP's NULL bit.
     *
     * Selects type of blanking packet to be sent during bllp
     */
    inline void set_USE_NULL_PKT_BLLP_NULL() volatile
    {
        USE_NULL_PKT_BLLP |= 1u << 0u;
    }

    /**
     * Clear USE_NULL_PKT_BLLP's NULL bit.
     *
     * Selects type of blanking packet to be sent during bllp
     */
    inline void clear_USE_NULL_PKT_BLLP_NULL() volatile
    {
        USE_NULL_PKT_BLLP &= ~(1u << 0u);
    }

    /**
     * Toggle USE_NULL_PKT_BLLP's NULL bit.
     *
     * Selects type of blanking packet to be sent during bllp
     */
    inline void toggle_USE_NULL_PKT_BLLP_NULL() volatile
    {
        USE_NULL_PKT_BLLP ^= 1u << 0u;
    }

    /**
     * Get VACTIVE's NUM_LINES field.
     *
     * Sets the number of lines in the vertical active aread.
     */
    inline uint16_t get_VACTIVE_NUM_LINES() volatile
    {
        return (VACTIVE >> 0u) & 0b11111111111111u;
    }

    /**
     * Set VACTIVE's NUM_LINES field.
     *
     * Sets the number of lines in the vertical active aread.
     */
    inline void set_VACTIVE_NUM_LINES(uint16_t value) volatile
    {
        uint32_t curr = VACTIVE;

        curr &= ~(0b11111111111111u << 0u);
        curr |= (value & 0b11111111111111u) << 0u;

        VACTIVE = curr;
    }
};

static_assert(sizeof(dsi_host_dpi_intfc) == dsi_host_dpi_intfc::size);

static volatile dsi_host_dpi_intfc *const DSI_HOST_DPI_INTFC =
    reinterpret_cast<dsi_host_dpi_intfc *>(0x4080C200);

}; // namespace MIMXRT1176::CM4