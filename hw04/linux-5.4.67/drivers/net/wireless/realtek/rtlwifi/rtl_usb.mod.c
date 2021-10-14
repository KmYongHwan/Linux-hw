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
	{ 0x4d553332, "ieee80211_rx_napi" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x41d3030f, "rtl_deinit_deferred_work" },
	{ 0xf5bb5b4d, "rtl_deinit_core" },
	{ 0x9778e580, "usb_get_from_anchor" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x621c9d99, "usb_unanchor_urb" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x847d4bdc, "rtl_init_core" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x62fdf67e, "rtl_action_proc" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x2d32cdfc, "rtl_lps_change_work_callback" },
	{ 0xa2ee1956, "rtl_init_rx_config" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3d26e2a5, "usb_free_coherent" },
	{ 0x42160169, "flush_workqueue" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0x22a17cbd, "ieee80211_tx_status_irqsafe" },
	{ 0x3b6abb10, "rtl_ops" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x3519e9c, "usb_alloc_coherent" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x7357906b, "rtl_beacon_statistic" },
	{ 0x769cd94d, "usb_anchor_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mac80211,rtlwifi");


MODULE_INFO(srcversion, "D4E0FACB56D933F77934FAB");
