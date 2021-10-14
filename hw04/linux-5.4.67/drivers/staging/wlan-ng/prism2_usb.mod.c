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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x1ed8b599, "__x86_indirect_thunk_r8" },
	{ 0x93e6e765, "wiphy_free" },
	{ 0x25cfb8d4, "cfg80211_connect_done" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0xdc628a0b, "cfg80211_inform_bss_data" },
	{ 0x7298a522, "usb_init_urb" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9791d2e6, "ieee80211_channel_to_frequency" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xb7b2845b, "usb_unlink_urb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xfb578fc5, "memset" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9311634a, "usb_get_status" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x262e823a, "wait_for_completion_interruptible" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc698a562, "wiphy_unregister" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x9166fada, "strncpy" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc510a792, "ieee80211_get_channel" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0x94e454b7, "cfg80211_roamed" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xd6cfed90, "cfg80211_put_bss" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x1b098acb, "wiphy_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40555496, "usb_reset_device" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x13f99d62, "usb_clear_halt" },
	{ 0x86f7f0be, "wiphy_new_nm" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x93c7edeb, "usb_find_common_endpoints" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x68828cc7, "cfg80211_disconnected" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc223db15, "cfg80211_scan_done" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xede283d, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "cfg80211");

MODULE_ALIAS("usb:v04BBp0922d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp3642d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0408d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p0421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DEp7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v8086p1111d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep7A01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep006Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0967p0204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B3Bp1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp00EBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F1p3009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F3p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v50C2p4013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C02p14EAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap168Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap3503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2821p3300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p6106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB2p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9016p182Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0543p0F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp0033d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "26534BD35470EEE2E15BB32");
