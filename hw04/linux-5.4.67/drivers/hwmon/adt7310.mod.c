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
	{ 0x20c3f714, "adt7x10_dev_pm_ops" },
	{ 0xa58a74ac, "driver_unregister" },
	{ 0xe4324b36, "__spi_register_driver" },
	{ 0x85b7373, "spi_sync" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0xc7666132, "spi_write_then_read" },
	{ 0x16c39c8, "adt7x10_probe" },
	{ 0xf1de7d06, "spi_get_device_id" },
	{ 0xb76d7398, "adt7x10_remove" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "adt7x10");

MODULE_ALIAS("spi:adt7310");
MODULE_ALIAS("spi:adt7320");

MODULE_INFO(srcversion, "2C289629AC4D8E73FA7D8E1");
