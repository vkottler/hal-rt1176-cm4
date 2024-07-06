/**
 * \file
 * \brief Generated by ifgen (3.3.0).
 */
#pragma once

#include "../enums/DSI_HOST_CFG_NUM_LANES_NUM_LANES.h"
#include "../ifgen/common.h"

namespace MIMXRT1176::CM4
{

/**
 * DSI HOST
 */
struct [[gnu::packed]] dsi_host
{
    /* Constant attributes. */
    static constexpr std::size_t size = 52; /*!< dsi_host's size in bytes. */

    /* Fields. */
    uint32_t CFG_NUM_LANES;         /*!< (read-write) CFG_NUM_LANES */
    uint32_t CFG_NONCONTINUOUS_CLK; /*!< (read-write) CFG_NONCONTINUOUS_CLK */
    uint32_t CFG_T_PRE;             /*!< (read-write) CFG_T_PRE */
    uint32_t CFG_T_POST;            /*!< (read-write) CFG_T_POST */
    uint32_t CFG_TX_GAP;            /*!< (read-write) CFG_TX_GAP */
    uint32_t CFG_AUTOINSERT_EOTP;   /*!< (read-write) CFG_AUTOINSERT_ETOP */
    uint32_t CFG_EXTRA_CMDS_AFTER_EOTP; /*!< (read-write)
                                           CFG_EXTRA_CMDS_AFTER_ETOP */
    uint32_t CFG_HTX_TO_COUNT;          /*!< (read-write) CFG_HTX_TO_COUNT */
    uint32_t CFG_LRX_H_TO_COUNT;        /*!< (read-write) CFG_LRX_H_TO_COUNT */
    uint32_t CFG_BTA_H_TO_COUNT;        /*!< (read-write) CFG_BTA_H_TO_COUNT */
    uint32_t CFG_TWAKEUP;               /*!< (read-write) CFG_TWAKEUP */
    uint32_t CFG_STATUS_OUT;            /*!< (read-write) CFG_STATUS_OUT */
    uint32_t RX_ERROR_STATUS;           /*!< (read-write) RX_ERROR_STATUS */

    /* Methods. */

    /**
     * Get CFG_NUM_LANES's NUM_LANES field.
     *
     * Sets the number of active lanes that are to be used for transmitting
     * data.
     */
    inline DSI_HOST_CFG_NUM_LANES_NUM_LANES
    get_CFG_NUM_LANES_NUM_LANES() volatile
    {
        return DSI_HOST_CFG_NUM_LANES_NUM_LANES((CFG_NUM_LANES >> 0u) & 0b11u);
    }

    /**
     * Set CFG_NUM_LANES's NUM_LANES field.
     *
     * Sets the number of active lanes that are to be used for transmitting
     * data.
     */
    inline void set_CFG_NUM_LANES_NUM_LANES(
        DSI_HOST_CFG_NUM_LANES_NUM_LANES value) volatile
    {
        uint32_t curr = CFG_NUM_LANES;

        curr &= ~(0b11u << 0u);
        curr |= (std::to_underlying(value) & 0b11u) << 0u;

        CFG_NUM_LANES = curr;
    }

    /**
     * Get CFG_NONCONTINUOUS_CLK's CLK_MODE bit.
     *
     * Sets the Host Controller into non-continuous MIPI clock mode. When in
     * non-continuous clock mode, the high speed clock will transition into low
     * power mode between transmissions.
     */
    inline bool get_CFG_NONCONTINUOUS_CLK_CLK_MODE() volatile
    {
        return CFG_NONCONTINUOUS_CLK & (1u << 0u);
    }

    /**
     * Set CFG_NONCONTINUOUS_CLK's CLK_MODE bit.
     *
     * Sets the Host Controller into non-continuous MIPI clock mode. When in
     * non-continuous clock mode, the high speed clock will transition into low
     * power mode between transmissions.
     */
    inline void set_CFG_NONCONTINUOUS_CLK_CLK_MODE() volatile
    {
        CFG_NONCONTINUOUS_CLK |= 1u << 0u;
    }

