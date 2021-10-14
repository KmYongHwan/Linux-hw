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
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x530b1e98, "pm_suspend" },
	{ 0xf184d189, "kernel_power_off" },
	{ 0x1e7bbcb3, "kernel_restart" },
	{ 0x54e550b, "kernel_halt" },
	{ 0x29361773, "complete" },
	{ 0x9a43e199, "_dev_info" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0x890b3d61, "_dev_err" },
	{ 0x25334866, "spi_async" },
	{ 0x6de13801, "wait_for_completion" },
	{ 0x1853cecf, "spi_slave_abort" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "45191AD4B025B47CCA7F646");
