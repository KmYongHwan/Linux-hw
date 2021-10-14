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
	{ 0x442639ef, "param_ops_uint" },
	{ 0xeed57dfe, "param_ops_int" },
	{ 0x3054dfcf, "param_ops_bool" },
	{ 0xf2aa42ba, "platform_driver_unregister" },
	{ 0x9d2da1a6, "__platform_driver_register" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xcd729188, "i2c_add_numbered_adapter" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x12a38747, "usleep_range" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x39932179, "i2c_del_adapter" },
	{ 0x3c2605ec, "kempld_release_mutex" },
	{ 0xe4185731, "kempld_write8" },
	{ 0x84e5c4e2, "kempld_read8" },
	{ 0x3872a2ca, "kempld_get_mutex" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "kempld-core");


MODULE_INFO(srcversion, "4B4CE64063497498A43C78C");