    /**
     * Clear CFG_NONCONTINUOUS_CLK's CLK_MODE bit.
     *
     * Sets the Host Controller into non-continuous MIPI clock mode. When in
     * non-continuous clock mode, the high speed clock will transition into low
     * power mode between transmissions.
     */
    inline void clear_CFG_NONCONTINUOUS_CLK_CLK_MODE() volatile
    {
        CFG_NONCONTINUOUS_CLK &= ~(1u << 0u);
    }

    /**
     * Toggle CFG_NONCONTINUOUS_CLK's CLK_MODE bit.
     *
     * Sets the Host Controller into non-continuous MIPI clock mode. When in
     * non-continuous clock mode, the high speed clock will transition into low
     * power mode between transmissions.
     */
    inline void toggle_CFG_NONCONTINUOUS_CLK_CLK_MODE() volatile
    {
        CFG_NONCONTINUOUS_CLK ^= 1u << 0u;
    }

    /**
     * Get CFG_T_PRE's NUM_PERIODS field.
     *
     * Sets the number of byte clock periods ('clk_byte' input) that the
     * controller will wait after enabling the clock lane for HS operation
     * before enabling the data lanes for HS operation. This setting represents
     * the TCLK-PRE DPHY timing parameter. The minimum value for this port
     * is 1.
     */
    inline uint8_t get_CFG_T_PRE_NUM_PERIODS() volatile
    {
        return (CFG_T_PRE >> 0u) & 0b11111111u;
    }

    /**
     * Set CFG_T_PRE's NUM_PERIODS field.
     *
     * Sets the number of byte clock periods ('clk_byte' input) that the
     * controller will wait after enabling the clock lane for HS operation
     * before enabling the data lanes for HS operation. This setting represents
     * the TCLK-PRE DPHY timing parameter. The minimum value for this port
     * is 1.
     */
    inline void set_CFG_T_PRE_NUM_PERIODS(uint8_t value) volatile
    {
        uint32_t curr = CFG_T_PRE;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        CFG_T_PRE = curr;
    }

    /**
     * Get CFG_T_POST's NUM_PERIODS field.
     *
     * Sets the number of byte clock periods ('clk_byte' input) to wait before
     * putting the clock lane into LP mode after the data lanes have been
     * detected to be in Stop State. This setting represents the DPHY timing
     * parameters TLPX + TCLK-PREPARE + TCLK-ZERO + TCLK-PRE requirement for
     * the clock lane before the data lane is allowed to change from LP11 to
     * start a high speed transmission. The minimum value for this port is 1.
     */
    inline uint8_t get_CFG_T_POST_NUM_PERIODS() volatile
    {
        return (CFG_T_POST >> 0u) & 0b11111111u;
    }

    /**
     * Set CFG_T_POST's NUM_PERIODS field.
     *
     * Sets the number of byte clock periods ('clk_byte' input) to wait before
     * putting the clock lane into LP mode after the data lanes have been
     * detected to be in Stop State. This setting represents the DPHY timing
     * parameters TLPX + TCLK-PREPARE + TCLK-ZERO + TCLK-PRE requirement for
     * the clock lane before the data lane is allowed to change from LP11 to
     * start a high speed transmission. The minimum value for this port is 1.
     */
    inline void set_CFG_T_POST_NUM_PERIODS(uint8_t value) volatile
    {
        uint32_t curr = CFG_T_POST;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        CFG_T_POST = curr;
    }

    /**
     * Get CFG_TX_GAP's NUM_PERIODS field.
     *
     * Sets the number of byte clock periods ('clk_byte' input) that the
     * controller will wait after the clock lane has been put into LP mode
     * before enabling the clock lane for HS mode again. This setting
     * represents the THS-EXIT DPHY timing parameter. The minimum value for
     * this port is 1.
     */
    inline uint8_t get_CFG_TX_GAP_NUM_PERIODS() volatile
    {
        return (CFG_TX_GAP >> 0u) & 0b11111111u;
    }

