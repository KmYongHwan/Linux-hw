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
	{ 0xa24f23d8, "__request_module" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xf9a482f9, "msleep" },
	{ 0x754d539c, "strlen" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x9610c292, "lib80211_crypt_delayed_deinit" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x94436f75, "lib80211_crypt_info_free" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x95451c3, "netdev_alert" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0x163ea90b, "wireless_send_event" },
	{ 0x5a921311, "strncmp" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x82072614, "tasklet_kill" },
	{ 0xd8af3e0f, "lib80211_get_crypto_ops" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0xd5dcf14b, "lib80211_crypt_info_init" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x651df6f2, "dev_trans_start" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15314fce, "consume_skb" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0xe914e41e, "strcpy" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
};

MODULE_INFO(depends, "lib80211");


MODULE_INFO(srcversion, "85020B319DD8782038A159A");
