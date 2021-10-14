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
	{ 0x9e018069, "genphy_suspend" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8ee376d1, "phy_modify_mmd" },
	{ 0x37d01767, "phy_write_mmd" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0x570898ab, "__mdiobus_read" },
	{ 0x5023992c, "__mdiobus_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xb5400524, "phy_read_mmd" },
	{ 0x8febebf4, "phy_modify" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x3a8ba51f, "device_property_read_u32_array" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x15d2f64, "genphy_read_status" },
	{ 0x5792f848, "strlcpy" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000001010000011101111000010????");
MODULE_ALIAS("mdio:0000001010000011101111000011????");

MODULE_INFO(srcversion, "5AE159ED110A57944C3EEE0");
