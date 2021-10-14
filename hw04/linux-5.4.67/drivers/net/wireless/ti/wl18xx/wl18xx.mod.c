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
	{ 0x9a0eb3bd, "wl12xx_cmd_build_probe_req" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xe00befb7, "wlcore_set_key" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x587fa713, "wlcore_event_beacon_loss" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xc76aa310, "__pm_runtime_suspend" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xb4323d45, "wlcore_event_dummy_packet" },
	{ 0xcabb016c, "wlcore_event_inactive_sta" },
	{ 0xee07b1c3, "wlcore_event_ba_rx_constraint" },
	{ 0x10d35b4b, "ieee80211_radar_detected" },
	{ 0x1248247b, "wlcore_event_fw_logger" },
	{ 0xcfda6f17, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0x5b57e872, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x4deb5965, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xdc484271, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x20351125, "wlcore_get_native_channel_type" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x5c428e02, "wl1271_cmd_configure" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xdefbea52, "default_llseek" },
	{ 0xee3e4108, "wlcore_event_sched_scan_completed" },
	{ 0xd36cdc56, "wlcore_boot_upload_firmware" },
	{ 0xc5850110, "printk" },
	{ 0x368d0d41, "wlcore_set_partition" },
	{ 0x9166fada, "strncpy" },
	{ 0x30db97ae, "wlcore_enable_interrupts" },
	{ 0x839e2ef7, "nla_put" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0xb18156be, "skb_pull" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0xefee605c, "__cfg80211_send_event_skb" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x828f2dc3, "wlcore_event_channel_switch" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x8a37849c, "__cfg80211_alloc_event_skb" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8030683a, "wlcore_disable_interrupts" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x61cc8c27, "wlcore_remove" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdf256037, "kstrtou8_from_user" },
	{ 0x355d218, "wlcore_event_max_tx_failure" },
	{ 0xa29cabb0, "wl1271_free_tx_id" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x859f581f, "ieee80211_stop_rx_ba_session" },
	{ 0xcbab477d, "wlcore_scan_sched_scan_results" },
	{ 0xe374d806, "ieee80211_get_hdrlen_from_skb" },
	{ 0xe932fc2d, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6a2b059, "wl1271_debugfs_update_stats" },
	{ 0x69979b06, "wlcore_set_scan_chan_params" },
	{ 0x71deb539, "request_firmware" },
	{ 0x78eb5d31, "wlcore_boot_run_firmware" },
	{ 0x5399ebcb, "wlcore_translate_addr" },
	{ 0x9df45843, "wlcore_scan_sched_scan_ssid_list" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x5352cbdd, "wlcore_event_roc_complete" },
	{ 0xb0e602eb, "memmove" },
	{ 0x34f276ac, "wl12xx_is_dummy_packet" },
	{ 0x6ebe366f, "ktime_get_mono_fast_ns" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3369ad8f, "wl1271_cmd_send" },
	{ 0xede283d, "release_firmware" },
	{ 0x84e25cd4, "ieee80211_connection_loss" },
};

MODULE_INFO(depends, "wlcore,mac80211,cfg80211");

MODULE_ALIAS("platform:wl18xx");

MODULE_INFO(srcversion, "7B5CD649474EDF68FBB6590");
