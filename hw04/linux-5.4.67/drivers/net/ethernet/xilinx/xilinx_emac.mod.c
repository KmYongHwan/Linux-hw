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
	{ 0xb077e70a, "clk_unprepare" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x68dc92a4, "phylink_of_phy_connect" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0xdccfdecd, "phylink_ethtool_ksettings_get" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xf3083a1d, "phylink_destroy" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0xb18f9eec, "phylink_ethtool_ksettings_set" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0xdcb0a2c0, "phylink_stop" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x15c4e3e2, "phylink_ethtool_set_pauseparam" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x911fcd6c, "phylink_start" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xfaef0ed, "__tasklet_schedule" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xf8fe5642, "phylink_ethtool_get_pauseparam" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xf04187ce, "dev_close" },
	{ 0x983276da, "phylink_disconnect_phy" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x9545af6d, "tasklet_init" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x82072614, "tasklet_kill" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x12a38747, "usleep_range" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbfdcb43a, "__x86_indirect_thunk_r11" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "phylink");

MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.01.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-1.01.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-2.01.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-ethernet-2.01.aC*");

MODULE_INFO(srcversion, "7AD41017A29F1328B6AEB44");