    /**
     * Set CFG_TX_GAP's NUM_PERIODS field.
     *
     * Sets the number of byte clock periods ('clk_byte' input) that the
     * controller will wait after the clock lane has been put into LP mode
     * before enabling the clock lane for HS mode again. This setting
     * represents the THS-EXIT DPHY timing parameter. The minimum value for
     * this port is 1.
     */
    inline void set_CFG_TX_GAP_NUM_PERIODS(uint8_t value) volatile
    {
        uint32_t curr = CFG_TX_GAP;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        CFG_TX_GAP = curr;
    }

    /**
     * Get CFG_AUTOINSERT_EOTP's AUTOINSERT bit.
     *
     * Enables the Host Controller to automatically insert an EoTp short packet
     * when switching from HS to LP mode.
     */
    inline bool get_CFG_AUTOINSERT_EOTP_AUTOINSERT() volatile
    {
        return CFG_AUTOINSERT_EOTP & (1u << 0u);
    }

    /**
     * Set CFG_AUTOINSERT_EOTP's AUTOINSERT bit.
     *
     * Enables the Host Controller to automatically insert an EoTp short packet
     * when switching from HS to LP mode.
     */
    inline void set_CFG_AUTOINSERT_EOTP_AUTOINSERT() volatile
    {
        CFG_AUTOINSERT_EOTP |= 1u << 0u;
    }

    /**
     * Clear CFG_AUTOINSERT_EOTP's AUTOINSERT bit.
     *
     * Enables the Host Controller to automatically insert an EoTp short packet
     * when switching from HS to LP mode.
     */
    inline void clear_CFG_AUTOINSERT_EOTP_AUTOINSERT() volatile
    {
        CFG_AUTOINSERT_EOTP &= ~(1u << 0u);
    }

    /**
     * Toggle CFG_AUTOINSERT_EOTP's AUTOINSERT bit.
     *
     * Enables the Host Controller to automatically insert an EoTp short packet
     * when switching from HS to LP mode.
     */
    inline void toggle_CFG_AUTOINSERT_EOTP_AUTOINSERT() volatile
    {
        CFG_AUTOINSERT_EOTP ^= 1u << 0u;
    }

    /**
     * Get CFG_EXTRA_CMDS_AFTER_EOTP's EXTRA_EOTP field.
     *
     * Configures the DSI Host Controller to send extra End Of Transmission
     * Packets after the end of a packet. The value is the number of extra EOTP
     * packets sent.
     */
    inline uint8_t get_CFG_EXTRA_CMDS_AFTER_EOTP_EXTRA_EOTP() volatile
    {
        return (CFG_EXTRA_CMDS_AFTER_EOTP >> 0u) & 0b11111111u;
    }

    /**
     * Set CFG_EXTRA_CMDS_AFTER_EOTP's EXTRA_EOTP field.
     *
     * Configures the DSI Host Controller to send extra End Of Transmission
     * Packets after the end of a packet. The value is the number of extra EOTP
     * packets sent.
     */
    inline void set_CFG_EXTRA_CMDS_AFTER_EOTP_EXTRA_EOTP(
        uint8_t value) volatile
    {
        uint32_t curr = CFG_EXTRA_CMDS_AFTER_EOTP;

        curr &= ~(0b11111111u << 0u);
        curr |= (value & 0b11111111u) << 0u;

        CFG_EXTRA_CMDS_AFTER_EOTP = curr;
    }

