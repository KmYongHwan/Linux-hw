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
	{ 0xb1a2e35e, "genphy_aneg_done" },
	{ 0xfae95686, "genphy_resume" },
	{ 0x9e018069, "genphy_suspend" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x8febebf4, "phy_modify" },
	{ 0x34d24cd5, "genphy_restart_aneg" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0x12a38747, "usleep_range" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0xede283d, "release_firmware" },
	{ 0x71deb539, "request_firmware" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15d2f64, "genphy_read_status" },
	{ 0x5792f848, "strlcpy" },
	{ 0xab10236a, "phy_read_paged" },
	{ 0xcca6ed07, "genphy_soft_reset" },
	{ 0xdff50119, "phy_restore_page" },
	{ 0x6aab3ed5, "phy_select_page" },
	{ 0xfbe0a63a, "phy_modify_paged" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x318d6fec, "mutex_is_locked" },
	{ 0x570898ab, "__mdiobus_read" },
	{ 0x5023992c, "__mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111000001100111????");
MODULE_ALIAS("mdio:0000000000000111000001010110????");
MODULE_ALIAS("mdio:0000000000000111000001010111????");
MODULE_ALIAS("mdio:0000000000000111000001110110????");
MODULE_ALIAS("mdio:0000000000000111000001110111????");
MODULE_ALIAS("mdio:0000000000000111000001001010????");
MODULE_ALIAS("mdio:0000000000000111000001111100????");

MODULE_INFO(srcversion, "C045801CC83F31A52AECBCA");
