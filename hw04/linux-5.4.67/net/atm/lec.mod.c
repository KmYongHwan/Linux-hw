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
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x45f2f1a7, "deregister_atm_ioctl" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0xf5eb2cce, "register_atm_ioctl" },
	{ 0xc46bedbf, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0x4a8fc4ce, "dev_set_mtu" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xc0536d08, "br_fdb_test_addr_hook" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb18156be, "skb_pull" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xf12bcde7, "skb_copy_expand" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0xf720a60b, "module_put" },
	{ 0xf4733f31, "skb_dequeue" },
	{ 0x15314fce, "consume_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x9415ca79, "__module_get" },
	{ 0xbf85c806, "vcc_insert_socket" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6cbbc89, "capable" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x69acdf38, "memcpy" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x9cb39373, "seq_puts" },
	{ 0x6168380e, "seq_putc" },
	{ 0xc4142837, "seq_printf" },
	{ 0x9ab0ed7c, "skb_queue_tail" },
	{ 0xfc2d702f, "__alloc_skb" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xc5850110, "printk" },
	{ 0xe76ae805, "skb_queue_purge" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xb0ae44b0, "vcc_release_async" },
	{ 0x37a0cba, "kfree" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "3CFAB19728153A8D4F13B5C");
