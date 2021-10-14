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
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x69539117, "__parport_register_driver" },
	{ 0xf7871355, "parport_unregister_driver" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x19b84a22, "netif_rx_ni" },
	{ 0xb18156be, "skb_pull" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc6cbbc89, "capable" },
	{ 0x29361773, "complete" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xc4963523, "parport_claim" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9eb4f9a2, "parport_release" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x15314fce, "consume_skb" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf84bf8c6, "eth_header" },
	{ 0x72dc4514, "eth_header_cache" },
	{ 0xc65846c4, "parport_unregister_device" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xb0a23144, "parport_register_dev_model" },
	{ 0xa916b694, "strnlen" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xc5850110, "printk" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x5a921311, "strncmp" },
	{ 0x754d539c, "strlen" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "parport");


MODULE_INFO(srcversion, "514EC0BA67AE7859A9E4A65");
