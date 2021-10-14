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
	{ 0xcc3d711f, "genphy_loopback" },
	{ 0x4648b2aa, "phy_gbit_fibre_features" },
	{ 0x15d2f64, "genphy_read_status" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x2c17b6ea, "genphy_update_link" },
	{ 0xf9a482f9, "msleep" },
	{ 0x6b1659c2, "genphy_setup_forced" },
	{ 0x34d24cd5, "genphy_restart_aneg" },
	{ 0x39b52d19, "__bitmap_and" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0x5792f848, "strlcpy" },
	{ 0x121115cb, "__phy_modify" },
	{ 0xd1790f33, "phy_save_page" },
	{ 0xab10236a, "phy_read_paged" },
	{ 0xfbe0a63a, "phy_modify_paged" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xbeb032cb, "phy_ethtool_get_eee" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x8964bb9f, "phy_write_paged" },
	{ 0xcca6ed07, "genphy_soft_reset" },
	{ 0x8febebf4, "phy_modify" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xfce9c328, "devm_hwmon_device_register_with_info" },
	{ 0x11089ac7, "_ctype" },
	{ 0x754d539c, "strlen" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x5023992c, "__mdiobus_write" },
	{ 0xdff50119, "phy_restore_page" },
	{ 0x570898ab, "__mdiobus_read" },
	{ 0x6aab3ed5, "phy_select_page" },
	{ 0x9e018069, "genphy_suspend" },
	{ 0xfae95686, "genphy_resume" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000101000001000011000110????");
MODULE_ALIAS("mdio:0000000101000001000011001001????");
MODULE_ALIAS("mdio:0000000101000001000011001100????");
MODULE_ALIAS("mdio:0000000101000001000011100001????");
MODULE_ALIAS("mdio:0000000101000001000011001011????");
MODULE_ALIAS("mdio:0000000101000001000011001101????");
MODULE_ALIAS("mdio:0000000101000001000011100101????");
MODULE_ALIAS("mdio:0000000101000001000011100011????");
MODULE_ALIAS("mdio:0000000101000001000011101001????");
MODULE_ALIAS("mdio:0000000101000001000011100100????");
MODULE_ALIAS("mdio:0000000101000001000011011101????");
MODULE_ALIAS("mdio:0000000101000001000011101011????");
MODULE_ALIAS("mdio:0000000101000001000011101010????");
MODULE_ALIAS("mdio:0000000101000001000011100110????");
MODULE_ALIAS("mdio:0000000101000001000011111001????");

MODULE_INFO(srcversion, "EEA184896650047843CFD48");
