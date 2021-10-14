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
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:????000110000001101110001000????");
MODULE_ALIAS("mdio:????000110000001101110001011????");
MODULE_ALIAS("mdio:????000110000001101110001010????");
MODULE_ALIAS("mdio:????000000011000000110111000????");

MODULE_INFO(srcversion, "7BD403DBB1FC94027553CA1");
