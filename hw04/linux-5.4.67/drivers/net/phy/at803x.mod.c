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
	{ 0x1ec27193, "phy_resolve_aneg_pause" },
	{ 0xae9fc6e0, "genphy_read_lpa" },
	{ 0x2c17b6ea, "genphy_update_link" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xf9a482f9, "msleep" },
	{ 0xbe9912d, "mdio_device_reset" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xb1a2e35e, "genphy_aneg_done" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x8febebf4, "phy_modify" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x37d01767, "phy_write_mmd" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:000000000100110111010000011?0110");
MODULE_ALIAS("mdio:000000000100110111010000011?0100");
MODULE_ALIAS("mdio:000000000100110111010000011?0010");

MODULE_INFO(srcversion, "5D2B7989C0CCFABE8A09D1C");
