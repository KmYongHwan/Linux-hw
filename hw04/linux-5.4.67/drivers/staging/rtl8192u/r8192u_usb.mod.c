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
	{ 0xf888ca21, "sg_init_table" },
	{ 0x59a11eaf, "crypto_alloc_shash" },
	{ 0x70691c99, "single_open" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xadfd6f08, "proc_create_single_data" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xa071f2c6, "single_release" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x12950e37, "skb_copy" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0xc4142837, "seq_printf" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa84cce3, "usb_kill_urb" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x6a4178b2, "crypto_shash_final" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xcec6343e, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xbc376b57, "skb_unlink" },
	{ 0x25b3797e, "skb_trim" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xa17f5f47, "crypto_alloc_sync_skcipher" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x8249512, "iwe_stream_add_point" },
	{ 0xd727ef13, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0xfb578fc5, "memset" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0xf47b3d97, "proc_mkdir" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x5c85af9b, "usb_deregister" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xc5850110, "printk" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xd25eb83e, "crypto_shash_update" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0x9166fada, "strncpy" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6168380e, "seq_putc" },
	{ 0x163ea90b, "wireless_send_event" },
	{ 0x4e337be9, "usb_control_msg" },
	{ 0x5a921311, "strncmp" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xb2cdf064, "proc_mkdir_data" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xcd47e287, "crypto_aead_encrypt" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x3bf58509, "crypto_shash_setkey" },
	{ 0x3785c132, "init_net" },
	{ 0x5a9ed457, "crypto_aead_setkey" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xf7d31de9, "kstrtoul_from_user" },
	{ 0x3aa02c8, "usb_submit_urb" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa916b694, "strnlen" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfa6e62c1, "crypto_skcipher_decrypt" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x8f673234, "crypto_destroy_tfm" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xcc5005fe, "msleep_interruptible" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x6c2b627a, "crypto_aead_decrypt" },
	{ 0x95195e25, "crypto_aead_setauthsize" },
	{ 0x2581e3be, "remove_proc_subtree" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x63344450, "crypto_alloc_aead" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0xb320cc0e, "sg_init_one" },
	{ 0x37a0cba, "kfree" },
	{ 0x69acdf38, "memcpy" },
	{ 0x61963a6c, "dev_alloc_name" },
	{ 0x651df6f2, "dev_trans_start" },
	{ 0x9ce89892, "usb_register_driver" },
	{ 0x71deb539, "request_firmware" },
	{ 0x7a4497db, "kzfree" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb0e602eb, "memmove" },
	{ 0x15314fce, "consume_skb" },
	{ 0xa5558b7d, "proc_create" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x4cba441d, "iwe_stream_add_event" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x227e35c3, "usb_free_urb" },
	{ 0xede283d, "release_firmware" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x47a8c8a0, "try_module_get" },
	{ 0x334097dc, "usb_alloc_urb" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x67d8bcc9, "crypto_skcipher_encrypt" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v0BDAp8709d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp805Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p9201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0290d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v043Ep7A01d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BEABD8106393AC8C73BA560");
