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
	{ 0xfae95686, "genphy_resume" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x37d01767, "phy_write_mmd" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdff50119, "phy_restore_page" },
	{ 0x12a38747, "usleep_range" },
	{ 0xd1790f33, "phy_save_page" },
	{ 0xb5400524, "phy_read_mmd" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9e018069, "genphy_suspend" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x570898ab, "__mdiobus_read" },
	{ 0x5023992c, "__mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000010011????");

MODULE_INFO(srcversion, "15AE7DD4C1E339BA1265926");
