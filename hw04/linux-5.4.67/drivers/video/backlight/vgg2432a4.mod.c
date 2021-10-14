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
	{ 0x41fd2230, "ili9320_write_regs" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x2039c884, "ili9320_write" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xc8becb14, "ili9320_probe_spi" },
	{ 0xc4c7aad7, "ili9320_remove" },
	{ 0x76f77637, "ili9320_shutdown" },
	{ 0x4b242c29, "ili9320_suspend" },
	{ 0x7063f64a, "ili9320_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "ili9320");


MODULE_INFO(srcversion, "0EB601BCEF7FAB463811D09");
