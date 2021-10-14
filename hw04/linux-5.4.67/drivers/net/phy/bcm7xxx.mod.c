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
	{ 0xcca6ed07, "genphy_soft_reset" },
	{ 0xa78b8159, "bcm_phy_get_strings" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xee18e922, "bcm_phy_enable_apd" },
	{ 0x7762bd79, "bcm_phy_r_rc_cal_reset" },
	{ 0xf427bb6f, "bcm_phy_write_misc" },
	{ 0x718b036e, "bcm_phy_28nm_a0b0_afe_config_init" },
	{ 0x40512701, "bcm_phy_get_sset_count" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x575e9e2c, "bcm_phy_get_stats" },
	{ 0x34267738, "bcm_phy_downshift_get" },
	{ 0x34d24cd5, "genphy_restart_aneg" },
	{ 0x23daf245, "bcm_phy_set_eee" },
	{ 0x2cef4e06, "bcm_phy_downshift_set" },
	{ 0xc5850110, "printk" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "bcm-phy-lib");

MODULE_ALIAS("mdio:1010111000000010010100101000????");
MODULE_ALIAS("mdio:1010111000000010010100010010????");
MODULE_ALIAS("mdio:1010111000000010010100011001????");
MODULE_ALIAS("mdio:1010111000000010010100001001????");
MODULE_ALIAS("mdio:1010111000000010010100111011????");
MODULE_ALIAS("mdio:1010111000000010010100011010????");
MODULE_ALIAS("mdio:1010111000000010010100100110????");
MODULE_ALIAS("mdio:0110000000001101100001001001????");
MODULE_ALIAS("mdio:0110000000001101100001100101????");
MODULE_ALIAS("mdio:0110000000001101100001001011????");
MODULE_ALIAS("mdio:0110000000001101100001101011????");
MODULE_ALIAS("mdio:0110000000001101100001110011????");
MODULE_ALIAS("mdio:1010111000000010010100101110????");
MODULE_ALIAS("mdio:0110000000001101100001001000????");
MODULE_ALIAS("mdio:0110000000001101100001110101????");
MODULE_ALIAS("mdio:0110000000001101100001010001????");

MODULE_INFO(srcversion, "B5D6F2866B0E570DECC60D2");
