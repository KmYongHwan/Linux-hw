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
	{ 0xedec5990, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x815588a6, "clk_enable" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x5a889429, "phy_stop" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x14b6ffdc, "mdiobus_get_phy" },
	{ 0x56470118, "__warn_printk" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0x2e1ca751, "clk_put" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xbeb032cb, "phy_ethtool_get_eee" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb8e75250, "phy_start" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0xfe64b80a, "netif_tx_stop_all_queues" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x24d273d1, "add_timer" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x85ef0bf5, "phy_init_eee" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x11aa2f15, "kfree_skb" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x9a7610f8, "phy_get_eee_err" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0xe4413db4, "clk_get" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0xf27acad9, "phy_connect" },
	{ 0x104220e0, "phy_ethtool_set_eee" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x9c160d9e, "skb_put" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xbca28682, "devm_request_threaded_irq" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0xa637b975, "dma_ops" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Csamsung,sxgbe-v2.0a");
MODULE_ALIAS("of:N*T*Csamsung,sxgbe-v2.0aC*");

MODULE_INFO(srcversion, "824C6D7E2815955325D8EB4");
