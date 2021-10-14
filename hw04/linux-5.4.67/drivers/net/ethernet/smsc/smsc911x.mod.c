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
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0xc5850110, "printk" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x2bc97e5a, "device_property_present" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x3c85a791, "device_get_mac_address" },
	{ 0xabf468d4, "device_get_phy_mode" },
	{ 0x815588a6, "clk_enable" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x59f91a4d, "regulator_bulk_enable" },
	{ 0xe4413db4, "clk_get" },
	{ 0xbb7c97db, "devm_gpiod_get_optional" },
	{ 0x521d5d13, "regulator_bulk_get" },
	{ 0x93a219c, "ioremap_nocache" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0x85bd1608, "__request_region" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xb8e75250, "phy_start" },
	{ 0x4b2dcc89, "netdev_err" },
	{ 0xe5c0e769, "netdev_warn" },
	{ 0x927a00cc, "phy_support_asym_pause" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0xfdbaf8c3, "phy_connect_direct" },
	{ 0x9b34997c, "phy_find_first" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x6d2e408f, "irq_get_irq_data" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x88c30f54, "__dev_kfree_skb_any" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x5a889429, "phy_stop" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xf29affd6, "netif_device_attach" },
	{ 0x330e7414, "__pm_runtime_resume" },
	{ 0x6389d8f4, "pm_runtime_enable" },
	{ 0x12a38747, "usleep_range" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x78041b8f, "byte_rev_table" },
	{ 0x69dd3b5b, "crc32_le" },
	{ 0xf3744f5f, "netdev_info" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xbb61b5d4, "netif_device_detach" },
	{ 0x64a03d24, "__pm_runtime_set_status" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xf9a482f9, "msleep" },
	{ 0x3f0546a8, "ioread32_rep" },
	{ 0xbfc177bc, "iowrite32_rep" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x5792f848, "strlcpy" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0xdce7165b, "__pm_runtime_disable" },
	{ 0x931d3975, "__pm_runtime_idle" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xedc03953, "iounmap" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x77358855, "iomem_resource" },
	{ 0x24519c40, "platform_get_resource_byname" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xff426c78, "regulator_bulk_free" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x8cf22ace, "regulator_bulk_disable" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xbb3d2c11, "pv_ops" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("acpi*:ARMH9118:*");

MODULE_INFO(srcversion, "7D25717AB7E67F47BCF02E0");
