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
	{ 0x74d22198, "phy_ethtool_set_link_ksettings" },
	{ 0x982fe6e6, "phy_ethtool_get_link_ksettings" },
	{ 0xca0e475a, "ethtool_op_get_ts_info" },
	{ 0xe6689185, "ethtool_op_get_link" },
	{ 0xb1da8e4, "eth_validate_addr" },
	{ 0xb3b84165, "eth_mac_addr" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xa3a17ff3, "phy_attached_info" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x927a00cc, "phy_support_asym_pause" },
	{ 0xcb3282b, "phy_set_max_speed" },
	{ 0xf27acad9, "phy_connect" },
	{ 0x9b34997c, "phy_find_first" },
	{ 0x168728b, "__mdiobus_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb8956b20, "mdiobus_alloc_size" },
	{ 0xbfa9759f, "phy_register_fixup_for_uid" },
	{ 0xd4f82b0b, "register_netdev" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x6ab9090f, "netif_napi_add" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x553e7cde, "devm_ioremap_resource" },
	{ 0xa943b224, "platform_get_resource" },
	{ 0x2192013e, "alloc_etherdev_mqs" },
	{ 0xfd6e5b19, "platform_get_irq" },
	{ 0xb8e75250, "phy_start" },
	{ 0x342410f4, "phy_start_aneg" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x5a889429, "phy_stop" },
	{ 0xddce8d3c, "napi_disable" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4fd745b8, "netif_tx_wake_queue" },
	{ 0x6a641f96, "__napi_schedule" },
	{ 0xe3611c52, "napi_schedule_prep" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xa1a544ef, "skb_tstamp_tx" },
	{ 0x3812050a, "_raw_spin_unlock_irqrestore" },
	{ 0x15314fce, "consume_skb" },
	{ 0xc8676d46, "skb_clone_tx_timestamp" },
	{ 0x51760917, "_raw_spin_lock_irqsave" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0x837b7b09, "__dynamic_pr_debug" },
	{ 0xc5850110, "printk" },
	{ 0x3f9d1335, "napi_complete_done" },
	{ 0x7b092212, "netif_receive_skb" },
	{ 0x57c0cb89, "eth_type_trans" },
	{ 0x9c160d9e, "skb_put" },
	{ 0xd5209ccf, "__netdev_alloc_skb" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xa80ea35, "free_netdev" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc4e35547, "unregister_netdev" },
	{ 0xbf023123, "mdiobus_free" },
	{ 0x4b28aef1, "mdiobus_unregister" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "9125DB506D30BF89D51DE45");
