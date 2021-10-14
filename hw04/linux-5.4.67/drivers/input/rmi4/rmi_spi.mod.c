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
	{ 0x3abeb957, "devm_add_action" },
	{ 0xc87daf8d, "rmi_register_transport_device" },
	{ 0x9a43e199, "_dev_info" },
	{ 0x977f511b, "__mutex_init" },
	{ 0x8392a4c1, "spi_setup" },
	{ 0x409bcb62, "mutex_unlock" },
	{ 0x2ab7989d, "mutex_lock" },
	{ 0x890b3d61, "_dev_err" },
	{ 0xdecd0b29, "__stack_chk_fail" },
	{ 0x85b7373, "spi_sync" },
	{ 0x23260c3d, "rmi_dbg" },
	{ 0x69acdf38, "memcpy" },
	{ 0xf4358872, "devm_kfree" },
	{ 0x74a69856, "devm_kmalloc" },
	{ 0xae38b920, "rmi_unregister_transport_device" },
	{ 0x14ef3897, "rmi_driver_suspend" },
	{ 0x6a14014e, "_dev_warn" },
	{ 0x6c7cbf19, "rmi_driver_resume" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "rmi_core");

MODULE_ALIAS("spi:rmi4_spi");

MODULE_INFO(srcversion, "E3070C099BEFE43BEC25371");
