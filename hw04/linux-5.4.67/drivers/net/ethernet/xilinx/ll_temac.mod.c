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
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x5f0b2042, "devm_ioremap_nocache" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x762c9c79, "phy_ethtool_nway_reset" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xa82f8d7f, "sysfs_remove_group" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x23c20fb9, "netif_rx" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb8e75250, "phy_start" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xc2107c52, "sysfs_create_group" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x79093209, "devm_alloc_etherdev_mqs" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0xed1924a1, "skb_defer_rx_timestamp" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0xf27acad9, "phy_connect" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xa637b975, "dma_ops" },
	{ 0xe484e35f, "ioread32" },
	{ 0xc1514a3b, "free_irq" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.b");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-1.01.bC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.02.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.a");
MODULE_ALIAS("of:N*T*Cxlnx,xps-ll-temac-2.03.aC*");

MODULE_INFO(srcversion, "0C3619BCEB8D8BBBAB44C27");
