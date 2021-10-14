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
	{ 0xc775cce6, "genphy_write_mmd_unsupported" },
	{ 0xbe13ded4, "genphy_read_mmd_unsupported" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0xdff50119, "phy_restore_page" },
	{ 0x121115cb, "__phy_modify" },
	{ 0x6aab3ed5, "phy_select_page" },
	{ 0x5569741e, "__dynamic_dev_dbg" },
	{ 0x8964bb9f, "phy_write_paged" },
	{ 0x71d01947, "genphy_read_abilities" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0x890dc128, "phy_modify_paged_changed" },
	{ 0x15d2f64, "genphy_read_status" },
	{ 0xab10236a, "phy_read_paged" },
	{ 0x9e018069, "genphy_suspend" },
	{ 0xfae95686, "genphy_resume" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x570898ab, "__mdiobus_read" },
	{ 0x5023992c, "__mdiobus_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x8febebf4, "phy_modify" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "F658EA91F2472E94B73D666");
