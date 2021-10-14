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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xaad49c42, "param_array_ops" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x1f406f14, "netdev_boot_setup_check" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x6fe86ad9, "alloc_netdev_mqs" },
	{ 0x24d273d1, "add_timer" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x5a03a8c6, "netdev_notice" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0x49951708, "sev_enable_key" },
	{ 0xcb077337, "pci_dev_put" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xcdca3691, "nr_irqs" },
	{ 0x98d87b25, "pci_get_class" },
	{ 0x85bd1608, "__request_region" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc5850110, "printk" },
	{ 0xab600421, "probe_irq_off" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xb121390a, "probe_irq_on" },
	{ 0xbc0907b0, "ether_setup" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xc6cbbc89, "capable" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "73D124B9C845467E6340A29");
