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
	{ 0xada83f40, "lan9303_register_set" },
	{ 0xf0207356, "mdio_driver_unregister" },
	{ 0xd399e37f, "mdio_driver_register" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x15e6dc3e, "lan9303_probe" },
	{ 0xeb74317, "__devm_regmap_init" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ea2c95c, "__x86_indirect_thunk_rax" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x4418f81d, "mdiobus_read_nested" },
	{ 0xda08cc75, "mdiobus_write_nested" },
	{ 0x9f0815b9, "lan9303_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "lan9303-core");

MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdio");
MODULE_ALIAS("of:N*T*Csmsc,lan9303-mdioC*");

MODULE_INFO(srcversion, "DC115F40B08BF0FEE81EF31");
