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
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x13607aef, "mt76x02_remove_interface" },
	{ 0x5948bd94, "mt76x02_mac_start" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xd5def79d, "__mt76_poll" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x89a4a2e4, "mt76_sw_scan" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0xd8e6521c, "mt76x02_conf_tx" },
	{ 0x2c2e5733, "mt76x02_ampdu_action" },
	{ 0x4109458b, "mt76x02_mcu_cleanup" },
	{ 0x6be3bfaa, "mt76x02_tx_prepare_skb" },
	{ 0x46d9371c, "mt76x02_add_interface" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x99315e34, "mt76x02_bss_info_changed" },
	{ 0xe020c277, "mt76x0_init_hardware" },
	{ 0x915ba27d, "mt76x02_mcu_msg_send" },
	{ 0x7b42d85e, "mt76_sta_state" },
	{ 0xfae60bcc, "mt76x02_tx_complete_skb" },
	{ 0x91115d8, "mt76x02_set_rts_threshold" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfeaa13c7, "mt76_get_survey" },
	{ 0xccddfb4, "mt76x0_mac_stop" },
	{ 0x31adfc95, "mt76_unregister_device" },
	{ 0x497a4216, "mt76x02_sta_add" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xcaa7b18f, "mt76x02_sta_remove" },
	{ 0x7b954a9d, "mt76_mmio_init" },
	{ 0xdf8add62, "mt76x02_tx" },
	{ 0x4b494fd5, "__mt76_poll_msec" },
	{ 0x91d5b9ee, "mt76x02_irq_handler" },
	{ 0x8b073c3d, "mt76x02_sw_scan_complete" },
	{ 0x49747f9e, "mt76_set_tim" },
	{ 0x3ff8d3e7, "mt76x0_phy_calibrate" },
	{ 0x7fc25b99, "mt76x02_rx_poll_complete" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x7c25a90a, "mt76x0_register_device" },
	{ 0xa49a806a, "mt76x0_config" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x22688b95, "mt76x02_queue_rx_skb" },
	{ 0x28a090bc, "mt76x0_chip_onoff" },
	{ 0x201355e4, "mt76_free_device" },
	{ 0x7eaeaa92, "mt76x02_configure_filter" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x12a38747, "usleep_range" },
	{ 0x7df84946, "mt76x02_update_channel" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xd036f992, "mt76x02_set_coverage_class" },
	{ 0xce960ec9, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x3cf0caaa, "mt76x02_dma_cleanup" },
	{ 0xecdc6d33, "mt76x02_sta_rate_tbl_update" },
	{ 0xbe0777e5, "mt76x02_sta_ps" },
	{ 0xa4920dd8, "mt76x02e_init_beacon_config" },
	{ 0x28697053, "mt76_wake_tx_queue" },
	{ 0xfeb8e956, "mt76x02_dma_disable" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xe8f52f11, "mt76_get_txpower" },
	{ 0x71deb539, "request_firmware" },
	{ 0xef0f9bc7, "mt76_release_buffered_frames" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x47b0350d, "mt76x02_set_key" },
	{ 0xec6b05c4, "mt76x02_set_ethtool_fwver" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xede283d, "release_firmware" },
	{ 0x9f5baee2, "mt76x02_dma_init" },
};

MODULE_INFO(depends, "mt76x02-lib,mt76,mt76x0-common,mac80211");

MODULE_ALIAS("pci:v000014C3d00007630sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007650sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D62B9C57FFA9D3B3E4ABA9F");
