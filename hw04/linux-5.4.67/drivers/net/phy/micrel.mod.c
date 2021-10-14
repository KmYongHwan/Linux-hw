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
	{ 0xc775cce6, "genphy_write_mmd_unsupported" },
	{ 0xbe13ded4, "genphy_read_mmd_unsupported" },
	{ 0x66cb027b, "phy_drivers_unregister" },
	{ 0xb2bc5d26, "phy_drivers_register" },
	{ 0x12a38747, "usleep_range" },
	{ 0xfae95686, "genphy_resume" },
	{ 0x7f7bebad, "__genphy_config_aneg" },
	{ 0xb601be4c, "__x86_indirect_thunk_rdx" },
	{ 0xa34df50d, "phy_init_hw" },
	{ 0x15d2f64, "genphy_read_status" },
	{ 0x556e4390, "clk_get_rate" },
	{ 0xb1fa0e0e, "devm_clk_get" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x5792f848, "strlcpy" },
	{ 0x8febebf4, "phy_modify" },
	{ 0x71d01947, "genphy_read_abilities" },
	{ 0x34d24cd5, "genphy_restart_aneg" },
	{ 0xb5400524, "phy_read_mmd" },
	{ 0x37d01767, "phy_write_mmd" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x45d7679, "mdiobus_write" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x9e018069, "genphy_suspend" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:????????????0010000101100001000?");
MODULE_ALIAS("mdio:????????00100010000101100010????");
MODULE_ALIAS("mdio:????????00100010000101100100????");
MODULE_ALIAS("mdio:????????0010001000010110000110??");
MODULE_ALIAS("mdio:????????00100010000101110010????");
MODULE_ALIAS("mdio:????????001000100001010101010101");
MODULE_ALIAS("mdio:????????001000100001010101010110");
MODULE_ALIAS("mdio:????????00100010000101010001????");
MODULE_ALIAS("mdio:????????00100010000101010101????");
MODULE_ALIAS("mdio:????????00100010000101010111????");
MODULE_ALIAS("mdio:????????00100010000101010110????");
MODULE_ALIAS("mdio:????????00001110011100100011????");
MODULE_ALIAS("mdio:????????00100010000101000011????");

MODULE_INFO(srcversion, "9F371977E644BB5DDD10891");
