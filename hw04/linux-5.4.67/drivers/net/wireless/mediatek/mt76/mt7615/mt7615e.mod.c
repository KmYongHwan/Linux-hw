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
	{ 0x1e7b2590, "ieee80211_csa_finish" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xd223bed3, "mt76_get_min_avg_rssi" },
	{ 0xa8b5b656, "mt76_dma_attach" },
	{ 0x73633a3, "pcim_enable_device" },
	{ 0xb74f842f, "debugfs_create_u8" },
	{ 0x5a51dcf9, "mt76_rx_aggr_stop" },
	{ 0xd5def79d, "__mt76_poll" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x1e4d26af, "pcim_iomap_table" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x89a4a2e4, "mt76_sw_scan" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x10d35b4b, "ieee80211_radar_detected" },
	{ 0xd2edd104, "mt76_put_txwi" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd08058d8, "mt76_rx_aggr_start" },
	{ 0x236869a7, "mt76_sw_scan_complete" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xfd1e586d, "mt76_txq_schedule_all" },
	{ 0x3a0b34e3, "mt76_insert_ccmp_hdr" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x4984453c, "ieee80211_iterate_active_interfaces_atomic" },
	{ 0xa526a74d, "mt76_txq_init" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x14f13711, "mt76_mcu_get_response" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0xd1134d14, "mt76_tx_complete_skb" },
	{ 0x7b42d85e, "mt76_sta_state" },
	{ 0xe31ef352, "debugfs_create_u32" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xfeaa13c7, "mt76_get_survey" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xce6c386d, "mt76_set_irq_mask" },
	{ 0x31adfc95, "mt76_unregister_device" },
	{ 0x735e2e65, "mt76_eeprom_override" },
	{ 0x5abb9db4, "ieee80211_beacon_get_template" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0x7b954a9d, "mt76_mmio_init" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x4b494fd5, "__mt76_poll_msec" },
	{ 0x723d1a7, "mt76_set_channel" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x2995937f, "mt76_register_device" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x39518ca0, "mt76_eeprom_init" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0xfbf230aa, "mt76_tx_status_skb_done" },
	{ 0x9df75a65, "pcim_iomap_regions" },
	{ 0x8553edc1, "debugfs_attr_read" },
	{ 0x92129d68, "wiphy_to_ieee80211_hw" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9a2a8362, "mt76_rx" },
	{ 0xa8baf7a6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x201355e4, "mt76_free_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xa6409b6, "mt76_wcid_key_setup" },
	{ 0x666ab8d0, "mt76_wcid_alloc" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0x5ce68a0f, "mt76_tx" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0x59260404, "debugfs_create_devm_seqfile" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x744131b2, "mt76_register_debugfs" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x75093407, "mt76_tx_status_check" },
	{ 0xce960ec9, "mt76_alloc_device" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x6bc14c33, "mt76_dma_cleanup" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xfec86b20, "mt76_mcu_rx_event" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe374d806, "ieee80211_get_hdrlen_from_skb" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x76509ab9, "ieee80211_tx_status_ext" },
	{ 0x28697053, "mt76_wake_tx_queue" },
	{ 0xd8b9c97e, "mt76_get_rate" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0x8ab5e1c9, "mt76_tx_status_skb_add" },
	{ 0xe8f52f11, "mt76_get_txpower" },
	{ 0x71deb539, "request_firmware" },
	{ 0xef0f9bc7, "mt76_release_buffered_frames" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0x5c344b83, "debugfs_create_u16" },
	{ 0xc3126630, "mt76_tx_status_lock" },
	{ 0xed8533e0, "mt76_mcu_msg_alloc" },
	{ 0xba8b13d1, "mt76_tx_status_skb_get" },
	{ 0x15314fce, "consume_skb" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x90019f67, "debugfs_attr_write" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xa6500cc4, "mt76_txq_remove" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0xede283d, "release_firmware" },
	{ 0x920e6eae, "mt76_tx_status_unlock" },
	{ 0x7e30f9b0, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0xa637b975, "dma_ops" },
};

MODULE_INFO(depends, "mac80211,mt76,cfg80211");

MODULE_ALIAS("pci:v000014C3d00007615sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "17E67E912F6A6C960C8D83D");
