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
	{ 0x40de554f, "wlcore_boot_upload_nvs" },
	{ 0x6d3b27e, "wl12xx_debug_level" },
	{ 0xe00befb7, "wlcore_set_key" },
	{ 0xb4ba8c34, "wl1271_acx_init_mem_config" },
	{ 0x272ba86, "generic_file_llseek" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x587fa713, "wlcore_event_beacon_loss" },
	{ 0xb4323d45, "wlcore_event_dummy_packet" },
	{ 0xcabb016c, "wlcore_event_inactive_sta" },
	{ 0xee07b1c3, "wlcore_event_ba_rx_constraint" },
	{ 0x3002d913, "wl1271_acx_pm_config" },
	{ 0x7996ee86, "wlcore_calc_packet_alignment" },
	{ 0xcfda6f17, "wlcore_event_rssi_trigger" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x5b57e872, "wlcore_cmd_wait_for_event_or_timeout" },
	{ 0x4deb5965, "wlcore_probe" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdc484271, "wlcore_alloc_hw" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0xaaf54225, "wl1271_acx_set_ht_capabilities" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x5c428e02, "wl1271_cmd_configure" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xbb2421e, "wl1271_cmd_data_path" },
	{ 0x19191dc5, "wl12xx_acx_mem_cfg" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xee3e4108, "wlcore_event_sched_scan_completed" },
	{ 0xd36cdc56, "wlcore_boot_upload_firmware" },
	{ 0x18ce980f, "wl1271_acx_sleep_auth" },
	{ 0xc5850110, "printk" },
	{ 0x368d0d41, "wlcore_set_partition" },
	{ 0x30db97ae, "wlcore_enable_interrupts" },
	{ 0xfb78f3d4, "wl1271_cmd_test" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x7d22f0d5, "simple_open" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x828f2dc3, "wlcore_event_channel_switch" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8030683a, "wlcore_disable_interrupts" },
	{ 0x61cc8c27, "wlcore_remove" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x355d218, "wlcore_event_max_tx_failure" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xcbab477d, "wlcore_scan_sched_scan_results" },
	{ 0x41f7fbea, "wlcore_event_soft_gemini_sense" },
	{ 0xe932fc2d, "wlcore_free_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0xe930a855, "wlcore_tx_complete" },
	{ 0x85498cd1, "wl1271_format_buffer" },
	{ 0x69acdf38, "memcpy" },
	{ 0xd6a2b059, "wl1271_debugfs_update_stats" },
	{ 0x69979b06, "wlcore_set_scan_chan_params" },
	{ 0x78eb5d31, "wlcore_boot_run_firmware" },
	{ 0x5399ebcb, "wlcore_translate_addr" },
	{ 0x9df45843, "wlcore_scan_sched_scan_ssid_list" },
	{ 0x5352cbdd, "wlcore_event_roc_complete" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x3369ad8f, "wl1271_cmd_send" },
	{ 0x2223502b, "wl1271_tx_min_rate_get" },
};

MODULE_INFO(depends, "wlcore,mac80211");

MODULE_ALIAS("platform:wl12xx");

MODULE_INFO(srcversion, "385BDE2D44631A152E7A66B");
