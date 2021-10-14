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
	{ 0x71f2a39c, "genphy_c45_read_mdix" },
	{ 0xec4372ae, "genphy_c45_read_pma" },
	{ 0x87955d54, "phy_resolve_aneg_linkmode" },
	{ 0x8c6a1f16, "genphy_c45_read_lpa" },
	{ 0xc9321527, "genphy_c45_read_link" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0xfce9c328, "devm_hwmon_device_register_with_info" },
	{ 0x3abeb957, "devm_add_action" },
	{ 0x11089ac7, "_ctype" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x9a936997, "genphy_c45_pma_read_abilities" },
	{ 0x88ff57f8, "genphy_c45_pma_setup_forced" },
	{ 0xf4606823, "genphy_c45_check_and_restart_aneg" },
	{ 0x4bd2e64b, "phy_modify_mmd_changed" },
	{ 0x1a4a0f7a, "genphy_c45_an_config_aneg" },
	{ 0x37d01767, "phy_write_mmd" },
	{ 0x8ee376d1, "phy_modify_mmd" },
	{ 0x13052c63, "genphy_c45_aneg_done" },
	{ 0xb5400524, "phy_read_mmd" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000101011000010011010????");
MODULE_ALIAS("mdio:0000000000101011000010011011????");

MODULE_INFO(srcversion, "FC53AFC51E4CBF536EB9A87");
