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
	{ 0xfae95686, "genphy_resume" },
	{ 0x9e018069, "genphy_suspend" },
	{ 0x4437de01, "phy_basic_t1_features" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x2c17b6ea, "genphy_update_link" },
	{ 0xcca6ed07, "genphy_soft_reset" },
	{ 0x12a38747, "usleep_range" },
	{ 0x8febebf4, "phy_modify" },
	{ 0xfce9c328, "devm_hwmon_device_register_with_info" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9166fada, "strncpy" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000110000000110111000100????");
MODULE_ALIAS("mdio:0000000110000000110111010000????");

MODULE_INFO(srcversion, "9E0BCA4F63061AAAD15C779");
