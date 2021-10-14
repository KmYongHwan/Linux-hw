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
	{ 0x7c4509ba, "skb_queue_head" },
	{ 0x5d6a04c4, "ieee80211_rx_irqsafe" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xf9a482f9, "msleep" },
	{ 0x9c64fbd, "ieee80211_frequency_to_channel" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x22e71afc, "ieee80211_beacon_get_tim" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xf36cc24f, "ieee80211_unregister_hw" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0x63a7c28c, "bitmap_find_free_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0xbeb6359f, "__ieee80211_get_assoc_led_name" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x6f3c3906, "ieee80211_stop_queue" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x9f5febc5, "ieee80211_alloc_hw_nm" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x2af4b11a, "led_classdev_register_ext" },
	{ 0x9c8bdd4a, "ieee80211_free_txskb" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xb18156be, "skb_pull" },
	{ 0xe3a53f4c, "sort" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xe1e69f85, "ieee80211_queue_delayed_work" },
	{ 0x167c5967, "print_hex_dump" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x4c9b8d3c, "__ieee80211_get_rx_led_name" },
	{ 0xa916b694, "strnlen" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc1e1b97f, "wiphy_rfkill_set_hw_state" },
	{ 0x22a17cbd, "ieee80211_tx_status_irqsafe" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x574c2e74, "bitmap_release_region" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xa33c0eac, "wait_for_completion_interruptible_timeout" },
	{ 0x9e68336d, "__ieee80211_get_tx_led_name" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x17e93065, "ieee80211_wake_queue" },
	{ 0x52ecbc75, "crc_ccitt" },
	{ 0x6bb64cbe, "__ieee80211_get_radio_led_name" },
	{ 0xe374d806, "ieee80211_get_hdrlen_from_skb" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x11cd5fa9, "ieee80211_register_hw" },
	{ 0xd52dbe7d, "led_classdev_unregister" },
	{ 0x37a0cba, "kfree" },
	{ 0x96d0f5d9, "regulatory_hint" },
	{ 0xd10d736b, "ieee80211_beacon_loss" },
	{ 0x69acdf38, "memcpy" },
	{ 0xe04cbb4c, "ieee80211_free_hw" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x29361773, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c160d9e, "skb_put" },
};

MODULE_INFO(depends, "mac80211,cfg80211");


MODULE_INFO(srcversion, "84903103E83875348030BD7");
