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
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0x762c9c79, "phy_ethtool_nway_reset" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x9b34997c, "phy_find_first" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0xfdbaf8c3, "phy_connect_direct" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xb21aa7bc, "dmam_alloc_attrs" },
	{ 0x5f0b2042, "devm_ioremap_nocache" },
	{ 0xfef6ccb5, "__devm_request_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x7a2af7b4, "cpu_number" },
	{ 0x4629334c, "__preempt_count" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xb8e75250, "phy_start" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x7d628444, "memcpy_fromio" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x11d80dd4, "__skb_pad" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0xbb3d2c11, "pv_ops" },
	{ 0xb9e7429c, "memcpy_toio" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0x26c6d6e, "phy_print_status" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xe419bc99, "iowrite32be" },
	{ 0x5a889429, "phy_stop" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xe484e35f, "ioread32" },
	{ 0xfdb9b629, "ioread32be" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x14b6ffdc, "mdiobus_get_phy" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x3f66d19f, "netif_napi_del" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Copencores,ethoc");
MODULE_ALIAS("of:N*T*Copencores,ethocC*");

MODULE_INFO(srcversion, "55EFBC70096EBFBAEF654C5");
