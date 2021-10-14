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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x458a230b, "mwifiex_cancel_hs" },
	{ 0xb3635b01, "_raw_spin_lock_bh" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xdf8ace44, "mwifiex_write_data_complete" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x2bae67e2, "mwifiex_process_sleep_confirm_resp" },
	{ 0x5904d89f, "mwifiex_queue_main_work" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x5ef6588d, "_mwifiex_dbg" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x46c4bed2, "mwifiex_add_card" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0xc5850110, "printk" },
	{ 0x4d1a1157, "skb_push" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xd4dad9f3, "mwifiex_alloc_dma_align_buf" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xcf48f6f8, "usb_get_dev" },
	{ 0x49c41a57, "_raw_spin_unlock_bh" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x40555496, "usb_reset_device" },
	{ 0x2ba2c9cb, "usb_bulk_msg" },
	{ 0xdd140424, "usb_put_dev" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x4c41f0cd, "mwifiex_process_hs_config" },
	{ 0x37a0cba, "kfree" },
	{ 0x81c6d1b5, "mwifiex_multi_chan_resync" },
	{ 0x69acdf38, "memcpy" },
	{ 0x84b02cc7, "mwifiex_fw_dump_event" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x46036840, "mwifiex_deauthenticate_all" },
	{ 0xeafa3d1d, "mwifiex_remove_card" },
	{ 0x5cd3d48c, "mwifiex_enable_hs" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x63ca9a35, "mwifiex_init_shutdown_fw" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0x334097dc, "usb_alloc_urb" },
};

MODULE_INFO(depends, "mwifiex");

MODULE_ALIAS("usb:v1286p2041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2042d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p2044d*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2049d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ad*dc*dsc*dp*icFFiscFFipFFin*");
MODULE_ALIAS("usb:v1286p2052d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1286p204Ed*dc*dsc*dp*icFFiscFFipFFin*");

MODULE_INFO(srcversion, "9B3C09ACFC9F32AF28FC83C");
