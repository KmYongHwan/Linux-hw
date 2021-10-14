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
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbf85c806, "vcc_insert_socket" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0xa9320d27, "ktime_get_seconds" },
	{ 0x79ff3bbe, "seq_open" },
	{ 0x45f2f1a7, "deregister_atm_ioctl" },
	{ 0x7a42bc96, "dev_get_by_name" },
	{ 0xf5eb2cce, "register_atm_ioctl" },
	{ 0xc4142837, "seq_printf" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0x167e7f9d, "__get_user_1" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0xb0ae44b0, "vcc_release_async" },
	{ 0xcec6343e, "seq_read" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xc5850110, "printk" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb18156be, "skb_pull" },
	{ 0x9198c918, "softnet_data" },
	{ 0x3785c132, "init_net" },
	{ 0xf720a60b, "module_put" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x9415ca79, "__module_get" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x8ad29bab, "_raw_write_unlock_bh" },
	{ 0x830d73d4, "seq_lseek" },
	{ 0x150e3657, "_raw_read_lock_bh" },
	{ 0xad10eb8, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1ed698d, "_raw_write_lock_bh" },
	{ 0x7a4497db, "kzfree" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x4167f609, "seq_release" },
	{ 0xa5558b7d, "proc_create" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xf8595510, "_raw_read_lock_irq" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "B6CC3D178A911F20B95826E");
