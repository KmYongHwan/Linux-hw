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
	{ 0xaad49c42, "param_array_ops" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x5aae2095, "pci_unregister_driver" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x7413793a, "EISA_bus" },
	{ 0x9dba8f45, "__pci_register_driver" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xefca05d5, "pci_set_power_state" },
	{ 0xd368c71c, "pci_wake_from_d3" },
	{ 0x896845d2, "pci_save_state" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x8c46224, "pci_enable_wake" },
	{ 0x2ed7bb5f, "pci_restore_state" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0xa637b975, "dma_ops" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x8658a66c, "pci_disable_device" },
	{ 0xa73e6a4b, "pci_set_master" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xbaed66b, "pci_request_regions" },
	{ 0x7ed451da, "pci_enable_device" },
	{ 0xc29957c3, "__x86_indirect_thunk_rcx" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x24d273d1, "add_timer" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x4629334c, "__preempt_count" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x22690c6a, "pci_release_regions" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xc5850110, "printk" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00000E11d0000AE34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE32sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE35sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000F130sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000F150sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE43sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000AE40sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B011sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000108Dd00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000E11d0000B012sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E10E87E8C36151C421A1681");
