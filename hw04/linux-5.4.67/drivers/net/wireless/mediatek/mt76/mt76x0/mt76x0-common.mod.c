#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5bd84fd5, "mt76x02_rates" },
	{ 0xd223bed3, "mt76_get_min_avg_rssi" },
	{ 0x35d2834d, "mt76x02_limit_rate_power" },
	{ 0x1b1446b4, "mt76x02_phy_set_txdac" },
	{ 0xd5def79d, "__mt76_poll" },
	{ 0xbc2234e0, "mt76x02_mac_wcid_setup" },
	{ 0xd4023ec, "mt76x02_get_max_rate_power" },
	{ 0x35b77095, "mt76x02_phy_set_txpower" },
	{ 0xae9dd6c6, "mt76x02_mcu_function_select" },
	{ 0x9307ab1, "mt76x02_mcu_calibrate" },
	{ 0xd39cdec5, "mt76x02_eeprom_copy" },
	{ 0x3c7da08a, "mt76x02_config_mac_addr_list" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb8d90634, "mt76x02_dfs_init_params" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfd1e586d, "mt76_txq_schedule_all" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6cd1d086, "mt76x02_init_agc_gain" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfe1d3809, "mt76x02_init_debugfs" },
	{ 0x7fa6fcbd, "mt76x02_get_lna_gain" },
	{ 0x858b6ce2, "mt76x02_edcca_init" },
	{ 0x1af36174, "mt76x02_phy_set_rxpath" },
	{ 0x1567ae4f, "mt76x02_eeprom_parse_hw_cap" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0x4b494fd5, "__mt76_poll_msec" },
	{ 0xa1e1576e, "mt76x02_init_device" },
	{ 0x723d1a7, "mt76_set_channel" },
	{ 0xc247851, "mt76x02_phy_set_band" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xe499ac35, "mt76x02_phy_set_bw" },
	{ 0x2995937f, "mt76_register_device" },
	{ 0xa11c9c11, "mt76x02_mac_setaddr" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x39518ca0, "mt76_eeprom_init" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0x462ce68, "mt76x02_add_rate_power_offset" },
	{ 0xe2c51b2e, "mt76x02_get_rx_gain" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x12a38747, "usleep_range" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xed9319d5, "mt76x02_get_efuse_data" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xae1163d4, "mt76x02_ext_pa_enabled" },
	{ 0xb1af712f, "mt76x02_mac_shared_key_setup" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xfbca01ef, "mt76x02_phy_dfs_adjust_agc" },
	{ 0xd07f0b7b, "mt76x02_phy_adjust_vga_gain" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mac80211");


MODULE_INFO(srcversion, "D04847EA286BBB0116F886A");
