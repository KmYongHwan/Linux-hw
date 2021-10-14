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
	{ 0x3b9b8b79, "eisa_driver_unregister" },
	{ 0x132c593a, "isa_unregister_driver" },
	{ 0xe860f935, "pnp_unregister_driver" },
	{ 0x7761bddc, "eisa_driver_register" },
	{ 0xb0ab8c89, "isa_register_driver" },
	{ 0x132af893, "pnp_register_driver" },
	{ 0x8f996a30, "ethtool_convert_legacy_u32_to_link_mode" },
	{ 0x90b8ab4c, "pnp_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x49951708, "sev_enable_key" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x1f406f14, "netdev_boot_setup_check" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xa80ea35, "free_netdev" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0xc5850110, "printk" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("eisa:sTCM5090*");
MODULE_ALIAS("eisa:sTCM5091*");
MODULE_ALIAS("eisa:sTCM5092*");
MODULE_ALIAS("eisa:sTCM5093*");
MODULE_ALIAS("eisa:sTCM5094*");
MODULE_ALIAS("eisa:sTCM5095*");
MODULE_ALIAS("eisa:sTCM5098*");
MODULE_ALIAS("pnp:dTCM5090*");
MODULE_ALIAS("acpi*:TCM5090:*");
MODULE_ALIAS("pnp:dTCM5091*");
MODULE_ALIAS("acpi*:TCM5091:*");
MODULE_ALIAS("pnp:dTCM5094*");
MODULE_ALIAS("acpi*:TCM5094:*");
MODULE_ALIAS("pnp:dTCM5095*");
MODULE_ALIAS("acpi*:TCM5095:*");
MODULE_ALIAS("pnp:dTCM5098*");
MODULE_ALIAS("acpi*:TCM5098:*");
MODULE_ALIAS("pnp:dPNP80f7*");
MODULE_ALIAS("acpi*:PNP80F7:*");
MODULE_ALIAS("pnp:dPNP80f8*");
MODULE_ALIAS("acpi*:PNP80F8:*");

MODULE_INFO(srcversion, "943D464EAE9A2138BDD9278");
