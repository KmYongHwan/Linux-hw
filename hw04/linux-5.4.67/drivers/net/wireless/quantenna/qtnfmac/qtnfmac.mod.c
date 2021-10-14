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
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93e6e765, "wiphy_free" },
	{ 0x25cfb8d4, "cfg80211_connect_done" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x349cba85, "strchr" },
	{ 0xad995dac, "netdev_stats_to_stats64" },
	{ 0xc097c562, "regulatory_set_wiphy_regd" },
	{ 0xe782f5e2, "cfg80211_radar_event" },
	{ 0xc43e1690, "cfg80211_shutdown_all_interfaces" },
	{ 0xdc628a0b, "cfg80211_inform_bss_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x75452846, "cfg80211_rx_mgmt" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0xc5e4a5d1, "cpumask_next" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xfb578fc5, "memset" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x11089ac7, "_ctype" },
	{ 0x6a4d5534, "cfg80211_get_bss" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0xffc025d1, "cfg80211_del_sta_sinfo" },
	{ 0xc510a792, "ieee80211_get_channel" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x5792f848, "strlcpy" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x1d82acaf, "wiphy_apply_custom_regulatory" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xbb389c21, "cfg80211_get_drvinfo" },
	{ 0xaf793668, "__alloc_percpu_gfp" },
	{ 0x8ccfcf9, "cfg80211_check_combinations" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x5a8e4c76, "cfg80211_ch_switch_notify" },
	{ 0xd6cfed90, "cfg80211_put_bss" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x86f7f0be, "wiphy_new_nm" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x68828cc7, "cfg80211_disconnected" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x4a23b531, "cfg80211_new_sta" },
	{ 0x6439af62, "cfg80211_chandef_valid" },
	{ 0x531f6cf, "cfg80211_external_auth_request" },
	{ 0x37a0cba, "kfree" },
	{ 0x96d0f5d9, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x584a7e85, "cfg80211_cac_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc223db15, "cfg80211_scan_done" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "0969E07A59E037687E4A014");
