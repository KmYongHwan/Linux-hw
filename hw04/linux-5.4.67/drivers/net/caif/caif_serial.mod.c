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
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xc5850110, "printk" },
	{ 0xaa01c190, "tty_register_ldisc" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xea4c5e82, "register_netdevice" },
	{ 0xd62e65be, "debugfs_create_x8" },
	{ 0x5c49fb86, "debugfs_create_x32" },
	{ 0xc81b2440, "debugfs_create_blob" },
	{ 0x179f97c3, "debugfs_create_dir" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6cbbc89, "capable" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc3b095e1, "debugfs_remove_recursive" },
	{ 0x5f80123f, "unregister_netdevice_queue" },
	{ 0xf04187ce, "dev_close" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x650b92eb, "tty_kref_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0xb18156be, "skb_pull" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x3c59680b, "tty_write_room" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6CD5709E14A4EC82EA25059");
