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
	{ 0xf9a482f9, "msleep" },
	{ 0xb5400524, "phy_read_mmd" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x88ff57f8, "genphy_c45_pma_setup_forced" },
	{ 0xdd64e639, "strscpy" },
	{ 0xfce9c328, "devm_hwmon_device_register_with_info" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x11089ac7, "_ctype" },
	{ 0x4bd2e64b, "phy_modify_mmd_changed" },
	{ 0x8ee376d1, "phy_modify_mmd" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xf4606823, "genphy_c45_check_and_restart_aneg" },
	{ 0x99949898, "devm_kstrdup" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x37d01767, "phy_write_mmd" },
	{ 0x1a4a0f7a, "genphy_c45_an_config_aneg" },
	{ 0x66a50697, "genphy_c45_read_status" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xcb3282b, "phy_set_max_speed" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000001110100001101101000100????");
MODULE_ALIAS("mdio:0000001110100001101101000110????");
MODULE_ALIAS("mdio:0000001110100001101101001010????");
MODULE_ALIAS("mdio:0000001110100001101101001101????");
MODULE_ALIAS("mdio:0000001110100001101101001110????");
MODULE_ALIAS("mdio:0000001110100001101101011100????");
MODULE_ALIAS("mdio:0000001110100001101101001011????");

MODULE_INFO(srcversion, "924ECAA489B0569CEE6662E");
