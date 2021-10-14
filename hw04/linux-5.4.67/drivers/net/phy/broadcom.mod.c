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
	{ 0xa78b8159, "bcm_phy_get_strings" },
	{ 0xfae95686, "genphy_resume" },
	{ 0x9e018069, "genphy_suspend" },
	{ 0x6e8cd20a, "bcm_phy_config_intr" },
	{ 0xec8dd9f9, "bcm_phy_ack_intr" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x66ed90ea, "bcm_phy_read_exp" },
	{ 0xc2df3f85, "bcm_phy_write_exp" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0x7cc9f878, "bcm_phy_write_shadow" },
	{ 0x190d3b32, "bcm_phy_read_shadow" },
	{ 0x278acc43, "bcm54xx_auxctl_write" },
	{ 0xd5e01da5, "bcm54xx_auxctl_read" },
	{ 0x15d2f64, "genphy_read_status" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x40512701, "bcm_phy_get_sset_count" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x575e9e2c, "bcm_phy_get_stats" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bcm-phy-lib");

MODULE_ALIAS("mdio:0000000000100000011000000111????");
MODULE_ALIAS("mdio:0000000000100000011000001110????");
MODULE_ALIAS("mdio:0110000000001101100001001010????");
MODULE_ALIAS("mdio:0000000000100000011000001100????");
MODULE_ALIAS("mdio:0000001101100010010111100110????");
MODULE_ALIAS("mdio:0000001101100010010111010001????");
MODULE_ALIAS("mdio:0000000000100000011000001011????");
MODULE_ALIAS("mdio:0000000101000011101111001010????");
MODULE_ALIAS("mdio:0000001101100010010111010000????");
MODULE_ALIAS("mdio:0000000101000011101111001011????");
MODULE_ALIAS("mdio:0000000101000011101111010110????");
MODULE_ALIAS("mdio:0000000101000011101111010111????");
MODULE_ALIAS("mdio:0000001101100010010111011001????");
MODULE_ALIAS("mdio:0000000101000011101111000111????");
MODULE_ALIAS("mdio:0000000101000011101111000011????");
MODULE_ALIAS("mdio:0000000101000011101111001111????");
MODULE_ALIAS("mdio:0000001101100010010111001101????");

MODULE_INFO(srcversion, "2ED3CE9E6E13220E56C7318");
