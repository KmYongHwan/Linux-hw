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
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0x7459220b, "module_layout" },
	{ 0x129334ae, "sfp_parse_support" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0xedec5990, "kmalloc_caches" },
	{ 0x8d4bed43, "phy_disconnect" },
	{ 0x37e33534, "sfp_register_upstream" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x538d073d, "phy_duplex_to_str" },
	{ 0x5a889429, "phy_stop" },
	{ 0x5eb06dce, "phy_attach_direct" },
	{ 0xd53f74e9, "fwnode_handle_put" },
	{ 0x18e4f8aa, "swphy_read_reg" },
	{ 0x4971717c, "phy_ethtool_ksettings_set" },
	{ 0xe6b0c66a, "dev_printk" },
	{ 0x99e26883, "phy_ethtool_ksettings_get" },
	{ 0x97e005d1, "netif_carrier_on" },
	{ 0x6ecaed18, "phy_ethtool_get_wol" },
	{ 0x34b60257, "netif_carrier_off" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x250dc6c8, "fwnode_property_present" },
	{ 0xf464add, "fwnode_property_read_string" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x526c95e, "__dynamic_netdev_dbg" },
	{ 0xbeb032cb, "phy_ethtool_get_eee" },
	{ 0x2c5e4e3e, "phy_set_asym_pause" },
	{ 0xc20379fa, "fwnode_get_named_child_node" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0x9130787b, "sfp_unregister_upstream" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x608bab1f, "sfp_select_interface" },
	{ 0xb8e75250, "phy_start" },
	{ 0x977f511b, "__mutex_init" },
	{ 0xccf52bc9, "sfp_upstream_start" },
	{ 0xe6f3e7fe, "fwnode_get_named_gpiod" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x8a62b81b, "sfp_upstream_stop" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x87b4f5a9, "netdev_printk" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x3a7c2ff, "phy_detach" },
	{ 0x85ef0bf5, "phy_init_eee" },
	{ 0xc2fba3f5, "phy_request_interrupt" },
	{ 0xb8d89726, "fwnode_property_read_u32_array" },
	{ 0x6209f49, "phy_lookup_setting" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xadfdfcef, "__bitmap_andnot" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xf3e6402e, "__bitmap_equal" },
	{ 0x9a7610f8, "phy_get_eee_err" },
	{ 0xe4b818c3, "phy_speed_to_str" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xa4031b7f, "sfp_parse_port" },
	{ 0x9a3e4bed, "kmem_cache_alloc_trace" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0xde724e98, "fwnode_property_get_reference_args" },
	{ 0x42e842c6, "phy_ethtool_set_wol" },
	{ 0x37a0cba, "kfree" },
	{ 0x997f9924, "gpiod_to_irq" },
	{ 0x104220e0, "phy_ethtool_set_eee" },
	{ 0xb352177e, "find_first_bit" },
	{ 0xaad3d693, "phy_mii_ioctl" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x9a28da47, "gpiod_put" },
	{ 0x7299a4da, "phy_restart_aneg" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xb4792dec, "gpiod_get_value_cansleep" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "69F629E54E0E0D9525C6F23");
