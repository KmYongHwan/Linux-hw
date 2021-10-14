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
	{ 0x2d3385d3, "system_wq" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0xf9a482f9, "msleep" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x815588a6, "clk_enable" },
	{ 0x5a889429, "phy_stop" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xf189e453, "dma_set_mask" },
	{ 0x445a81ce, "boot_cpu_data" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x4ea25709, "dql_reset" },
	{ 0x14b6ffdc, "mdiobus_get_phy" },
	{ 0xdf566a59, "__x86_indirect_thunk_r9" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x445ce05b, "dma_free_attrs" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0x9078fc, "dma_set_coherent_mask" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0x3c64ae14, "devm_mdiobus_alloc_size" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xb47cca30, "csum_ipv6_magic" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0xd52c37ad, "acpi_match_device" },
	{ 0xceb84250, "netif_schedule_queue" },
	{ 0x7e526bfa, "__x86_indirect_thunk_r10" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfb578fc5, "memset" },
	{ 0xb8e75250, "phy_start" },
	{ 0x9b34997c, "phy_find_first" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x3963cf1a, "device_find_child" },
	{ 0xc5850110, "printk" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xa00aca2a, "dql_completed" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0xf7f271ce, "dma_direct_map_page" },
	{ 0x5792f848, "strlcpy" },
	{ 0x3ef84baf, "dma_alloc_attrs" },
	{ 0xe134bfb1, "phy_attached_print" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x3513190d, "__dev_kfree_skb_irq" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0x568ff55a, "dma_direct_unmap_page" },
	{ 0x83ff0628, "napi_gro_receive" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xfdbaf8c3, "phy_connect_direct" },
	{ 0x7ea19302, "put_device" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x9cb986f2, "vmalloc_base" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0xb01c5e76, "dev_driver_string" },
	{ 0x32558580, "pskb_expand_head" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x963cf8c8, "get_device" },
	{ 0x76d9b876, "clk_set_rate" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x37a0cba, "kfree" },
	{ 0x8ddcee7d, "___pskb_trim" },
	{ 0xedc03953, "iounmap" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x3c85a791, "device_get_mac_address" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0x15314fce, "consume_skb" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0x9caa394e, "is_acpi_device_node" },
	{ 0xd1b279c, "devm_platform_ioremap_resource" },
	{ 0xa637b975, "dma_ops" },
	{ 0xc1514a3b, "free_irq" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x34d24cd5, "genphy_restart_aneg" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emac");
MODULE_ALIAS("of:N*T*Cqcom,fsm9900-emacC*");
MODULE_ALIAS("acpi*:QCOM8070:*");

MODULE_INFO(srcversion, "1DAA42A8C6AF2097C731A27");
