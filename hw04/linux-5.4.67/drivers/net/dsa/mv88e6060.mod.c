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
	{ 0xf0207356, "mdio_driver_unregister" },
	{ 0xd399e37f, "mdio_driver_register" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x79aa04a2, "get_random_bytes" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x12a38747, "usleep_range" },
	{ 0xb8f3a3ea, "dsa_register_switch" },
	{ 0xda6d79e9, "dsa_switch_alloc" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xc5d1c9ab, "mdiobus_read" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x4418f81d, "mdiobus_read_nested" },
	{ 0xda08cc75, "mdiobus_write_nested" },
	{ 0x4d2f9ac4, "dsa_unregister_switch" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "dsa_core");


MODULE_INFO(srcversion, "1AB9A8F27F184A8076911A5");
