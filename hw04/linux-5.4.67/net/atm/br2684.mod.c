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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xcfb6a3da, "unregister_atmdevice_notifier" },
	{ 0xb4c99b4e, "remove_proc_entry" },
	{ 0x45f2f1a7, "deregister_atm_ioctl" },
	{ 0xb09faf79, "register_atmdevice_notifier" },
	{ 0xf5eb2cce, "register_atm_ioctl" },
	{ 0xc46bedbf, "proc_create_seq_private" },
	{ 0x4443d399, "atm_proc_root" },
	{ 0xc5850110, "printk" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9c855ae9, "vcc_process_recv_queue" },
	{ 0x9415ca79, "__module_get" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x5a921311, "strncmp" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8f9c199c, "__get_user_2" },
	{ 0x4d1a1157, "skb_push" },
	{ 0x55f384b9, "skb_realloc_headroom" },
	{ 0x165b145c, "ex_handler_refcount" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb18156be, "skb_pull" },
	{ 0x15314fce, "consume_skb" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x37a0cba, "kfree" },
	{ 0xf720a60b, "module_put" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9eab8d85, "_raw_write_lock_irq" },
	{ 0xff1e9dd8, "seq_list_start" },
	{ 0x32ae5741, "_raw_read_lock" },
	{ 0xe7d4daac, "seq_list_next" },
	{ 0xc4142837, "seq_printf" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xa16c8613, "_raw_read_unlock_irqrestore" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x736b5662, "_raw_read_lock_irqsave" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "atm");


MODULE_INFO(srcversion, "64A5E06F79A1F9C70A4155C");
