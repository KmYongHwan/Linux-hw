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
	{ 0x4d553332, "ieee80211_rx_napi" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0xe7fba065, "ieee80211_queue_work" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0x47939e0d, "__tasklet_hi_schedule" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0x9778e580, "usb_get_from_anchor" },
	{ 0xc0a3d105, "find_next_bit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0xfcee8a3, "ath_regd_init" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x807766ea, "usb_scuttle_anchored_urbs" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbeb6359f, "__ieee80211_get_assoc_led_name" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xbeebc4cd, "ieee80211_stop_queues" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0x5ada0011, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x9c8bdd4a, "ieee80211_free_txskb" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x24b54c39, "ieee80211_wake_queues" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x3b54670, "ath_is_mybeacon" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x4571aea8, "ath_is_world_regd" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa89177c8, "input_set_capability" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xeaf295a7, "ieee80211_sta_block_awake" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xb18156be, "skb_pull" },
	{ 0x852036c1, "request_firmware_nowait" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0x6e39fcff, "ath_reg_notifier_apply" },
	{ 0x92129d68, "wiphy_to_ieee80211_hw" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xa8baf7a6, "ieee80211_stop_tx_ba_cb_irqsafe" },
	{ 0x1f37da0c, "usb_queue_reset_device" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xf08b651e, "ath_regd_get_band_ctl" },
	{ 0xa916b694, "strnlen" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40555496, "usb_reset_device" },
	{ 0xff76d558, "input_register_device" },
	{ 0x22a17cbd, "ieee80211_tx_status_irqsafe" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0xce42315c, "usb_driver_release_interface" },
	{ 0x22d12f50, "ieee80211_get_tx_rates" },
	{ 0x2a26e84c, "input_free_device" },
	{ 0xeb5677a4, "ieee80211_find_sta" },
	{ 0x6cfb19d0, "hwrng_register" },
	{ 0x9e68336d, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x842f046d, "usb_poison_anchored_urbs" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x8d14b8b, "usb_get_intf" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xd1a4581, "ieee80211_restart_hw" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x96d0f5d9, "regulatory_hint" },
	{ 0x69acdf38, "memcpy" },
	{ 0x3f69beeb, "input_unregister_device" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x53801be1, "usb_ifnum_to_if" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb605aeff, "hwrng_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x86b13d2a, "usb_unpoison_anchored_urbs" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x4d1ff60a, "wait_for_completion_timeout" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xede283d, "release_firmware" },
	{ 0x7e30f9b0, "ieee80211_start_tx_ba_cb_irqsafe" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x34f20df7, "device_set_wakeup_enable" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x90cb6031, "usb_put_intf" },
	{ 0x839b0f4c, "ieee80211_stop_tx_ba_session" },
	{ 0xf5157847, "ieee80211_queue_stopped" },
	{ 0xeebd5754, "input_allocate_device" },
};

MODULE_INFO(depends, "mac80211,ath,cfg80211");

MODULE_ALIAS("usb:v0CF3p9170d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vCACEp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3C10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A09d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A0Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0ACEp1221d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0804d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0326d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3417d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF522d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019p5304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p0249d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0409p02B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8401d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B75p9170d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "7C910C24AAD5FBCEEB8437A");
