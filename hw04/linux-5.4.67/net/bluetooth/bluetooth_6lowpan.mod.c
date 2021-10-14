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
	{ 0x2d3385d3, "system_wq" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x76995569, "l2cap_chan_set_defaults" },
	{ 0x70691c99, "single_open" },
	{ 0x19f462ab, "kfree_call_rcu" },
	{ 0xa071f2c6, "single_release" },
	{ 0x19e28f3c, "l2cap_chan_del" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc373a5d1, "no_llseek" },
	{ 0x17fc86f3, "skb_clone" },
	{ 0x12950e37, "skb_copy" },
	{ 0xe8d10c9, "lowpan_header_compress" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x76ba04da, "l2cap_chan_send" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x37dde473, "neigh_destroy" },
	{ 0x35c97117, "l2cap_add_psm" },
	{ 0xc8ec3594, "debugfs_create_file" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x1cc07a3e, "l2cap_chan_close" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa244a923, "hci_get_route" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x48c9e8c6, "l2cap_chan_put" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x87e17297, "iov_iter_kvec" },
	{ 0xc144b33e, "debugfs_remove" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf04187ce, "dev_close" },
	{ 0xa60ebde7, "nd_tbl" },
	{ 0x63331ce9, "simple_attr_release" },
	{ 0xefce1a63, "debugfs_create_file_unsafe" },
	{ 0xb18156be, "skb_pull" },
	{ 0x8553edc1, "debugfs_attr_read" },
	{ 0x638f26ad, "dev_open" },
	{ 0x442e46f9, "lowpan_header_decompress" },
	{ 0xf720a60b, "module_put" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0x16cfb78, "lowpan_unregister_netdev" },
	{ 0xcb1e91da, "bt_debugfs" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x335f6589, "l2cap_chan_connect" },
	{ 0xacb17d7e, "netdev_notify_peers" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xcdce5b68, "lowpan_register_netdev" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xb2478299, "l2cap_chan_create" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x15314fce, "consume_skb" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x90019f67, "debugfs_attr_write" },
	{ 0x9a087e18, "simple_attr_open" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x47a8c8a0, "try_module_get" },
};

MODULE_INFO(depends, "bluetooth,6lowpan");


MODULE_INFO(srcversion, "C995DA43B75642E26767F9A");
