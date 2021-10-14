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
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x93e6e765, "wiphy_free" },
	{ 0x25cfb8d4, "cfg80211_connect_done" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xdc628a0b, "cfg80211_inform_bss_data" },
	{ 0x7fb5282f, "cfg80211_conn_failed" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xcaac5422, "cfg80211_chandef_create" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x12950e37, "skb_copy" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x75452846, "cfg80211_rx_mgmt" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xb15862ee, "cfg80211_check_station_change" },
	{ 0x25b3797e, "skb_trim" },
	{ 0x3150eaea, "cfg80211_mgmt_tx_status" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x4ae943d1, "cfg80211_pmksa_candidate_notify" },
	{ 0xfb578fc5, "memset" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xba312d7b, "current_task" },
	{ 0x6a4d5534, "cfg80211_get_bss" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xffc025d1, "cfg80211_del_sta_sinfo" },
	{ 0xc510a792, "ieee80211_get_channel" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x714dfe80, "cfg80211_michael_mic_failure" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0xc56c77da, "cfg80211_ibss_joined" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbb389c21, "cfg80211_get_drvinfo" },
	{ 0x9d6cba30, "cfg80211_find_elem_match" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0x5a8e4c76, "cfg80211_ch_switch_notify" },
	{ 0x94e454b7, "cfg80211_roamed" },
	{ 0xd6cfed90, "cfg80211_put_bss" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xa0e729e8, "cfg80211_ready_on_channel" },
	{ 0x86f7f0be, "wiphy_new_nm" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x68828cc7, "cfg80211_disconnected" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x15663993, "netdev_set_default_ethtool_ops" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0x4a23b531, "cfg80211_new_sta" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x96d0f5d9, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0xcf2a6966, "up" },
	{ 0x96848186, "scnprintf" },
	{ 0x71deb539, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x8a9e05e7, "cfg80211_remain_on_channel_expired" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0xb3eaf15f, "cfg80211_sched_scan_stopped" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc223db15, "cfg80211_scan_done" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x442639ef, "param_ops_uint" },
	{ 0xdf9208c0, "alloc_workqueue" },
	{ 0xede283d, "release_firmware" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x654dd306, "cfg80211_cqm_txe_notify" },
	{ 0xf7f84d14, "cfg80211_sched_scan_results" },
};

MODULE_INFO(depends, "cfg80211");


MODULE_INFO(srcversion, "A94C23ED8141B8A5A47BA59");