    /**
     * Get CFG_HTX_TO_COUNT's COUNT field.
     *
     * Sets the value of the DSI Host High Speed TX timeout count in clk_byte
     * clock periods that once reached will initiate a timeout error and follow
     * the recovery procedure documented in the DSI specification.
     */
    inline uint32_t get_CFG_HTX_TO_COUNT_COUNT() volatile
    {
        return (CFG_HTX_TO_COUNT >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Set CFG_HTX_TO_COUNT's COUNT field.
     *
     * Sets the value of the DSI Host High Speed TX timeout count in clk_byte
     * clock periods that once reached will initiate a timeout error and follow
     * the recovery procedure documented in the DSI specification.
     */
    inline void set_CFG_HTX_TO_COUNT_COUNT(uint32_t value) volatile
    {
        uint32_t curr = CFG_HTX_TO_COUNT;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        CFG_HTX_TO_COUNT = curr;
    }

    /**
     * Get CFG_LRX_H_TO_COUNT's COUNT field.
     *
     * Sets the value of the DSI Host low power RX timeout count in clk_byte
     * clock periods that once reached will initiate a timeout error and follow
     * the recovery procedure documented in the DSI specification.
     */
    inline uint32_t get_CFG_LRX_H_TO_COUNT_COUNT() volatile
    {
        return (CFG_LRX_H_TO_COUNT >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Set CFG_LRX_H_TO_COUNT's COUNT field.
     *
     * Sets the value of the DSI Host low power RX timeout count in clk_byte
     * clock periods that once reached will initiate a timeout error and follow
     * the recovery procedure documented in the DSI specification.
     */
    inline void set_CFG_LRX_H_TO_COUNT_COUNT(uint32_t value) volatile
    {
        uint32_t curr = CFG_LRX_H_TO_COUNT;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        CFG_LRX_H_TO_COUNT = curr;
    }

    /**
     * Get CFG_BTA_H_TO_COUNT's COUNT field.
     *
     * Sets the value of the DSI Host Bus Turn Around (BTA) timeout in clk_byte
     * clock periods that once reached will initiate a timeout error.
     */
    inline uint32_t get_CFG_BTA_H_TO_COUNT_COUNT() volatile
    {
        return (CFG_BTA_H_TO_COUNT >> 0u) & 0b111111111111111111111111u;
    }

    /**
     * Set CFG_BTA_H_TO_COUNT's COUNT field.
     *
     * Sets the value of the DSI Host Bus Turn Around (BTA) timeout in clk_byte
     * clock periods that once reached will initiate a timeout error.
     */
    inline void set_CFG_BTA_H_TO_COUNT_COUNT(uint32_t value) volatile
    {
        uint32_t curr = CFG_BTA_H_TO_COUNT;

        curr &= ~(0b111111111111111111111111u << 0u);
        curr |= (value & 0b111111111111111111111111u) << 0u;

        CFG_BTA_H_TO_COUNT = curr;
    }

    /**
     * Get CFG_TWAKEUP's NUM_PERIODS field.
     *
     * DPHY Twakeup timing parameter. Sets the number of clk_esc clock periods
     * to keep a clock or data lane in Mark-1 state after exiting ULPS. The
     * MIPI DPHY spec requires a minimum of 1ms in Mark-1 state after leaving
     * ULPS.
     */
    inline uint32_t get_CFG_TWAKEUP_NUM_PERIODS() volatile
    {
        return (CFG_TWAKEUP >> 0u) & 0b1111111111111111111u;
    }

    /**
     * Set CFG_TWAKEUP's NUM_PERIODS field.
     *
     * DPHY Twakeup timing parameter. Sets the number of clk_esc clock periods
     * to keep a clock or data lane in Mark-1 state after exiting ULPS. The
     * MIPI DPHY spec requires a minimum of 1ms in Mark-1 state after leaving
     * ULPS.
     */
    inline void set_CFG_TWAKEUP_NUM_PERIODS(uint32_t value) volatile
    {
        uint32_t curr = CFG_TWAKEUP;

        curr &= ~(0b1111111111111111111u << 0u);
        curr |= (value & 0b1111111111111111111u) << 0u;

        CFG_TWAKEUP = curr;
    }

    /**
     * Get CFG_STATUS_OUT's STATUS field.
     *
     * Status Register
     */
    inline uint32_t get_CFG_STATUS_OUT_STATUS() volatile
    {
        return (CFG_STATUS_OUT >> 0u) & 0b11111111111111111111111111111111u;
    }

    /**
     * Get RX_ERROR_STATUS's STATUS field.
     *
     * Status Register for Host receive error detection, ECC errors, CRC errors
     * and for timeout indicators
     */
    inline uint16_t get_RX_ERROR_STATUS_STATUS() volatile
    {
        return (RX_ERROR_STATUS >> 0u) & 0b11111111111u;
    }
};

static_assert(sizeof(dsi_host) == dsi_host::size);

static volatile dsi_host *const DSI_HOST =
    reinterpret_cast<dsi_host *>(0x4080C000);

}; // namespace MIMXRT1176::CM4